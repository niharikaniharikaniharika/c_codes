#include <stdio.h>  
struct student  
{  
   char a;  
   int b;  
  char c;  
};  
int main()  
{  
   struct student s1; 
      printf("The size of the student structure is %d", sizeof(s1));  
   return 0;  
}  