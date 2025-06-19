#include <stdio.h>

int main(){
    char ch;

    printf("Enter your charecter : ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z'){
        printf("chrecter is lower case");
    } else if (ch >= 'A' && ch <= 'Z'){
        printf("chrecter is Upper case");
    } else{
        printf("Not a charecter :\\");
    }

    return 0;
}