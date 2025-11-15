#include <stdio.h>

struct student_data {
    int roll;
    char name[50];
    float physics, maths, chemistry;
    float total;
};

int main() {
    struct student_data s;

    printf("Enter Roll No: ");
    scanf("%d", &s.roll);
    getchar(); // consume newline

    printf("Enter Name: ");
    fgets(s.name, 50, stdin);
    s.name[strcspn(s.name, "\n")] = 0;

    printf("Enter marks in Physics, Maths, Chemistry: ");
    scanf("%f %f %f", &s.physics, &s.maths, &s.chemistry);

    s.total = s.physics + s.maths + s.chemistry;

    printf("\n--- Student Information ---\n");
    printf("Roll No: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Physics: %.2f\n", s.physics);
    printf("Maths: %.2f\n", s.maths);
    printf("Chemistry: %.2f\n", s.chemistry);
    printf("Total Marks: %.2f / 300\n", s.total);
    printf("Percentage: %.2f%%\n", (s.total/300)*100);

    return 0;
}
