#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int a=0, e=0, i=0, o=0, u=0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    for(int j = 0; str[j]; j++) {
        char ch = tolower(str[j]);
        if(ch == 'a') a++;
        else if(ch == 'e') e++;
        else if(ch == 'i') i++;
        else if(ch == 'o') o++;
        else if(ch == 'u') u++;
    }

    printf("Frequency of vowels:\n");
    printf("A: %d\n", a);
    printf("E: %d\n", e);
    printf("I: %d\n", i);
    printf("O: %d\n", o);
    printf("U: %d\n", u);
    return 0;
}
