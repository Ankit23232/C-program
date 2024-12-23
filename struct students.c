#include <stdio.h>

struct Student {
    int roll_no;
    char name[20];
    int marks;
};

void display(struct Student s);

void main() {
    struct Student st;  
    printf("Roll no: ");
    scanf("%d", &st.roll_no); 
    printf("Name: ");
    scanf("%s", st.name); 
    printf("Enter marks: ");
    scanf("%d", &st.marks); 

    display(st); 
}

void display(struct Student st) {
    printf("Roll no: %d\n", st.roll_no);
    printf("Name: %s\n", st.name);
    printf("Marks: %d\n", st.marks);
}
