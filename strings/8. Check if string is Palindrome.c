#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], rev[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    strcpy(rev, str);
    strrev(rev); // using strrev (non-standard, but common in many compilers)

    // Alternative without strrev:
    int len = strlen(str);
    for(int i = 0; i < len/2; i++) {
        char temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }

    if(strcmp(str, rev) == 0)
        printf("Palindrome String.\n");
    else
        printf("Not a Palindrome String.\n");
    return 0;
}
