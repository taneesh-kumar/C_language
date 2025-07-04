#include<stdio.h>

int main(){
    int ele;

    printf("how many elements : ");
    scanf("%d", &ele);

    if (ele <= 0){
        printf("there should be 1 or more elements");
    }

    int mul[ele];
    int arr[ele][10];
    
    printf("What are the elements : ");
    for (int i = 0; i < ele; i++){
        scanf("%d", &mul[i]);
    }
    
    for (int i = 0; i < ele; i++){
        for (int j = 0; j < 10; j++){
            arr[i][j] = mul[i]*(j+1);
        }
    }
    

    for (int i = 0; i < ele; i++){
        printf("The table of %d is : ", mul[i]);
        for (int j = 0; j < 10; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}