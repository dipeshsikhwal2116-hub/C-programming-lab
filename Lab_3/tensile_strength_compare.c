//compare tensile strength of two materials and print the larger one
#include<stdio.h>
int main(){
    float tensile_strength_1,tensile_strength_2;
    printf("enter value of tensile strength of material 1: ");
    scanf("%f",&tensile_strength_1);
    printf("enter value of tensile strength of material 2: ");
    scanf("%f",&tensile_strength_2);
    if (tensile_strength_1>tensile_strength_2)
    {
        printf("tensile strength of material 1 is greater with the value %.2f",tensile_strength_1);
    }
    else if (tensile_strength_1<tensile_strength_2)
    {
        printf("tensile strength of material 2 is greater with the value %.2f",tensile_strength_2);
    }
    else
        printf("tensile strength of material 1 = tensile strength of material 2");
    return 0;
}