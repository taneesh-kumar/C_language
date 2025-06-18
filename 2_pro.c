#include<stdio.h>

int main(){
    float rad, height, cirAr, cylVol;

    printf("radious is : ");
    scanf("%f", &rad);
    cirAr = 3.14*rad*rad;

    printf("Height is : ");
    scanf("%f", &height);
    cylVol = (3.14*rad*rad*height);

    printf("The area of the circle is : %.2f\n", cirAr);
    printf("The volume of the cylinder is : %.2f", cylVol);

    return 0;
}