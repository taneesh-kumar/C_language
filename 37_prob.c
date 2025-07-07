#include<stdio.h>
int strlen(char c[]){
    int count = 0;
    while (c[count] != '\0'){
        count++;
    }
    return count;
}

void strCpy(char source[], char target[]){
    int i;
    for (i = 0; i < strlen(source); i++){
        target[i] = source[i];
    }
    target[i] = '\0';
    printf("%s\n%s", source, target);
}

int main(){
    char name[] = "u stupid";
    char copy[50];
    strCpy(name, copy);
    return 0;
}