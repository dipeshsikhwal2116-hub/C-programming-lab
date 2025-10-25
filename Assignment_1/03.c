//write a C program to determine whether a given year is a leap year or not.
#include<stdio.h>
int main()
{
    //declare variable for input year.
    int year;
    //take input of year from user.
    
    printf("Enter the year:");
    scanf("%d", &year);
    
    if ((year%4==0 && year%100!=0)||(year%400==0))
    {
        printf("%d is a leap year.", year);
    }
    else
    //final statement
        printf("%d is not a leap year.", year);
    return 0;
}