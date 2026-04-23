#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str1[100], str2[100], sub[100], temp[100];

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;

    printf("1. Length: %lu\n", strlen(str1));

    strcpy(temp, str1);
    reverseString(temp);
    printf("2. Reverse: %s\n", temp);

    printf("Enter another string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;

    if (strcmp(str1, str2) == 0)
        printf("3. Strings are equal\n");
    else
        printf("3. Strings are not equal\n");

    if (strcmp(str1, temp) == 0)
        printf("4. Palindrome\n");
    else
        printf("4. Not Palindrome\n");

    printf("Enter substring: ");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = 0;

    if (strstr(str1, sub))
        printf("5. Substring found\n");
    else
        printf("5. Substring not found\n");

    return 0;
}
