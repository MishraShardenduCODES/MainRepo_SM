// 10. Write an algorithm to check whether a year given by the user is a leap year or not.
#include<stdio.h>
#define pf printf
#define sf scanf

int main(){
    int year;
    printf("Tell year : ");
    scanf("%d",&year);

    if(year % 100 == 0 && year % 400 == 0){
        pf("This is a Leap Year ");
    }else if (year % 100 != 0 && year % 4 == 0){
        pf("This is a Leap Year ");
    }else{
        pf("This is not a Leap Year ");
    }
    return 0;
}