#include<stdio.h>

void posi_counter(int a[], int l);

void posi_counter(int a[], int l){
    int count = 0;
    for (int i = 0; i < l; i++){
        if (a[i] > 0){
            count++;
        }
    }
    printf("The number of positive integers are %d\n", count);
}

int main(){
    int ele;

    printf("Enter number of elements: ");
    scanf("%d", &ele);

    int arr[ele];
    printf("Enter %d elements: ", ele);
    for (int i = 0; i < ele; i++) {
        scanf("%d", &arr[i]);
    }

    posi_counter(arr, ele);

    return 0;
}