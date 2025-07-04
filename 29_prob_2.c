#include<stdio.h>

int main(){
    int arr[10],table;

    printf("Enter table : ");
    scanf("%d", &table);

    for (int i = 0; i < 10; i++){
        arr[i] = (table*(i+1));
    }
    
    for (int i = 0; i < 10; i++){
        printf("%d * %d = %d\n", table, i+1, arr[i]);
    }

    return 0;
}