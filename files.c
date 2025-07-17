#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("files_testing.exe", "a");

    if (ptr == NULL){
        printf("Sorry, the file doesn't Exist\n");
    } else{
        int num = 143;
        fprintf(ptr, "%d", num);
        printf("The value of num is : %d\n", num);
        fclose(ptr);
    }

    return 0;
}