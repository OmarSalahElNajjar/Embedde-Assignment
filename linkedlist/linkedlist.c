#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[50];
    int student_id;
    int day, month, year;
    int score;
    struct student*next;//pointer of name (next) that will be used  in the functions
};
struct student*head;
int L=0;// a global constant to save the length of the list
int number;//global constant to save number of students get by user used in function insert to make a list of students at  start of program
int index;//global constant to save index get by user used in function add by index
void add_at_begin()//that function is to save data in the head then made the previous head to be the second in the list
{
    struct student*node = NULL; //It's a node to save the data of the new input in it
    node=(struct student*)malloc(sizeof(struct student));//save a place in memory of after each other which have size of structure
    printf("Insert data for the new student at begin\n");
    printf("enter the name of the student\n");
    scanf("%s",(node->  name));
    printf("enter the student_ID\n");
    scanf("%d",(&node->  student_id));
    printf("enter the birth date\n");
    printf("enter day \n");
    scanf("%d",(&node->day));
    printf("enter month \n");
    scanf("%d",(&node->month));
    printf("enter year \n");
    scanf("%d",(&node->  year));
    printf("enter the previous year score \n");
    scanf("%d",(&node-> score));
    node->next=head;//after we get the data from  user we made the next of node points to head then put value of node in head
    head=node;
    printf("Inserted successfully\n");
    L++;//each call of this function will increase the length of list
}
void display()//function to print all list to see the changes
{
    struct student*tmp=NULL;//It's a node to get the data on it and print it of type pointer
    tmp=head;
    int i=1;
    while(tmp!=NULL)
    {
        printf("  name %d : %s \n",i,tmp->name);
        printf(" the student id of the student %d : %d \n",i,tmp->student_id);
        printf(" the birthday of the student %d :  %d %d %d \n",i,tmp->day,tmp->month,tmp->year);
        printf(" score %d :  %d \n",i,tmp->score);
        tmp=tmp->next;//after print the data of the node make the next of the node equal to the node so it will shift to the next data and print it
        i++;//counter to see the number of students in the list
    }
}
void add_at_end()//that function is to save data in the tail then made the next equal to null
{
    struct student*node2 = NULL;//pointer to point on the new value will the user enter
    struct student*tmp = NULL;//pointer made to compare  and initialized by null
    node2=(struct student*)malloc(sizeof(struct student));//save a place in memory of after each other which have size of structure
    printf("Insert data for the new student at end\n");
    printf("enter the name of the student\n");
    scanf("%s",(node2->  name));
    printf("enter the student_ID\n");
    scanf("%d",(&node2->  student_id));
    printf("enter the birth date\n");
    printf("enter day \n");
    scanf("%d",(&node2->day));
    printf("enter month \n");
    scanf("%d",(&node2->month));
    printf("enter year \n");
    scanf("%d",(&node2->  year));
    printf("enter the previous year score \n");
    scanf("%d",(&node2-> score));
    tmp=head;//that we saved head in tmp to make the comparison
    while(tmp->next!=NULL)//while loop to see where is the end of list
    {
        tmp=tmp->next;//if pointer wasn't at end of list so make a shift to the next data to check it
    }
    tmp->next=node2;//if we reached to null so make the new data on the next of the last data in list then make next of node equal to null
    node2->next=NULL;
    printf("NEW STUDENT INSERTED AT END\n");
    L++;//increase the length of list by insert at end
}
void add_by_index(int m)//function to insert in middle by index that user give
{
    printf("Insert index for the new student \n");//ask the user to give the index we need
    scanf("%d",&m);
    struct student*node3 = NULL;//node to insert the new data given by the user
    struct student*tmp = NULL;//pointer made to compare  and initialized by null
    node3=(struct student*)malloc(sizeof(struct student));//save a place in memory of after each other which have size of structure
    if(m==1)//if condition the index that the user give is at first so he should make the add at begin
    {
        printf("THAT INDEX IS AT BEGIN SO PLEASE GO TO ADD AT BEGIN \n");
    }
    else if (m==L)//if condition the index that the user give is at last of list so he should make the add at end
    {
        printf("THAT INDEX IS AT END SO PLEASE GO TO ADD AT END \n");
    }
    else if(m<L && m>0)//if the index is at middle of list so make the add normal
    {
        printf("Insert data for the new student \n");
        printf("enter the name of the student\n");
        scanf("%s",(node3->  name));
        printf("enter the student_ID\n");
        scanf("%d",(&node3->  student_id));
        printf("enter the birth date\n");
        printf("enter day \n");
        scanf("%d",(&node3->day));
        printf("enter month \n");
        scanf("%d",(&node3->month));
        printf("enter year \n");
        scanf("%d",(&node3->  year));
        printf("enter the previous year score \n");
        scanf("%d",(&node3-> score));
        tmp=head;
        int i;
        for(i=1; i<m-1; i=i+1)//for loop to make a loop on the list until the complier reach the index he want to insert in it
        {
            tmp=tmp->next;
        }
        node3->next=tmp->next;
        tmp->next=node3;

    }
    else
        printf("THAT INDEX IS out of range of linked list \n");//if the index is greater than the list so it will give that message

}
void add_at_begin_oflinkedlist()//that function is to save data in the head then made the previous head to be the second in the list
{
    struct student*node = NULL; //It's a node to save the data of the new input in it
    node=(struct student*)malloc(sizeof(struct student));//save a place in memory of after each other which have size of structure
    printf("Insert data for the student #1\n");
    printf("enter the name of the student\n");
    scanf("%s",(node->  name));
    printf("enter the student_ID\n");
    scanf("%d",(&node->  student_id));
    printf("enter the birth date\n");
    printf("enter day \n");
    scanf("%d",(&node->day));
    printf("enter month \n");
    scanf("%d",(&node->month));
    printf("enter year \n");
    scanf("%d",(&node->  year));
    printf("enter the previous year score \n");
    scanf("%d",(&node-> score));
    node->next=head;//after we get the data from  user we made the next of node points to head then put value of node in head
    head=node;
    L++;//each call of this function will increase the length of list
}
void add_at_end_oflinkedlist()//that function is to save data in the tail then made the next equal to null
{
    struct student*node2 = NULL;//pointer to point on the new value will the user enter
    struct student*tmp = NULL;//pointer made to compare  and initialized by null
    node2=(struct student*)malloc(sizeof(struct student));//save a place in memory of after each other which have size of structure
    printf("enter the name of the student\n");
    scanf("%s",(node2->  name));
    printf("enter the student_ID\n");
    scanf("%d",(&node2->  student_id));
    printf("enter the birth date\n");
    printf("enter day \n");
    scanf("%d",(&node2->day));
    printf("enter month \n");
    scanf("%d",(&node2->month));
    printf("enter year \n");
    scanf("%d",(&node2->  year));
    printf("enter the previous year score \n");
    scanf("%d",(&node2-> score));
    tmp=head;//that we saved head in tmp to make the comparison
    while(tmp->next!=NULL)//while loop to see where is the end of list
    {
        tmp=tmp->next;//if pointer wasn't at end of list so make a shift to the next data to check it
    }
    tmp->next=node2;//if we reached to null so make the new data on the next of the last data in list then make next of node equal to null
    node2->next=NULL;
    printf("Inserted successfully\n");
    L++;//increase the length of list by insert at end
}
void create_linkedlist (int numbers)//function to insert students at start of program that ask the user about the number of students he want to insert in first
{
    printf("Enter number of students\n");//scan the number given by the user to give a initial value of the list of students
    scanf("%d",&numbers);
    add_at_begin_oflinkedlist();//call the function add begin to save the first student
    for(int k=1; k<numbers; k++)//make a loop to save the other students until the complier reach the number of students that the user gave
    {
        printf("Insert data for the student #%d\n",k+1);

        add_at_end_oflinkedlist();//call add at end
    }
}

int main()
{
    struct student*head = NULL ;
    head=(struct student*)malloc(sizeof(struct student));
    printf("Welcome to our Embedded assignment\n");
    //create_linkedlist(number);
    //add_at_begin();
    //add_at_end();
    //display();
    //add_by_index(index);
    //display();

}
