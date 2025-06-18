#include<stdio.h>

int main(){
    float len, bre, area;
    printf("The length of the rectangle is : ");
    scanf("%f", &len);

    printf("The breadth of the rectangle is : ");
    scanf("%f", &bre);

    area = len * bre;
    printf("The area of the rectangle is : %.2f\n",area);
    
    return 0;
}