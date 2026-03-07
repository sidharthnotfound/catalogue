#include <stdio.h>
struct employee {
    char name[100];
    char emid[100]; 
    int salary;
};
int main() {
    struct employee e1;
    printf("Enter Name : ");
    scanf("%s",e1.name);
    printf("Enter ID : ");
    scanf("%s",e1.emid);
    printf("Enter salary : ");
    scanf("%d",&e1.salary);
    printf("\n--- Employee Data ---\n");
    printf("Name        : %s\n", e1.name);
    printf("Employee ID : %s\n", e1.emid);
    printf("Salary      : %d\n", e1.salary);
    return 0;
}
