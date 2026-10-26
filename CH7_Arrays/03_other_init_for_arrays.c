#include<stdio.h>

int main()
{
    int INT = 8;
    int* P_int = &INT;
    printf("P_int : %u\n", P_int);
    printf("++P_int : %u\n", ++P_int);
    
    printf("\n");

    char CHAR = 'A';
    char* P_char = &CHAR;
    printf("P_char : %u\n", P_char);
    printf("++P_char : %u\n", ++P_char);
    return 0;
}