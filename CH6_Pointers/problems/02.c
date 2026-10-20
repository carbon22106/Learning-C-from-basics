// Write a program having a variable i . Print the address of i . Pass this variable to a function and print its address. Are these addresses the same? Why?

#include<stdio.h>

void print_addr(int a) // Takes argument as integer NOT address.
{
    printf("Address from Function = %p\n", &a);
}

int main()
{
    int i;
    printf("Address from Main = %p\n", &i);
    print_addr(i); // Sending Copy of i
    return 0;
}

/*
The addresses will be different because:
A copy of i is send to the function not the original i.
So the functrion recives a copy of i located at a different address than the original.
*/

/*
In the video Harry interpreted the question as 
"...Pass the address of this variable to a function..." rather than
"...Pass this variable to a function...".

In his interpretation of the question,
the addresses will be same as :
The function recives the address of the argument directly, not a copy.

The code for that will be :

#include<stdio.h>

void print_addr(int* a) // Takes argument as address, NOT a copy.
{
    printf("Address from Function = %p\n", a);
}

int main()
{
    int i;
    printf("Address from Main = %p\n", &i);
    print_addr(&i); // Sending Address of i
    return 0;
}

*/