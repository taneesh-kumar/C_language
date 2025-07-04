#include<stdio.h>

int main(){
    
    int arr[5];

    printf("Enter the marks of the 5 students\n");

    for (int  i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    printf("The marks are : \n");
    for (int  i = 0; i < 5; i++){
        printf("%d,\t",arr[i]);
    }

    return 0;
}