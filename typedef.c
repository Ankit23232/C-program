#include <stdio.h>
#include <string.h>

typedef struct students {
	char name[20];
	char college[20];
	int student_id;
} stu;

void main(){
	stu st;
	strcpy (st.name, "Ankit Prajapati.");
	strcpy (st.college, "Herald College.");
	st.student_id = 2435944;
	
	printf("Name : %s\n", st.name);
	printf("College: %s\n", st.college);
	printf("College ID: %d\n", st.student_id);
}