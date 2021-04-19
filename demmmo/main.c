#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {

	char name [20];
	int student_id ;
	int day;
	int month;
	int year;
	int score ;
};

void insertinbegin();
void insertinend();
void insertinmiddle();

int main()
{
    printf("Welcome to our linked list assignment on github \n \n");
    int noofstudents;
    printf("Enter the number of students : \n"); /* this number of students in initialize dynamic array  */
    scanf("%d", &noofstudents);
    struct student *stdp = (struct student *)calloc(noofstudents , sizeof(struct student));

  for(int i = 0; i < noofstudents; i++ )
    {
        strcpy(stdp[i].name, "ayman");
        stdp[i].student_id = 10;
        stdp[i].day= 10;
        stdp[i].month = 10;
        stdp[i].year = 10;
        stdp[i].score = 10;
    }


    /* opertions */
    printf("write 1 if you want to insert a student in the begin \n");
    printf("write 2 if you want to insert a student in the end \n");
    printf("write 3 if you want to insert a student in the middle\n");
    printf("write 4 if you don't need to inset\n");

     int operation;
     printf ("\nEnter operation number :  ");
    scanf("%d", &operation);
    /*choosing the operation you need*/
    while (operation!= 4 ){
        if (operation== 1){
            noofstudents = noofstudents+1;
            insertinbegin (noofstudents, stdp);}
        else if (operation== 2){
            noofstudents = noofstudents+1;
            insertinend(noofstudents, stdp);}
        else if (operation== 3){
            noofstudents = noofstudents+1;
            insertinmiddle (noofstudents, stdp);}
        else {
        printf ("\n \nPlease Enter the right operation number :  ");
        scanf("%d", &operation);}



        printf ("\n \nEnter operation number :  ");
        scanf("%d", &operation);

    }

    return 0;
}
/*function to Insert a new student in the beginning*/
void insertinbegin (int noofstudents, struct student *stdp){

    printf("This function makes you insert new student in the beginning :) ... \n \n");


    /* insert a new student */

        for (int i = noofstudents-1; i >= 0; i--){
             strcpy(stdp[i+1].name, stdp[i].name);
             stdp[i+1].student_id  = stdp[i].student_id;
             stdp[i+1].day  = stdp[i].day;
             stdp[i+1].month  = stdp[i].month;
             stdp[i+1].year  = stdp[i].year;
             stdp[i+1].score  = stdp[i].score;

        }
         /*details of a new student */

        printf("\nEnter details of the new student \n\n");

        printf("Enter name: ");
        scanf("%s", stdp->name);

        printf("Enter student id: ");
        scanf("%d", &stdp->student_id);

        printf("Enter day: ");
        scanf("%d", &stdp->day);

        printf("Enter month: ");
        scanf("%d", &stdp->month);

        printf("Enter year: ");
        scanf("%d", &stdp->year);

        printf("Enter score: ");
        scanf("%d", &stdp->score);

        /* printing the new dynamic array */

    for (int i = 0; i < noofstudents ; i++) {
        printf("\nDetail of student %d",i+1);
        printf("\t student name: %s", stdp[i].name);
        printf("\t Student id: %d", stdp[i].student_id);
        printf("\t Day: %d", stdp[i].day);
        printf("\tMonth: %d", stdp[i].month);
        printf("\tYear: %d", stdp[i].year);
        printf("\tScore: %d", stdp[i].score);
  }

    }
/*function to Insert a new student in the end*/
void insertinend (int noofstudents, struct student *stdp){
    printf("This function makes you insert new student in the end :) ... \n \n");

        printf("\nEnter details of the new student \n\n");

        printf("Enter name: ");
        scanf("%s", (stdp+noofstudents-1)->name);

        printf("Enter student id: ");
        scanf("%d", &(stdp+noofstudents-1)->student_id);

        printf("Enter day: ");
        scanf("%d", &(stdp+noofstudents-1)->day);

        printf("Enter month: ");
        scanf("%d", &(stdp+noofstudents-1)->month);

        printf("Enter year: ");
        scanf("%d", &(stdp+noofstudents-1)->year);

        printf("Enter score: ");
        scanf("%d", &(stdp+noofstudents-1)->score);


          for (int i = 0; i < noofstudents ; i++) {
        printf("\nDetail of student %d",i+1);
        printf("\t student name: %s", stdp[i].name);
        printf("\t Student id: %d", stdp[i].student_id);
        printf("\t Day: %d", stdp[i].day);
        printf("\tMonth: %d", stdp[i].month);
        printf("\tYear: %d", stdp[i].year);
        printf("\tScore: %d", stdp[i].score);
  }

    }
/*function to Insert a new student in the middle*/
void insertinmiddle (int noofstudents, struct student *stdp){
    printf("This function makes you insert new student in the middle :) ... \n \n");

    printf("Enter the index which you need to insert to : ");
    int index;
    scanf("%d", &index);
    /*insert a new student and copying the students in static array to dynamic array*/
    /*details of a new student */
        for (int i = noofstudents-index-1; i >= 0 ; i--){
            strcpy(stdp[index+i+1].name, stdp[index+i].name);
             stdp[index+i+1].student_id  = stdp[index+i].student_id;
             stdp[index+i+1].day  = stdp[index+i].day;
             stdp[index+i+1].month  = stdp[index+i].month;
             stdp[index+i+1].year  = stdp[index+i].year;
             stdp[index+i+1].score  = stdp[index+i].score;

        }
        printf("\nEnter details of the new student \n\n");

        printf("Enter name: ");
        scanf("%s", (stdp+index-1)->name);

        printf("Enter student id: ");
        scanf("%d", &(stdp+index-1)->student_id);

        printf("Enter day: ");
        scanf("%d", &(stdp+index-1)->day);

        printf("Enter month: ");
        scanf("%d", &(stdp+index-1)->month);

        printf("Enter year: ");
        scanf("%d", &(stdp+index-1)->year);

        printf("Enter score: ");
        scanf("%d", &(stdp+index-1)->score);



        for (int i = 0; i < noofstudents ; i++) {
        printf("\nDetail of student %d",i+1);
        printf("\t student name: %s", stdp[i].name);
        printf("\t Student id: %d", stdp[i].student_id);
        printf("\t Day: %d", stdp[i].day);
        printf("\tMonth: %d", stdp[i].month);
        printf("\tYear: %d", stdp[i].year);
        printf("\tScore: %d", stdp[i].score);
  }

    }



