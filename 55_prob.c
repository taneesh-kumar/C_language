#include <stdio.h>

int main() {
    int num;
    FILE *ptr = fopen("demo.txt", "r");
    FILE *cpy = fopen("dup.txt", "a"); // Open in "w" mode to erase contents

    if (ptr == NULL || cpy == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    // Read integers from demo.txt and write each twice to dup.txt
    while (fscanf(ptr, "%d", &num) == 1) {
        fprintf(cpy, "%d ", num);
        fprintf(cpy, "%d ", num);
        printf("%d\t", num);
    }
    fclose(ptr);
    fclose(cpy);

    return 0;
}
