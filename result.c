#include <stdio.h>
int main(){
    int m1,m2,m3,m4,m5,total;
    float per;

    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

    if(m1<40||m2<40||m3<40||m4<40||m5<40)
        printf("FAIL");
    else{
        total=m1+m2+m3+m4+m5;
        per=total/5.0;
        printf("Percentage=%.2f\n",per);

        if(per>=75) printf("Distinction");
        else if(per>=60) printf("First");
        else if(per>=50) printf("Second");
        else printf("Third");
    }
    return 0;
}
