#include<stdio.h>

int fibo(int);

int main(){
    int position;
    printf("The positions of the element is : ");
    scanf("%d", &position);

    printf("The value element at %d position is %d", position, fibo(position));
    
    return 0;
}

int fibo(int posi){
    if (posi == 0){
        return 0;
    }else if (posi == 1){
        return 1;
    }else {
        return fibo(posi-1) + fibo(posi-2);
    }
}