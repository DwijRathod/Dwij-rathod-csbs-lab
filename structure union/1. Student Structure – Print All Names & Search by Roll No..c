#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    char course[30];
    char major[30];
    char minor[30];
};

void printAllNames(struct Student s[], int n) {
    printf("\nAll Student Names:\n");
    for(int i = 0; i < n; i++) {
        printf("%d. %s\n", i+1, s[i].name);
    }
}

void printByRoll(struct Student s[], int n, int roll) {
    for(int i = 0; i < n; i++) {
        if(s[i].roll == roll) {
            printf("\nStudent Found:\n");
            printf("Roll: %d\nName: %s\nCourse: %s\nMajor: %s\nMinor: %s\n",
                   s[i].roll, s[i].name, s[i].course, s[i].major, s[i].minor);
            return;
        }
    }
    printf("Student with Roll %d not found!\n", roll);
}

int main() {
    struct Student students[10] = {
        {101, "pankaj kumar", "B.Tech", "CSE", "Mathematics"},
        {102, "parul jaiswal", "B.Sc", "Physics", "Chemistry"},
        {103, "reena gupta", "B.Com", "Accounts", "Economics"},
        {104, "Shen chauhan", "B.Tech", "ECE", "Physics"},
        {105, "arayan maan", "B.A", "History", "Political Science"},
        {106, "mann chopra", "B.Tech", "IT", "Data Science"},
        {107, "priya mehta", "B.Sc", "Biology", "Zoology"},
        {108, "khushi jain", "B.Tech", "Mechanical", "Thermodynamics"},
        {109, "ved prajapati", "B.Com", "Finance", "Taxation"},
        {110, "karan shah", "B.A", "English", "Literature"}
    };

    printAllNames(students, 10);

    int roll;
    printf("\nEnter Roll Number to search: ");
    scanf("%d", &roll);
    printByRoll(students, 10, roll);

    return 0;
}

