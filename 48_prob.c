#include<stdio.h>

typedef struct Complex{
    float real;
    float Imaginary;
} Complex;

void input_complex_num(Complex num[], int size){
    for (int i = 0; i < size; i++){
        printf("Enter the real part : ");
        scanf("%f", &num[i].real);
        printf("Enter the Imaginary part : ");
        scanf("%f", &num[i].Imaginary);
    }
}

void disp_Complex(Complex num[], int size){
    printf("The complex Numbers are :\n");
    for (int i = 0; i < size; i++){
        printf("complex Number %d is %.2f + %.2fi\n2", i+1, num[i].real, num[i].Imaginary);
    }
    
}

int main(){
    int size;

    printf("Number of complex numbers : ");
    scanf("%d", &size);

    Complex number[size];

    input_complex_num(number, size);

    disp_Complex(number, size);
    return 0;
}