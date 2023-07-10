#include <stdio.h>

int main() {
    printf("\nThe Program checks whether a given natural number n is a prime number.\n");
    int n;
    int i;
    int licznik=1;
    printf("enter a number: ");
    scanf("%d", &n);
    for(i=2;(i*i)<n;i++){
        if((n%i)==0){
            licznik++;
            printf("%d it is not the prime number\n", n);
            return 0;
        }
        else continue;
    }
    printf("%d it is the prime number\n", n);
    return 0;
}
