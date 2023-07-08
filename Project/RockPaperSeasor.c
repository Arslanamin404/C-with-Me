/*
 * Create Rock Paper and Scissors Game
 * Player 1
 * Player 2 (Computer)

 * Rock = 1
 * Paper = 2
 * Scissor = 3

 * 1 vs 3 - 1 wins
 * 2 vs 1 - 2 wins
 * 3 vs 2 - 3 wins

 * Rock vs Scissors - Rock wins
 * Paper vs Rock - Paper wins
 * Scissors vs Paper - Scissor wins

 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>

char *getUserName();
int computerChoice();

int main()
{
    int exit;
    do
    {
        system("cls");
        printf("\nHello user! welcome to the Rock Paper and Scissor Game. You will be given 5 Turns to play this game.\n\t\tNet results will be generated after 5 Turns.\n\n");

        char *UserName = getUserName();

        int turns = 1;
        int computerScore = 0;
        int userScore = 0;

        while (turns != 6)
        {
            printf("\n\n---------------------------------------------------------------------------------------------------\n");
            printf("\n\tTURN %d: \n", turns);
            int userChoice;
            printf("\nPlease Select an Action ---->\n\n Rock\t\t[1]\n Paper\t\t[2]\n Scissor\t[3]\n\n");
            printf("Please Enter Your Choice (1/2/3): ");
            scanf("%d", &userChoice);

            if (userChoice < 0 || userChoice > 3)
            {
                printf("Invalid choice. \n");
                getch();
                return 1;
            }
            printf("\n%s choses: %d\n", UserName, userChoice);
            printf("Computer choses: %d\n", computerChoice());

            printf("\n------------------------------------------------------------\n");

            // determine the winner
            if (userChoice == computerChoice())
            {
                printf("\tIt's a Tie!\n");
            }
            else if ((userChoice == 1 && computerChoice() == 3) || (userChoice == 2 && computerChoice() == 1) || (userChoice == 3 && computerChoice() == 2))
            {
                printf("\t%s Wins!\n", UserName);
                userScore++;
            }
            else
            {
                printf("\tComputer Wins!\n");
                computerScore++;
            }
            printf("------------------------------------------------------------\n");

            printf("\nPress Any Key To Play Next Turn. . .");
            getch();
            turns++;
        }

        printf("\n\n\n ---------------------------------- \n");
        printf("\tRESULTS\n");
        printf(" %s Points: %d\n Computer Points: %d\t \n", UserName, userScore, computerScore);
        if (userScore > computerScore)
        {
            printf(" %s won by %d points.\n", UserName, (userScore - computerScore));
        }
        else if (userScore < computerScore)
        {
            printf(" Computer won by %d points. \n", (computerScore - userScore));
        }
        else
        {
            printf(" It's a Tie.\n");
        }
        printf(" ---------------------------------- \n\n");
        printf("\nPress Any Key To Continue. . .");
        getch();

        printf("\n\n\nDo you want to run again this program? Press 1 to continue and 0 to exit.\n");
        printf("Please Enter Your Choice (1 / 0): ");
        scanf("%d", &exit);
        fflush(stdin);

        if (exit == 0)
        {
            printf("\nThank you %s! Have a great time ahead. We hope you enjoyed using our program and didn't face any difficulties.\nVisit us Again\nRegards: Future Gen\n\n", UserName);
        }

        free(UserName);

    } while (exit != 0);

    getch();
    return 0;
}

char *getUserName()
{
    char *name = (char *)malloc(31 * sizeof(char));

    if (name == NULL)
    {
        printf("Memory Allocation Failed.\n");
        exit(1);
    }

    printf("Enter your name: ");
    fgets(name, 30, stdin);
    name[strcspn(name, "\n")] = '\0';

    return name;
}

int computerChoice()
{

    //! srand() takes seed as input and is defined in stdlib.h
    srand(time(NULL));

    int randomNum = rand() % 3 + 1; // generates a random num between 1 to 3.

    return randomNum;
}
