//write a C program to calculate the electricity bill.
#include<stdio.h>
int main()
{
    //declaring variables for unit and bill
    int unit;
    float bill;

    //take input of units.
    printf("Enter number of units consumed: ");
    scanf("%d", &unit);
    
    //billing details.
    if (unit<=100)
    {
        bill= unit*1.5;
    }
    else if (unit>100 && unit<+200)
    {
        bill= (unit-100)*2 + (100*1.5);
    }
    else if (unit>200 && unit<=300)
    {
        bill= (unit-200)*3 + (100*2) + (100*1.5);
    }
    else
        bill= (unit-300)*5 + (100*3) + (100*2) + (100*1.5);
    //final statement
    printf("The total electricity bill is: %f", bill);
    return 0;

}