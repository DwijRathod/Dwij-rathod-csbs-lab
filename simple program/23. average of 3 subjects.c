int main()
 {
    int sub1, sub2, sub3, t, a;


    printf("Marks os maths is: ");
    scanf("%d", &sub1);

    printf("Marks of physics is: ");
    scanf("%d", &sub2);

    printf("Marks of chemistry is: ");
    scanf("%d", &sub3);

    t = sub1 + sub2 + sub3;

    a = t/ 3;

    printf("The total marks are:  %d\n", t);
    printf("The average marks are: %d\n", a);
}
