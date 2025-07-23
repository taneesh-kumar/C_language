#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    
    printf("Enter an integer to write to the file: ");
    scanf("%d", &num);

    ptr = fopen("demo.txt", "w");

    if (ptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fprintf(ptr, "%d", num);
    fclose(ptr);

    ptr = fopen("demo.txt", "w");
    fprintf(ptr, "%d", 2 * num);
    fclose(ptr);
    return 0;
}