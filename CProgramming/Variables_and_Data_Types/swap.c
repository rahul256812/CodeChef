#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    
    // Swapping logic using a temporary variable
    int temp = a;
    a = b;
    b = temp;
    
    // Printing their new values using a single printf statement with a space
    printf("%d %d\n", a, b);
    
    return 0;
}
