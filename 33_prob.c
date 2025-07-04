#include <stdio.h>

int main() {
    int x, y, z;

    printf("x input: ");
    scanf("%d", &x);
    printf("y input: ");
    scanf("%d", &y);
    printf("z input: ");
    scanf("%d", &z);

    int arr[x][y][z];

    printf("Enter the array elements:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    int *ptr = &arr[0][0][0]; 
    int total = x * y * z;    

    printf("\nAddresses of elements in increasing memory order:\n\n");
    for (int i = 0; i < total; i++) {
        printf("Element %2d: Address = %u, Value = %d\n", i, (ptr + i), *(ptr + i));
    }

    return 0;
}
