#include<stdio.h>
struct student{
        char student_name;
        int roll_no;
        float marks;
}s;
    int main(){
        printf("Enter sturdent information:");
        printf("Enter name:");
        fgets(s.student_name, sizeof(s.student_name), stdin);

        printf("Enter roll no.");
        scanf("%d", &s.roll_no);
        printf("Enter marks:");
        scanf("%f",s.marks);
        
        printf("student Information:\n");
    printf("Name: %s", s.student_name);

    printf("Roll number: %d\n", s.roll_no);
    printf("Marks: %.1f\n", s.marks);

    return 0;
}
    