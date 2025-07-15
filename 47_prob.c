#include<stdio.h>

int main(){
    int i,j;
    printf("Enter the real part\n");
    scanf("%d", &i);
    
    printf("Enter the Imaginary part\n");
    scanf("%d", &j);

    printf("The complex number is (%d+(%dj))\n",i,j);
    return 0;
}