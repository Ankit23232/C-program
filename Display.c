#include <stdio.h>

struct Student {
	int roll_no;
	char name[20];
    int marks;
};

void display (struct student s);

void main(){
	struct student st;
	printf("Roll no: ");
	scanf("%d \n", st.roll_no);
	printf("Name: ");
	scanf("%s \n", st.name);
	printf("Enter marks: %d\n", st.marks);
}

void display (struct student st){
	printf("Roll no: %d\n", st.roll_no);
	printf("Name: %s\n", st.name);
	printf("Marks: %d\n", st.marks);
}
