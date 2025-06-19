#include<stdio.h>

int main(){
    int i=1,sum=0, num;

    scanf("%d", &num);

    do{
        sum += i;
        i++;
    } while (i <= num);
    
    printf("The sum of %d numbers : %d", num, sum);
    
    return 0;
}