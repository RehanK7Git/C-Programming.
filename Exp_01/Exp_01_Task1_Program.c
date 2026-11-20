#include<stdio.h>

int main()
{
char name[ ] = "REHAN";
int age = 19;
char student_class[ ] = "First year";
char division = 'C';
char uin[ ] = "261P052";

printf("==============================\n");
printf("    STUDENT PROFILE           \n");
printf("==============================\n");
printf("Name:\t\t%s\nAge:\t\t%d\nClass:\t\t%s\nDivision:\t%c\nUIN:\t\t%s\n",
name, age, student_class, division, uin);
printf("==============================\n");

return 0;
}
