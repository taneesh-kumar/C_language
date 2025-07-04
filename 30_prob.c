#include<stdio.h>
int reverse(int a[]){
    int temp;
    for (int i = 0; i < (5/2); i++){
        temp = a[i];
        a[i] = a[5-i-1];
        a[5-i-1] = temp;
    }
    
    for (int i = 0; i < 5; i++){
        printf("%d\t", a[i]);
    }
}
int main(){
    int arr[] = {1,2,3,4,5};

    reverse(arr);

    return 0;
}