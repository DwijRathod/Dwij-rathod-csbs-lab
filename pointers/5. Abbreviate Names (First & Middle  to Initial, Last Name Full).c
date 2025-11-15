// 5_abbreviate_names.c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void abbreviate(char *fullName, char *abbr) {
    char *token, *delim = " ";
    int first = 1;
    abbr[0] = '\0';

    token = strtok(fullName, delim);
    while(token != NULL) {
        if(first) {
            abbr[strlen(abbr)] = toupper(token[0]);
            abbr[strlen(abbr)] = '.';
            abbr[strlen(abbr)] = ' ';
            first = 0;
        } else {
            // Last token - copy full last name
            strcat(abbr, token);
            break;
        }
        token = strtok(NULL, delim);
    }
}

int main() {
    char names[5][100], abbr[5][50];
    int n;

    printf("Enter number of names (max 5): ");
    scanf("%d", &n);
    getchar(); // consume newline

    printf("Enter %d full names:\n", n);
    for(int i = 0; i < n; i++) {
        fgets(names[i], 100, stdin);
        names[i][strcspn(names[i], "\n")] = 0;
        strcpy(names[i], names[i]); // clean copy
    }

    printf("\nAbbreviated Names:\n");
    for(int i = 0; i < n; i++) {
        abbreviate(names[i], abbr[i]);
        printf("%s\n", abbr[i]);
    }

    return 0;
}
