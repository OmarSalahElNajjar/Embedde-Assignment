#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[50];
    int student_id;
    int day;
    int month;
    int year;
    int score;
    struct student*next;
};
int main()
{
    printf("Welcome to our Embedded assignment\n");

    struct student student1;
    printf("enter the name of the student\n");
    scanf("%s", &student1.name);
    printf("enter the student_ID\n");
    scanf("%d", &student1.student_id);
    printf("enter the birthdate\n");
    printf("enter day / month/year\n");
    scanf("%d%d%d", &student1.day, &student1.month, &student1.year);
    printf("enter the previous year score \n");
    scanf("%d", &student1.score);
    return 0;
}
