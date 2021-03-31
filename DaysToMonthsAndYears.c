//daysToMonthsAndYears
#include<stdio.h>

int main()
{
    /* Algorithm:
    step 1: start 
    step 2: take input from user of days 
    years = days/365
    months = days/ 30
    step 3 : print values of days and months 
    step 4 :stop 
    */
    int days;
    printf("Enter number of days:");
    scanf("%d",&days);
    printf("The number of years is %d \n",days/365);
    printf("The number of months is %d \n",days/30);
    
}