//Enum.c
#include<stdio.h>

enum week {sunday, monday, tuesday, wednesday, thursday, friday, saturday};

void main(){
   enum week day = sunday;
   enum week day1 = thursday;
    printf("%d\n", day);
    printf("%d\n", day1);
}

 