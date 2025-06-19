#include<stdio.h>

int main(){
    int num, sum = 0;

    scanf("%d", &num);

    for (int i = 1; i <= 10; i++){
        sum += num*i;
    }

    printf("The sum of the multiplications is : %d", sum);

    return 0;
}