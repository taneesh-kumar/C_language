#include <stdio.h>

typedef struct vector{
    int i;
    int j;
} V;

V vectorSum(V vec1, V vec2){
    V v3;
    v3.i = vec1.i + vec2.i;
    v3.j = vec1.j + vec2.j;
    return v3;
}

int main(){
    V v1, v2;

    printf("X1 co-ordinate : ");
    scanf("%d", &v1.i);
    
    printf("Y1 co-ordinate : ");
    scanf("%d", &v1.j);
    
    printf("X2 co-ordinate : ");
    scanf("%d", &v2.i);

    printf("Y2 co-ordinate : ");
    scanf("%d", &v2.j);

    V v3 = vectorSum(v1, v2);

    printf("The vector sum is ( %di , %dj )\n", v3.i, v3.j);
    return 0;
}