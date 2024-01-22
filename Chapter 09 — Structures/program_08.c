// 8. Create a structure representing a bank account of a customer. What fields did you use and why?
#include <stdio.h>
#include <string.h>

struct customer
{
    char name[10];
    int id, money;
};

int main()
{
    struct customer customer1;
    strcpy(customer1.name, "Ranit Manik");
    customer1.id = 451;
    customer1.money = 4154212;

    printf("The customer id is: %s\n", customer1.name);
    printf("The customer id is: %d\n", customer1.id);
    printf("The customer id is: %d\n", customer1.money);
    return 0;
}