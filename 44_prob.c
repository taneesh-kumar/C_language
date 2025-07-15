#include<stdio.h>
#include<string.h>

typedef struct vector{
    int i;
    int j;
} Emp;


int main(){
    Emp v1;
    
    printf("X co-ordinate : ");
    scanf("%d", &v1.i);
    
    printf("Y co-ordinate : ");
    scanf("%d", &v1.j);

    printf("The vector is (%d, %d)\n", v1.i, v1.j);
    return 0;
}