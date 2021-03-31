#include<stdio.h>
 /*this first gives us what is called Prototyping.
 whenever the main function is above the returning function
 the program is going to give an error. Hence we do this 
 thing called Prototyping where the signature of the returning 
 function is written on the first line above the main function
. Here the signature is "double cube( double num)".... This tells 
c that there is a returning function later on the code....
and it reads it before the main function and executes it...
and the semi colon at the end of the signature is must...
*/
 double cube( double num);
     
 
 int main(){
     printf("Answer is %f",cube(3));
     return 0;
 }
  double cube( double num) {
     return num * num * num;
  }
