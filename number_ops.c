#include <stdio.h>
#include <math.h>
int main(){
    int n,i,flag=1;
    long fact=1;

    scanf("%d",&n);

    if(n<=1) flag=0;
    for(i=2;i<=n/2;i++){
        if(n%i==0){ flag=0; break;}
    }

    if(flag) printf("Prime\n");
    else printf("Not Prime\n");

    for(i=1;i<=n;i++) fact*=i;
    printf("Factorial=%ld",fact);

    return 0;
}
