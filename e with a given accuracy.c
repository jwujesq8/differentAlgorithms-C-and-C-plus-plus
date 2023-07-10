#include <stdio.h>
float change(int n){
    int i;
    float a=1;
    for(i=1;i<=n;i++){
        a=a*i;
    }
    a=1/a;
    return a;
}
int main() {
    printf("\nThe Program calculates the value of the number e with a given accuracy of eps>0.\n");
    int n,i;
    float e;
    float X[2048];
    X[0]=1;
    X[1]=X[0]+change(1);
    for(i=0;;i++){
        if((X[i+1]-X[i])>0){
            X[i+2]=X[i+1]+change(i+2);
            e=X[i+2];
        }
        else break;
    }
    printf("e = %f\n", e);
}

