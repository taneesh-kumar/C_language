#include<stdio.h>
int sum_of_num(int);
int main(){
    int n, result = 0;
    printf("Till the posi : ");
    scanf("%d", &n);

    printf("The sum of %d natural numbers is %d", n, sum_of_num(n));
    return 0;
}

int sum_of_num(int n){
    if (n == 0){
        return 0;
    } else {
        return sum_of_num(n-1) + n;
    }   
}