#include <stdio.h>

int strlen(char ch[]);

int strlen(char ch[]) {
    int count = 0;
    while (ch[count] != '\0') {
        count++;
    }
    return count;
}

int main() {
    char name[] = "taneesh";
    printf("Length is %d", strlen(name));
    return 0;
}
