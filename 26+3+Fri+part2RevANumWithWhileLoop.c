#include<stdio.h>
int main()
{
    int n;
    int a;
    int rem;
    int s = 0;
    printf("Enter your number:");
    scanf("%d",&n);
    a=n;
    do
    {
        rem =n%10;
        s=s*10+rem;
        n=n/10;
    } while (n>0);
    {
        printf("The Reverse number is %d\n",s);
    }
}