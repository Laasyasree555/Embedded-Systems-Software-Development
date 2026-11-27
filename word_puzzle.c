#include <stdio.h>
#include <string.h>
#include <ctype.h>
void initializeGuess(int len, char guess[])
{
    for(int i = 0; i<len; i++)
    {
        guess[i] = '_';
    }
    guess[len] = '\0';
}
void display(char *guess, int len)
{
    for(int i = 0; i<len; i++)
    {
        printf("%c ", guess[i]);
    }
}
void read(char *word, char *guess, int len, int *attempts)
{
    char ch; int count = 0;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    for(int i = 0; i<len; i++)
    {
        if(tolower(ch) == tolower(word[i]))
        {
            guess[i] = word[i];
            count++;
        }

    }
    if(count == 0)
    {
        printf("Wrong guess!\n");
        (*attempts)--;
        printf("Remaining attempts: %d\n", *attempts);
    }
    else
    {
    printf("Correct guess!\n");
    printf("Remaining attempts: %d\n", *attempts);
    }
    display(guess, len);
}
int main() {
    int choice, attempts = 5;
    char word[50], playAgain, guess[50];
    do
    {
        printf("=====WORD PUZZLE GAME=====\n");
        printf("SELECT LEVEL:\n");
        printf("1. Easy\n");
        printf("2. Medium\n");
        printf("3. Hard\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            strcpy(word, "PUZZLE");
            break;
            case 2:
            strcpy(word, "BENGALURU");
            break;
            case 3:
            strcpy(word, "SUPERCALIFRAGILISTICEXPIALIDOCIOUS");
            break;
            default:
            printf("Invalid choice\n");
            break;
        }
        int len = strlen(word);
        if(choice >= 1 && choice <= 3)
        {
            initializeGuess(len, guess);
            printf("word: ");
            display(guess, len);
            printf("\n");
            while(strcmp(guess, word) != 0 && attempts > 0)
            {
                read(word, guess, len, &attempts);
                printf("\n");
            }
            if(strcmp(guess, word) == 0)
            {
                printf("Congratulations! You won!\n");
            }
            else
            {
                printf("Game over! The word was: %s\n", word);
            }
            printf("Do you want to play again? (y/n): ");
            scanf(" %c", &playAgain);
        }
        else if(choice == 4)
        {
            printf("Thank you for playing!\n");
        }
    } while(playAgain == 'y' || playAgain == 'Y');
}