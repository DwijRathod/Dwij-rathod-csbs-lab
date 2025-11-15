#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    for(int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
    printf("Lowercase: %s\n", str);
    return 0;
}
