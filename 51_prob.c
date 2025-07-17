#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("files_testing.exe", "r");
    // char c = fgetc(ptr);
    // printf("%c\n", c); /*reading*/
    
    // fputc('c', ptr);/*INput*/
    fclose(ptr);
    return 0;
}