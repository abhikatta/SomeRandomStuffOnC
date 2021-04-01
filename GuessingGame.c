#include<stdio.h>
#include<time.h>
/* This is a game in which the user gives a particular range to the computer and the 
 computer randomly generates some number from the given range and the user has to guess
 that number. The program uses a while loop and the keyword for the generation of the 
 random number is srand */
int main(){
    printf("Enter a lower and an upper limit.\nComputer will automatically generate a number in your given range.\nTry to guess the number in the least count as possible.\n Good luck!!");
    int num, n , c = 1, upper, lower;
    printf("\nEnter your lower limit: ");
    scanf("%d", &lower);
    printf("\nEnter your upper limit: ");
    scanf("%d", &upper);
    srand(time(0));
    num = (rand()%(upper-lower+1))+lower;

    while(1){
        printf("\nGuess A number: ");
        scanf("%d",&n);
        if (n== num)
        {
            printf("\nCongratulations!!\n You guessed the number in %d tries!",c);
            break;
        }
        else if (n<num)
        {
            printf("\nYour guess is lesser than the secret number!");
            c++;
        }
        else if(n>num)
        {
            printf("\nYour guess is greater than the secret number");
            c++;
        }
    }
}