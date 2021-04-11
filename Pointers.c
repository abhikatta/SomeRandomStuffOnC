#include<stdio.h>
void main(){
    int age = 45;
    int *p;age = &age;
/*  This *p_age variable is the pointer variable
for the pointer of age value in age variable.
    the variable name must be written as "*p with a '_' or ';' or
    'first letter of the 
    variable as a capital letter'
    Example above pointer can be written as 
    1.  int *pAge or
    2.  int *p_age or
    3.  int *p;age
    where 1 and 2 are the better ways and 3 isnt. 
    %p is used to print the memory address of the value in variable.*/
    printf("Memory address of age value in age variable = %p\n",age);
    printf("\nPointer value (More precise value) of age in value age variable = %p\n\n",&age);

 }
