#include<stdio.h>

int main(){
    char ch;
    FILE *ptr = fopen("demo.txt", "a"); // Open for reading and writing

    if (ptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Move to the end for appending
    fseek(ptr, 0, SEEK_END);
    fprintf(ptr, "\n");

    // Open another pointer to read from the beginning
    FILE *read_ptr = fopen("demo.txt", "r");
    if (read_ptr == NULL) {
        printf("Error opening file for reading.\n");
        fclose(ptr);
        return 1;
    }

    // Read characters and append each twice at the end
    while (1) {
        ch = fgetc(read_ptr);

        if (ch == EOF) {
            break;
        } else {
            fprintf(ptr, "%c", ch);
            fprintf(ptr, "%c", ch);
            printf("%c", ch);
        }
    }
    fclose(ptr);
    fclose(read_ptr);
    return 0;
}
