//add two numbers
#include<stdio.h>
int main(){
    float num1,num2,sum;
    printf("enter 1st number ");
    scanf("%f",&num1);
    printf("enter 2nd number ");
    scanf("%f",&num2);
    sum=num1+num2;
    printf("sum of 1st and 2nd number is: %.2f",sum);
    return 0;
}