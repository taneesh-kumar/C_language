#include<stdio.h>

int main(){
    int arr[3][10];
    int mul[3] = {2,7,9};
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 10; j++){
            arr[i][j] = mul[i]*(j+1);
        }
    }
    

    for (int i = 0; i < 3; i++){
        printf("The table of %d is : ", mul[i]);
        for (int j = 0; j < 10; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}