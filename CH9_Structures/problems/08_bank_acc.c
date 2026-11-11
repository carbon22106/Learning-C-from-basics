// Create a structure representing a bank account of a customer. What fields did you use and why?

#include<stdio.h>

typedef struct account
{
    char name[36];      // Name
    char ifsc[12];      // ifsc for bank details
    int acc_number;     // Account Identifie
    float balance;      // Balance

};


int main()
{
    return 0;
}