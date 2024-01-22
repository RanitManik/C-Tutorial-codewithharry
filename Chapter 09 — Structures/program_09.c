// 9. Solve problem 9 for time using typedef keyword.

#include <stdio.h>
#include <string.h>

typedef struct customer
{
    char name[10];
    int id, money;
}(customer);

int main()
{
    customer customer1;
    strcpy(customer1.name, "Ranit Manik");
    customer1.id = 451;
    customer1.money = 4154212;

    printf("The customer id is: %s\n", customer1.name);
    printf("The customer id is: %d\n", customer1.id);
    printf("The customer id is: %d\n", customer1.money);
    return 0;
}