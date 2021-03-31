#include<stdio.h>
struct Students
{
    int age;
    double gpa;
    char name[234];
    char major[87];
  
    
};
 int main(){
    struct Students student1;
    student1.age = 18;
    student1.gpa = 8.9;
    strcpy(student1.name, "Abhi");
    strcpy(student1.major, "Computer Science");

    struct Students student2;
    student2.age = 18;
    student2.gpa = 8.9;
    strcpy(student2.name, "Tim");
    strcpy(student2.major, "Medical Science");
    printf("%s \n%s \n",student1.name , student2.major);
 }
 