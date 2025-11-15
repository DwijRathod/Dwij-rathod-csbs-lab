#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    for(int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
    printf("Uppercase: %s\n", str);
    return 0;
}
