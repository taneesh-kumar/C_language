#include<stdio.h>
#include<math.h>
int main(){
    float side, area;
    printf("side lenght is : ");
    scanf("%f", &side);

    area = pow(side, 2);

    printf("The area of the square is : %.2f", area);
    return 0;
}