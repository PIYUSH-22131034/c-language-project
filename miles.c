#include <stdio.h>

int main() {
    float kmh, mph;

    
    printf("Enter speed in kilometers per hour ");
    scanf("%f", &kmh);

    
    mph = kmh * 0.621371;

    
    printf("%.2f kilometers per hour is equal to %.2f miles per hour.\n", kmh, mph);

    return 0;
}

