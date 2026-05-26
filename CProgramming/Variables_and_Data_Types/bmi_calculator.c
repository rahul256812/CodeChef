#include <stdio.h>

int main() {
    float height = 1.82;
    float weight = 72.0;
    
    // Calculating BMI using the formula: weight / (height * height)
    float bmi = weight / (height * height);
    
    printf("%f\n", bmi);
    
    return 0;
}
