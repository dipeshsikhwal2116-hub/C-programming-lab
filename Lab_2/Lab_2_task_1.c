//calculate force
#include<stdio.h>
int main(){
    float mass,acceleration,force;
    printf("enter value of mass ");
    scanf("%f",&mass);
    printf("enter value of acceleration ");
    scanf("%f",&acceleration);
    force =mass*acceleration;
    printf("force = %.2f\n ",force );
    return 0;
}