#include <stdio.h>
int main() {
    int i;
    int r;
    printf("\nThe Program prints all perfect numbers not larger than 10^9:\n");
    for(int n=6; n<1000000000;n++){
        int sum=1;
        for(i=2;i*i<=n;i++){
            if(sum>n) break;
            else if((n%i)==0){
                sum=sum+i;
                r=n/i;
                if(r!=i) sum=sum+r;
            }
        }
        if(sum==n){
            printf("%d\n", n);
        }
    }
    return 0;
}