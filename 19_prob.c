#include<stdio.h>

float celcius_to_farenheit(float);

int main(){
    float celcius, farenheit;

    printf("Temp in celcius : ");
    scanf("%f", &celcius);
    farenheit = celcius_to_farenheit(celcius);
    printf("Temp in farenheit is : %.2f", farenheit);
    return 0;
}

float celcius_to_farenheit(float x){
    return (((9*x)/5)+32);
}