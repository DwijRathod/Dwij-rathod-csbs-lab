#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;

    int result = strcmp(str1, str2);
    if(result == 0)
        printf("Both strings are same.\n");
    else if(result < 0)
        printf("\"%s\" is lexicographically smaller than \"%s\"\n", str1, str2);
    else
        printf("\"%s\" is lexicographically greater than \"%s\"\n", str1, str2);
    return 0;
}
