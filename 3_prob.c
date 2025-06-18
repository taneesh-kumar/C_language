#include<stdio.h>

int main(){
    int cel, faren;
    printf("temp in celcius : ");
    scanf("%d", &cel);

    faren = (9*cel/5)+32;

    printf("temp in farenheit is : %d", faren);

    return 0;
}