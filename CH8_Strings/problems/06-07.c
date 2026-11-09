// Write a program to encrypt a string by adding 1 to the ASCII value of its characters.

#include<stdio.h>

void encrypt(char* str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        str[i]++;
        i++;
    }
}

void decrypt(char* str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        str[i]--; i++;
    }
}

int main()
{
    char str[] = "Encrypt This. Can You??";
    printf("UnEncrypted : %s\n\n", str);
    
    encrypt(str);
    printf("Encrypted : %s\n\n", str);
    
    decrypt(str);
    printf("Decrypted : %s\n\n", str);
    return 0;
}