#include<stdio.h>

int main(){
    int num1, num2, num3;
    FILE *ptr = fopen("demo.txt", "r");
    fscanf(ptr, "%d %d %d", &num1, &num2, &num3);

    printf("The integers are %d %d %d\n", num1, num2, num3);

    fclose(ptr);

    return 0;
}