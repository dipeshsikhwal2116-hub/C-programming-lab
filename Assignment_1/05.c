//write a C program to input a number "n" and calculate the sum of 1st n natural no.s...
#include<stdio.h>
int main()
{
    //declare variables for number "n" and sum
    int n,sum;

    //take input from user...
    printf("enter the number : ");
    scanf("%d",&n);

    //formulae for 1st n natural numbers.
    sum=n*(n+1)/2;

    //final statement.
    printf("the sum of first %d natural numbers is: %d",n,sum);
    
    return 0;
}