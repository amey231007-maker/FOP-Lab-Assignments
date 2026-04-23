#include <stdio.h>
#include <string.h>

void clear_buffer() {
    while (getchar() != '\n');
}

int main() {
    char str1[100], str2[100];
    int choice;

    do {
        printf("\n1.Length\n2.Copy\n3.Concat\n4.Compare\n5.Find Char\n6.Exit\n");
        scanf("%d", &choice);
        clear_buffer();

        switch (choice) {
            case 1:
                fgets(str1, 100, stdin);
                str1[strcspn(str1,"\n")] = 0;
                printf("Length: %lu\n", strlen(str1));
                break;

            case 2:
                fgets(str1,100,stdin);
                str1[strcspn(str1,"\n")] = 0;
                strcpy(str2, str1);
                printf("Copied: %s\n", str2);
                break;

            case 3:
                fgets(str1,100,stdin);
                str1[strcspn(str1,"\n")] = 0;
                fgets(str2,100,stdin);
                str2[strcspn(str2,"\n")] = 0;
                strcat(str1, str2);
                printf("Concat: %s\n", str1);
                break;

            case 4:
                fgets(str1,100,stdin);
                str1[strcspn(str1,"\n")] = 0;
                fgets(str2,100,stdin);
                str2[strcspn(str2,"\n")] = 0;
                printf(strcmp(str1,str2)==0?"Equal\n":"Not Equal\n");
                break;

            case 5: {
                char ch;
                fgets(str1,100,stdin);
                str1[strcspn(str1,"\n")] = 0;
                scanf("%c",&ch);
                char *p = strchr(str1,ch);
                if(p) printf("Position: %ld\n", p-str1+1);
                else printf("Not found\n");
                clear_buffer();
                break;
            }
        }

    } while(choice != 6);

    return 0;
}
