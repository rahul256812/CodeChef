#include <stdio.h>

int main() {
    float celsius = 20.5;
    // Converting Celsius to Fahrenheit using floating-point math
    float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    
    printf("%f\n", fahrenheit);
    
    return 0;
}
