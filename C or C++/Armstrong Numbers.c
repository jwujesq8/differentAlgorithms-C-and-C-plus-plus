#include <stdio.h>
int square(int a,int x){
    int p=1;
    for(int j=0;j<x;j++){
        p=p*a;
    }
    return p;
}
int main() {
    printf("\nThe Program prints all k-digit Armstrong Numbers for k=3,4,...,9.\n");
    for(int k=100;k<1000000000;k++){
        int sum=0;
        int n=0;
        int A[10];
        int cz=k;
        int i=1;
        while (cz>0){
            A[i]=cz%10;
            cz=cz/10;
            n++;
            i++;
        }
        for(int j=0;j<i;j++){
            int b=square(A[j],n);
            sum=b+sum;
            if(sum>k) {
                break;
                }
            }
        if (sum==k){
            printf("k=%d: %d\n", n,k);
        }
        else{
            for (int j = 0;j<i; j++)
                A[j] = 0;
        }
    }
}
