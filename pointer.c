#include <stdio.h>
#include <string.h>

struct Student {
	int roll_no;
	char name[20];
	char address[20];
    int marks;
};
 
int main()
{
 
    struct Student s1;
    struct Student* ptr = &s1;
 
    s1.roll_no = 3;
    strcpy(s1.name, "Ankit Prajapati.");
    strcpy(s1.address, "Hadigaun, Kathmandu");
    s1.marks = 90;
 
    printf("Roll Number: %d\n", (*ptr).roll_no);
    printf("Name: %s\n", (*ptr).name);
    printf("Branch: %s\n", (*ptr).address);
    printf("Batch: %d", (*ptr).marks);
 
    return 0;
};