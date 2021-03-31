 
#include<stdio.h>
int main(){
    /* and notation = &&
    or notation= ||
    iff == 
    greater than or equal to >= or <=
    not equal to !=
    && is used when both the conditions are true
    and || is used when only one of the given conditions
    is true
    == is used when certaining a given condition
    != is used to specify a not condition
    */
    double num1, num2, num3, num4;
    printf("Enter num1, num2, num3, num4:");
    scanf("%lf, %lf, %lf, %lf", &num1, &num2, &num3, &num4);
    if (num1>num2 && num1>num3 &&num1>num4)
        {
             printf("Biggest num among all is %f",num1);
        }  
    else if(num2>num1 && num2>num3 && num2>num4) 
        {
            printf("Biggest num among all is %f",num2);
        }      
    else if(num3>num1 &&num3>num2 &&num3 > num4)
        {
            printf("Biggest num among all is %f",num3);
        }
    else  
        {
            printf("Biggest num among all is %f", num4);
        }
    return 0;
}