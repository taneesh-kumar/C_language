#include<stdio.h>

void Good_morning();
void Good_Afternoon();
void Good_evening();

int main(){

    Good_morning();
    Good_Afternoon();
    Good_evening();

    return 0;
}

void Good_morning(){
    printf("Good morning\n");
}

void Good_Afternoon(){
    printf("Good afternoon\n");
}

void Good_evening(){
    printf("Good evening\n");
}
