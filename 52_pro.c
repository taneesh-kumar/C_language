#include<stdio.h>

int main(){
    char ch;
    FILE *ptr = fopen("files_testing.exe", "a");
    while (1){
        ch = fgetc(ptr);
        printf("%c", ptr);
        if (ch = EOF){
            break;
        }
    }
    fclose(ptr);
    return 0;
}