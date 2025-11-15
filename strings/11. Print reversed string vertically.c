#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    int len = strlen(str);
    for(int i = len-1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }
    return 0;
}
