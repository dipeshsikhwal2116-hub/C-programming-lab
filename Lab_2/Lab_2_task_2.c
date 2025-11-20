//calculate kinetic energy
#include<stdio.h>
int main(){
    float mass,velocity,kinetic_energy;
    printf("enter value of mass ");
    scanf("%f",&mass);
    printf("enter value of valocity ");
    scanf("%f",&velocity);
    kinetic_energy=mass*velocity*velocity/2;
    printf("kinetic energy= %.2f ",kinetic_energy);
    return 0;
}