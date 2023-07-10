#include <stdio.h>
int fill(int tab[]){
    int i;
    int j=0;
    for(i=2;i<101;i++){
        tab[j]=i;
        j++;
    }
}
int main() {
    printf("\nThe Program generates arrays of prime numbers from the range [2,100] using an Eratosthenes sieve and prints these numbers on the monitor screen.\n");
    int A[98];
    int j;
    int p;
    fill(A);
    int i;
    for(j=0;j<98/2;j++){
        if(A[j]!=0){
            p=A[j];
            for(i=j+p;i<99;i++){
                if(( (A[i]) % p )==0){
                    A[i]=0;
                }
                i=i+p-1;
            }
        }
    }
    printf("Prime numbers: ");
    for(i=0;i<99;i++){
        if(A[i]!=0){
            printf("%d  ", A[i]);
        }
    }
    printf("\n");
}
