#include <stdio.h>
int prime(int n){
    int i;
    int l=0;
    for(i=1;i<=n/2;i++){
        if((n%i)==0){
            l++;
            if(l>1){
                return l;
            }
        }
    }
    return l;
}
int sq(int a, int n){
    int k;
    int p=1;
    for(k=1;k<=n;k++){
        p=p*a;
    }
    return p;
}
int tableCheck(int n,int tab[], int il){
    int i;
    int verified=0;
    for(i=0;i<=il;i++){
        if(n==tab[i]){
            verified=1;
            return verified;
        }
    }
    return verified;
}
int main() {
    printf("\nThe program prints Mersenne primes no larger than 2^20 (2 to the power of 20), using a generated table fragment from another algorithm\n");
    int A[] = {127, 8191, 131071, 524287};
    int B[7];
    int n;
    int j=0;
    for(n=2;n<20;n++){
        int l=prime(n);
        if(l==1){
            B[j]=n;
            j++;
        }
    }
    for(j=0;j<8;j++){
        int p=sq(2,B[j])-1;
        if(p<127){
            l=prime(p);
            if(l==1){
                printf("%d ", p);
            }
        }
        else{
            int verified=tableCheck(p,A,3);
            if(verified==1){
                printf("%d ", p);
            }
        }
    }
    printf("\n");
}