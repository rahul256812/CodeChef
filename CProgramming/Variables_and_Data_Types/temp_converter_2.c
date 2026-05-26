#include <stdio.h>

int main() {
    float fahrenheit = 98.3;
    // Converting Fahrenheit to Celsius using floating-point math
    float celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    
    printf("%f\n", celsius);
    
    return 0;
}
