#include <stdio.h>
#include <string.h>
#define MAX 100

struct employee {
    int id;
    char name[50];
    float salary;
};

void show(struct employee *e, int n) {
    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("%d %s rs.%.2f\n", e[i].id, e[i].name, e[i].salary);
    }
}

int main() {
    int n;
    struct employee e[MAX];

    printf("How many employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nPerson %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &e[i].id);

        printf("Employee Name: ");
        scanf("%s", e[i].name);

        printf("Employee Salary: ");
        scanf("%f", &e[i].salary);
    }

    show(e, n);

    return 0;
}
