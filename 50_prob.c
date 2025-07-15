#include<stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} date;

int compareDates(date d1, date d2){
    if (d1.year < d2.year) return -1;
    if (d1.year > d2.year) return 1;

    if (d1.month < d2.month) return -1;
    if (d1.month > d2.month) return 1;

    if (d1.day < d2.day) return -1;
    if (d1.day > d2.day) return 1;

    return 0;
}

int main(){

    date d1, d2;

    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);

    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);


    int result = compareDates(d1, d2);

    if (result < 0){
        printf("Date 1 is earlier than Date 2\n");
    } else if (result > 0){
        printf("Date 1 is later than Date 2\n");
    } else {
        printf("Date 1 and Date 2 are the same\n");
    }
    
    return 0;
}