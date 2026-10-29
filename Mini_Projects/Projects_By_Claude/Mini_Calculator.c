/*
1. Mini Calculator with Menu

Show a menu (add, subtract, multiply, divide, power, factorial, exit) in a do-while loop that keeps running until the user picks exit.
Use a switch for the choice.
Write one function per operation. Use pow() from <math.h> for the power option and your recursive factorial for the factorial option.
Handle divide-by-zero with an if.
Extra challenge: write void divide(int a, int b, int *quotient, int *remainder) so one call gives back both values through pointers.
*/

#include<stdio.h>
#include<math.h>

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

// power() -> dont need to recreate pow() function.

int factorial(int a)
{
    if (a == 1 || a == 0){
        return 1;
    }
    return a * factorial(a-1);
}

void take_values(float* a, float* b)
{
    printf("\nA : ");
    scanf("%f", a);
    printf("B : ");
    scanf("%f", b);
}

int main()
{
    int option, f;
    float a, b;

    do
    {
        printf("\n==============================\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Power\n6. Factorial\n7. Exit\n");
        printf("Option : ");
        scanf("%d", &option);

        if (option < 1 || option > 7) {
            printf("\nInvalid Option, Try Again\n\n");
        }
        else if (option == 1)
        {
            take_values(&a, &b);
            printf("%.2f", add(a, b));
            // printf("%f, %f\n\n", a, b);
        }
        else if (option == 2)
        {
        	take_values(&a, &b);
        	printf("%.2f", subtract(a, b));
        }
        else if (option == 3)
        {
        	take_values(&a, &b);
        	printf("%.2f", multiply(a, b));
        }
        else if (option == 4)
        {
        	take_values(&a, &b);
            if (b == 0)
            {
        	    printf("Cannot Divide By 0\n");
            }
            else
            {
                printf("%.2f", divide(a, b));
            }
        }
        else if (option == 5)
        {
        	take_values(&a, &b);
        	printf("%.2f", pow(a, b));
        }
        else if (option == 6)
        {
        	printf("\nN : ");
        	scanf("%d", &f);
        	printf("%d", factorial(f));
        }
        else if (option == 7)
        {
        	printf("Thankyou for using this Calculator!\n");
			break;
        }
        
        
    } while (1);
    

    return 0;
}
