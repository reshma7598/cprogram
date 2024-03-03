#include <stdio.h>
int main(){

//Marks details
int Marks;
printf("Enter the student's Marks");
scanf("%d", &Marks);
char grade;
if (Marks >= 90 && Marks <= 100) 
{
grade = 'A';
} 
else if (Marks >= 80 && Marks <= 89) 
{
grade = 'B';
} 
else if (Marks >= 70 && Marks <= 79)
{
grade = 'C';
}
else if (Marks >= 60 && Marks <= 69)
{
grade = 'D';
}
else {
grade = 'F';
}
// Display the grade
printf("Grade: %c\n", grade);

return 0;
}

