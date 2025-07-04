#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int* p1 = &arr[1];
    int* p2 = &arr[3];

    printf("Initial pointer values:\n");
    printf("p1 = %u, *p1 = %d\n", p1, *p1);
    printf("p2 = %u, *p2 = %d\n", p2, *p2);

    int* p_add = p1 + 2;
    printf("\n1. After adding 2 to p1:\n");
    printf("p1 + 2 = %u, *(p1 + 2) = %d\n", p_add, *p_add);

    int* p_sub = p2 - 1;
    printf("\n2. After subtracting 1 from p2:\n");
    printf("p2 - 1 = %u, *(p2 - 1) = %d\n", p_sub, *p_sub);

    // Subtraction of one pointer from another
    int diff = p2 - p1;
    printf("\n3. Subtracting p1 from p2:\n");
    printf("p2 - p1 = %d (elements apart)\n", diff);
    
    printf("\n4. Comparing p1 and p2:\n");
    if (p1 < p2)
        printf("p1 points to an earlier element than p2\n");
    else if (p1 > p2)
        printf("p1 points to a later element than p2\n");
    else
        printf("p1 and p2 point to the same element\n");

    return 0;
}
