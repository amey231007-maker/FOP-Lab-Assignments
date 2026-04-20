#include <stdio.h>
#include <math.h>
int main(){
    int b,dec=0,i=0,r;
    scanf("%d",&b);

    while(b!=0){
        r=b%10;
        dec+=r*pow(2,i);
        b/=10;
        i++;
    }
    printf("%d",dec);
    return 0;
}
