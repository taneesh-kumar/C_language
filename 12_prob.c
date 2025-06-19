#include <stdio.h>

int main(){
    int num, i = 1;
    printf("How many: ");
    scanf("%d", &num);

    do {
        printf("%d\n", i);
        i++;
    } while (i <= num);

    for (int j=1; j<=num; j++){
        printf("%d\t", j);
    }

    printf("\n");

    for (int j=num; j>=1; j--){
        printf("%d\t", j);
    }
    return 0;
}
