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
        {101, "priya shah", "B.Tech", "CSE", "Mathematics"},
        {102, "ankit jain", "B.Sc", "Physics", "Chemistry"},
        {103, "rajesh parmar", "B.Com", "Accounts", "Economics"},
        {104, "varun garg", "B.Tech", "ECE", "Physics"},
        {105, "maya rathore", "B.A", "History", "Political Science"},
        {106, "akansha shah", "B.Tech", "IT", "Data Science"},
        {107, "ronak gupta", "B.Sc", "Biology", "Zoology"},
        {108, "ved garg", "B.Tech", "Mechanical", "Thermodynamics"},
        {109, "aryan rochani", "B.Com", "Finance", "Taxation"},
        {110, "jisha tindwani", "B.A", "English", "Literature"}
    };

    printAllNames(students, 10);

    int roll;
    printf("\nEnter Roll Number to search: ");
    scanf("%d", &roll);
    printByRoll(students, 10, roll);

    return 0;
}
