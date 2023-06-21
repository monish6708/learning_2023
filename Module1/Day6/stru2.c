#include <stdio.h>

struct Complex {
    float re;
    float imag;
};

void readComplex(struct Complex* num) {
    printf("Enter the real part: ");
    scanf("%f", &(num->re));
    printf("Enter the imaginary part: ");
    scanf("%f", &(num->imag));
}


void writeComplex(struct Complex num) {
    printf("Complex number: %.2f + %.2fi\n", num.re, num.imag);
}


struct Complex addComplex(struct Complex n1, struct Complex n2) {
    struct Complex result;
    result.re = n1.re + n2.re;
    result.imag = n1.imag + n2.imag;
    return result;
}


struct Complex multiplyComplex(struct Complex n1, struct Complex n2) {
    struct Complex result;
    result.re = (n1.re * n2.re) - (n1.imag * n2.imag);
    result.imag = (n1.re * n2.imag) + (n1.imag * n2.re);
    return result;
}

int main() {
    struct Complex n1, n2, sum, product;

    printf("Enter the first complex number:\n");
    readComplex(&n1);

    printf("Enter the second complex number:\n");
    readComplex(&n2);

    printf("\n");

    printf("First complex number:\n");
    writeComplex(n1);

    printf("Second complex number:\n");
    writeComplex(n2);

    sum = addComplex(n1, n2);
    printf("Sum of the complex numbers:\n");
    writeComplex(sum);

    product = multiplyComplex(n1, n2);
    printf("Product of the complex numbers:\n");
    writeComplex(product);

    return 0;
}
