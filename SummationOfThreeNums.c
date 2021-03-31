//summationOfIndividuals
#include<stdio.h>
int main()
{
    /* Algorithm:
    step 1 : input a 3 dgit num from user
    step 2 : store the value along with 3 more variables f, s, t, temp
    f= 1st digit of num
    s = 2nd digit of num
    t = 3rd digit of num
    temp = num%10
    step 3 : add f, s, t....
    :)   */
    int n , temp,f,s,t;
    printf("Enter your num:");
    scanf("%d",&n);

   /* dig = num % 10;
    num = dig % 10;
    printf("%d",dig);*/
f = n/100;
temp = n%100;
s = temp/10;
t = temp%10;

printf(" Digits of the given value are: %d, %d and %d \n",f, s, t);

printf("sum is %d\n",f+s+t);
}