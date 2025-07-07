#include<stdio.h>
#include<string.h>

int main(){
    int count = 0;
    char find = 'c';
    char str[] = "anskjfailfafwioelqklcmszzowql";
    for (int i = 0; i < strlen(str); i++){
        if (find == str[i]) {
            count++;
        }
    }
    printf("%c is found %d times", find, count);
    
    return 0;
}