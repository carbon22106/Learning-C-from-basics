#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    printf("=== NUMBER GUESSING GAME ===\n");
    srand(time(0));
    int guessCount = 0, guessNum;
    int randomNum = (rand() % 100) + 1;
    // printf("%d\n", randomNum); for testing
    
    while(1)
    {
        guessCount++;
        printf("Enter Guess : ");
        scanf("%d", &guessNum);

        if (guessNum == randomNum){
            printf("Correct Guess, The number was %d. You took %d attempts.", randomNum, guessCount);
            break;
        }
        else if (guessNum > randomNum)
        {
            printf("Your guess is Higher\n");
            continue;
        }
        else
        {
            printf("Your guess is Lower\n");
        }
    }

    return 0;
}