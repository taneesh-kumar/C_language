#include<stdio.h>

int main(){
    char ch;
    FILE *ptr = fopen("demo.txt", "r");
    while (1){//infinite loop
        ch = fgetc(ptr);
        printf("%c", ch);
        if (ch == EOF){
            break;
        }
    }
    fclose(ptr);
    return 0;
}