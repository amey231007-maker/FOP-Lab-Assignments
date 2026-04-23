#include <stdio.h>
struct student {
    int roll;
    char name[50];
    float marks[3], total, percentage;
};

int main(){
    int n,i,j;
    printf("Enter number of students: ");
    scanf("%d",&n);

    struct student s[n];

    for(i=0;i<n;i++){
        printf("Roll: ");
        scanf("%d",&s[i].roll);
        printf("Name: ");
        scanf("%s",s[i].name);

        s[i].total=0;
        for(j=0;j<3;j++){
            scanf("%f",&s[i].marks[j]);
            s[i].total+=s[i].marks[j];
        }
        s[i].percentage = s[i].total/3;
    }

    for(i=0;i<n;i++){
        printf("\n%d %s %.2f %.2f", s[i].roll, s[i].name, s[i].total, s[i].percentage);
    }
    return 0;
}
