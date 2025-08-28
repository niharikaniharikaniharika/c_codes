#include<stdio.h>
#include<string.h>
struct employee
{
 int id;
  char name[20];
   struct date
    {
        int dd;
            int mm;
                int yyyy;

                 }doj;
                 }e1;

                 int main(){
                     e1.id=101;  
                        strcpy(e1.name, "niharika");  
                           e1.doj.dd=14;  
                              e1.doj.mm=12;  
                                 e1.doj.yyyy=2006;  
                                   
                                       printf( "employee id : %d\n", e1.id);  
                                         printf( "employee name : %s\n", e1.name);  
                                            printf( "employee date of joining (dd/mm/yyyy) : %d/%d/%d\n", e1.doj.dd, e1.doj.mm, e1.doj.yyyy);  
                                               return 0; 
                                               }  
