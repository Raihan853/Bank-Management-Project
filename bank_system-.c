#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
// variables
struct Customer
{
    char name[50];
    int number;
    char email[50];
     

    int id;
    int balance;
};
 


// funciton headders
void minMenu();
void mainMenu();
void getAccountInformation(struct Customer *customer);
void showAccountInformation(struct Customer *customer);
void showTotalBalance(struct Customer *customer);
void depositMoney(struct Customer *customer);
void withdrawMoney(struct Customer *customer);
// main funciton
int main()
{
  {
    char username[50];
    char password[30];

    printf("Enter user name:");
    gets(username);
    printf("Enter the Password:");
    gets(password);


    if(strcmp(username,"Rimon")==0)
    {
    if(strcmp(password,"1234")==0)
     {
        printf("\n Welcome.Login Rimon\n");
    }
    else
    {
        printf(" \nInvalid  password\n");
    }
    }

    else
    {
        printf("\n Invalid name\n");
    }



    
}
    struct Customer customer;
    int input, flag = 0;
    while (1)
    {
        mainMenu();
        printf("\nEnter choise: ");
        scanf("%d", &input);
        switch (input)
        {
        case 0:
            flag = 1;
            break;
        case 1:
            getAccountInformation(&customer);
            break;
        case 2:
            showAccountInformation(&customer);
            break;
        case 3:
            showTotalBalance(&customer);
            break;
        case 4:
            depositMoney(&customer);
            break;
        case 5:
            withdrawMoney(&customer);
            break;
        }
        if (flag)
            break;
        minMenu();
        scanf("%d", &input);
        if (input == 0)
            break;
        else
            continue;
    }
    printf("Press any key to exit.");
    getch();
    return 0;
}
// functions
void minMenu()
{
    printf("[1] Main Menu \n");
    printf("[0] Exit \n");
}
void mainMenu()
{
    printf("=========================================\n");
    printf("||                                     ||\n");
    printf("||    Varendra Bank                    ||\n");
    printf("||    [1] Open Account                 ||\n");
    printf("||    [2] Show Account Information     ||\n");
    printf("||    [3] Balance Inquiry              ||\n");
    printf("||    [4] Deposit                      ||\n");
    printf("||    [5] Withdraw                     ||\n");
    printf("||    [0] Exit                         ||\n");
    printf("||                                     ||\n");
    printf("=========================================\n\n");
}
void getAccountInformation(struct Customer *customer)
{
    fflush(stdin);
    printf("Customer Name: ");
    gets(customer->name);
    printf("Phone Number: ");
    scanf("%d", &customer->number);
    printf("Customer E-mail: ");
    fflush(stdin);
    gets(customer->email);
    customer->id = 1;
    customer->balance = 0;
}
void showAccountInformation(struct Customer *customer)
{
    system("cls");
    printf("Customer Name: ");
    puts(customer->name);
    printf("Phone Number: ");
    printf("%d", customer->number);
    printf("\nCustomer E-mail: ");
    puts(customer->email);
    printf("Customer ID: %d", customer->id);
    printf("\nAccount Balance: %d\n", customer->balance);
}
void showTotalBalance(struct Customer *customer)
{
    printf("Your Account balance is: %d BDT\n", customer->balance);
}
void depositMoney(struct Customer *customer)
{
    printf("Amount: ");
    int deposit;
    scanf("%d", &deposit);
    printf("You have sucessfully deposit %d BDT\n", deposit);
    customer->balance += deposit;
    printf("Your Account balance is: %d BDT\n", customer->balance);
}

void withdrawMoney(struct Customer *customer)
{
    printf("Amount: ");
    int withdraw;
    scanf("%d", &withdraw);
    customer->balance -= withdraw;
    printf("You have sucessfully withdraw %d BDT\n", withdraw);
    printf("Your balance is: %d BDT\n", customer->balance);
}

