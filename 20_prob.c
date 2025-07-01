#include<stdio.h>

float force_of_attraction(float, float);

int main(){
    float mass, gravity;
    gravity = 9.8;
    
    printf("The mass of the body is  : ");
    scanf("%f", &mass);
    
    printf("The force of attravtion is : %.2f N.", force_of_attraction(mass, gravity));
    return 0;
}

float force_of_attraction(float m, float g){
    return m*g;
}