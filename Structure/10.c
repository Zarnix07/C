//Complex Number Representation.
#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

int main() {
    struct Complex c1 = {3.5, 5.2};
    
    printf("Complex Number: %.2f + %.2fi\n", c1.real, c1.imag);

    return 0;
}
