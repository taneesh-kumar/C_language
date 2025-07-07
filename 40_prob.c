#include<stdio.h>
#include<string.h>

int main(){
    int count = 0;
    char find = 'b';
    char str[] = "anskjfailfafwioelqklcmszzowql";

    for (int i = 0; i < strlen(str); i++){
        if (find == str[i]) {
            count++;
            break;
        }
    }

    if (count != 0){
        printf("%c is found", find);
    } else {
        printf("%c is Not found", find);
    }

    return 0;
}