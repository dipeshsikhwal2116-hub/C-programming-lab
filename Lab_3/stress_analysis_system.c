//to determines if a mechanical component is safe under stress

#include <stdio.h>
int main() {
    //fos=factor of safety
    float applied_stress, yield_strength, fos;

    printf("Enter applied stress (MPa): ");
    scanf("%f", &applied_stress);

    printf("Enter material yield strength (MPa): ");
    scanf("%f", &yield_strength);

    fos = yield_strength / applied_stress;

    printf("\nFactor of Safety (FOS): %.2f\n", fos);

    if (fos >= 2.0) {
        printf("Safe design\n");
    }
    else if (fos >= 1.5 && fos < 2.0) {
        printf("Acceptable with monitoring\n");
    }
    else {
        printf("Danger - redesign needed\n");
    }

    return 0;
}