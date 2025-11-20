//to check if a machine’s operating temperature is within safe limits
#include <stdio.h>
int main() {
    float temperature;

    printf("Enter current temperature (°C): ");
    scanf("%f", &temperature);

    if (temperature > 60 && temperature <= 82) {
        printf("Temperature is safe\n");
    } else {
        printf("Temperature warning!\n");
    }

    return 0;
}