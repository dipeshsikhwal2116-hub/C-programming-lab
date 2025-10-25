//write a C program to input three numbers and determine which one is largest.
#include<stdio.h>
int main()
{
    //Declaring the necessary variables 
        int n1,n2,n3,largest;
    //input number 1(n1)
        printf("Enter the first number:");
        scanf("%d", &n1);
    //input number 2(n2)
        printf("Enter the second number:");
        scanf("%d", &n2);
    //input number 3(n3)
        printf("Enter the third number:");
        scanf("%d", &n3);

    if (n1>=n2 && n1>=n3)
    {
       largest=n1;
    }
    else if (n2>=n1 && n2>=n3)
    {
        largest=n2;
    }
    else
        largest=n3;
    //final statement
        printf("The largest number among %d, %d and %d is: %d", n1, n2, n3, largest);
    
    return 0;
}