#include<stdio.h>
#include<string.h>

int main(){
    char code[] = "victor is alive";
    for (int i = 0; i < strlen(code); i++){
        code[i] += 1;
    }
    printf("%s\n", code);

    for (int i = 0; i < strlen(code); i++){
        code[i] -= 1;
    }
    printf("%s\n", code);
    return 0;
}