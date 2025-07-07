#include<stdio.h>

char* slice(char c[], int m, int n);

char* slice(char c[], int m, int n){
    char* str = &c[m];
    str[n] = '\0';
    return str;
}
int main(){
    char str[] = "Female";
    printf("Sliced str : %s", slice(str, 2, 6));
    return 0;
}