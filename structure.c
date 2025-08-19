#include<stdio.h>

struct student{
    int roll_no;
    char student_name[50];
};
int main(){
    
    struct student s1 = {25, "niharika"};  
    struct student *ptr = &s1;  
  
    
    printf("student roll no.: %d\n",ptr->roll_no);  
    printf("student Name: %s\n",ptr->student_name);  
  
    return 0;  
}  
  
