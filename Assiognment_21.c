#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *src, *dest;
    char f1[100], f2[100];
    int ch;

    printf("Source file: ");
    scanf("%s", f1);

    printf("Destination file: ");
    scanf("%s", f2);

    src = fopen(f1, "r");
    if (!src) {
        printf("Error opening source file\n");
        return 1;
    }

    dest = fopen(f2, "w");
    if (!dest) {
        printf("Error opening destination file\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    printf("File copied successfully\n");

    fclose(src);
    fclose(dest);

    return 0;
}
