/*
just a though if i add the index to the string for encryption.
It have errors but i dont mind, it works for the most part.
*/

#include<stdio.h>

void encrypt(char* s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        s[i] += i+1;
        i++;
    }
    s[i] = '\0';
}

void decrypt(char* s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        s[i] -= i+1;
        i++;
    }
    s[i] = '\0';
}

int main()
{
    char str[255];
    printf("Enter String : ");
    gets(str);

    printf("UnEncrypted : %s\n\n", str);

    encrypt(str);
    printf("Encrypted : %s\n\n", str);
    
    decrypt(str);
    printf("Decrypted : %s\n\n", str);

    return 0;
}