//write a C program to take input from user and check whether it is positive, negative or zero.
#include<stdio.h>
int main()
{
    //declaring "number" variable to take input...
    int number;

    printf("Enter the number:  ");
    scanf("%d", &number);
    
    if (number>0)
    {
        printf("%d is a positive number ", number);
    }
    else if (number<0)
    {
        printf("%d is a negative number ", number);
    }
    else
    //final statement
        printf("%d is zero ", number);

    return 0;
}