#include <stdio.h>
int main(){

 //marks details
int marks;
printf("Enter the student's marks");
scanf("%d", &marks);
char grade;
if (marks >= 90 && marks <= 100) 
{
grade = 'A';
} 
else if (marks >= 80 && marks <= 89) 
{
grade = 'B';
} 
else if (marks >= 70 && marks <= 79)
{
grade = 'C';
}
else if (marks >= 60 && marks <= 69)
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

