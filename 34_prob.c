/*
if both strings are eaqual with case then "0";
if both strings are eaqual with string 1 with uppercase then "-1"(n1);
if both strings are eaqual with string 2 with uppercase then "1"(n2);
*/
#include<stdio.h>
#include<string.h> // must for using string methods;

int main(){
    char n1[] = {'t','a','n','e','e','s','h','\0'};
    char n2[] = "taneesh";

    printf("strings are : %d",strcmp(n1, n2));
    return 0;
}