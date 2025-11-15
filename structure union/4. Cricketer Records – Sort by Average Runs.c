#include <stdio.h>
#include <string.h>

struct Cricketer {
    char name[50];
    int age;
    int matches;
    float average;
};

void sortByAverage(struct Cricketer c[], int n) {
    struct Cricketer temp;
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(c[j].average > c[j+1].average) {
                temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;
            }
        }
    }
}

void printCricketers(struct Cricketer c[], int n) {
    printf("\n%-20s %-5s %-8s %s\n", "Name", "Age", "Matches", "Average");
    printf("------------------------------------------------\n");
    for(int i = 0; i < n; i++) {
        printf("%-20s %-5d %-8d %.2f\n",
               c[i].name, c[i].age, c[i].matches, c[i].average);
    }
}

int main() {
    struct Cricketer players[10] = {
        {"Virat Kohli", 36, 113, 58.45},
        {"Rohit Sharma", 37, 98, 49.27},
        {"Babar Azam", 30, 52, 56.83},
        {"Steve Smith", 35, 109, 59.87},
        {"Kane Williamson", 34, 96, 54.31},
        {"Joe Root", 33, 142, 50.12},
        {"MS Dhoni", 43, 90, 50.57},
        {"Shakib Al Hasan", 37, 70, 38.44},
        {"Ben Stokes", 33, 102, 37.91},
        {"Ravindra Jadeja", 35, 74, 32.88}
    };

    printf("Before Sorting:\n");
    printCricketers(players, 10);

    sortByAverage(players, 10);

    printf("\nAfter Sorting by Average (Ascending):\n");
    printCricketers(players, 10);

    return 0;
}
