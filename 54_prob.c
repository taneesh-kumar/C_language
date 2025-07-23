#include<stdio.h>

int main(){
    int num;
    printf("Table of : ");
    scanf("%d", &num);

    FILE *ptr = fopen("demo.txt", "w");

    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d", num*(i+1));
        fprintf(ptr, "\n");

    }
    
    return 0;
}