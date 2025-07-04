#include<stdio.h>

void display(int r, int c, int arr[r][c]) {

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    
    int r, c;

    printf("No. of rows : ");
    scanf("%d", &r);

    printf("No. of colms: ");
    scanf("%d", &c);

    int arr[r][c];
    printf("Enter the elements:\n");

    display(r, c, arr);

    return 0;
}