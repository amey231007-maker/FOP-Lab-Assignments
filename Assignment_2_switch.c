#include <stdio.h>
int main(){
    int ch,n,i;
    float a,b,r=1;
    long fact=1;

    scanf("%d",&ch);

    switch(ch){
        case 1: scanf("%f%f",&a,&b); printf("%f",a+b); break;
        case 2: scanf("%f%f",&a,&b); printf("%f",a-b); break;
        case 3: scanf("%f%f",&a,&b); printf("%f",a*b); break;
        case 4: scanf("%f%f",&a,&b); if(b!=0) printf("%f",a/b); else printf("Error"); break;
        case 5: scanf("%f%d",&a,&n); for(i=0;i<n;i++) r*=a; printf("%f",r); break;
        case 6: scanf("%d",&n); for(i=1;i<=n;i++) fact*=i; printf("%ld",fact); break;
        default: printf("Invalid");
    }
    return 0;
}
