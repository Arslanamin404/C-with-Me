/*
* WE CAN MAKE THIS CODE MORE ADVANCE BY ADDING LEVELS TO IT.
* IF SCORE==10{
   * printf("\tLevel 2\n")
   * nextLevelQuestions();
   * }
* and many other functionalities can be added to it
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <windows.h>

// ANSI escape codes Colors
#define TEXT_COLOR_RED "\x1b[31m"
#define TEXT_COLOR_GREEN "\x1b[32m"
#define TEXT_COLOR_ORANGE "\x1b[33m"
#define TEXT_COLOR_DEFAULT "\x1b[0m"

typedef struct
{
    char *question;
    char *options[4];
    int answer;
} quiz;

void initializeQuestion(quiz *questions);
void displayQuestions(quiz questions);
int getAnswer();
int isDuplicate(int *arr, int num);

int main()
{
    int exit;

    char *name = (char *)malloc((30 + 1) * sizeof(char));
    printf("Enter you name: ");
    fgets(name, 30, stdin);
    name[strcspn(name, "\n")] = '\0';
    system("cls");

    printf(TEXT_COLOR_ORANGE "\t\t****************************** Welcome to the Quiz! ******************************" TEXT_COLOR_DEFAULT);
    printf("\n------------------------------------------------------------------------------------------------------\n\n");
    printf("Assalamualikusm %s, Test your knowledge with these multiple-choice questions.\nChoose the correct option (1, 2, 3, or 4) for each question.\n", name);
    printf(TEXT_COLOR_RED "To exit the program press 0\n\n" TEXT_COLOR_DEFAULT);

    quiz *questions = (quiz *)malloc(sizeof(quiz) * 10);
    if (questions == NULL)
    {
        printf("Memory allocation Failed.\n");
        return 1;
    }

    srand(time(NULL));
    int randomNumbers[10], randomIndex;
    for (int j = 0; j < 10; j++)
    {
        do
        {
            // Generate a random number
            randomIndex = rand() % 10;
        } while (isDuplicate(randomNumbers, randomIndex)); // Check if the number is a duplicate

        // Assign the generated number to the current array index
        randomNumbers[j] = randomIndex;
    }

    //! quiz start
    initializeQuestion(questions);
    int score = 0;
    for (int i = 0; i < 10; i++)
    {
        int randomIndex = rand() % 10;
        displayQuestions(questions[randomNumbers[i]]);
        int answer = getAnswer();

        if (answer <= 0)
        {
            printf("\n\nQuiz Exited. . .\nWe're sorry to see you go. You've made a wise decision to explore the world of knowledge.\nFeel free to come back anytime for more exciting quizzes.\n" TEXT_COLOR_GREEN "Goodbye!" TEXT_COLOR_DEFAULT);
            Beep(3000, 1200);
            getch();
            return 1;
        }

        printf("\n---------------------------------------------------\n");
        if (answer > 4 || answer < 1)
        {
            printf("Invalid Choice! Exiting the program. . .\n");
            for (int i = 1; i <= 3; i++)
            {
                Beep(4000, 250);
            }

            break;
        }
        else if (answer == questions[randomNumbers[i]].answer)
        {
            printf(TEXT_COLOR_GREEN "\tCorrect!" TEXT_COLOR_DEFAULT);
            score++;
        }
        else
        {
            printf(TEXT_COLOR_RED "\tIncorrect!\n" TEXT_COLOR_DEFAULT);
            Beep(3000, 600);
            printf("Correct answer is " TEXT_COLOR_GREEN "%s." TEXT_COLOR_DEFAULT, questions[randomNumbers[i]].options[(questions[randomNumbers[i]].answer) - 1]);
        }
        printf("\n---------------------------------------------------\n");
        printf("Press Any key to view next question . . . \n\n");
        getch();
    }

    printf("\n\t--------------------------------------------------\n");
    printf(TEXT_COLOR_ORANGE "\t\t\tQuiz complete!\n" TEXT_COLOR_DEFAULT "\t\t%3s you scored %d points. (%d/10)", name, score, score);
    printf("\n\t--------------------------------------------------\n");

    free(name);
    free(questions);
    getch();
    return 0;
}

void initializeQuestion(quiz *questions)
{
    questions[0].question = "What is the capital of France?";
    questions[0].options[0] = "Paris";
    questions[0].options[1] = "London";
    questions[0].options[2] = "Rome";
    questions[0].options[3] = "Madrid";
    questions[0].answer = 1;

    questions[1].question = "What is the name of the tallest mountain in the world?";
    questions[1].options[0] = "Mount Kilimanjaro";
    questions[1].options[1] = "K2";
    questions[1].options[2] = "Mount Everest";
    questions[1].options[3] = "Mount Denali";
    questions[1].answer = 3;

    questions[2].question = "What is the name of the largest ocean in the world?";
    questions[2].options[0] = "Atlantic Ocean";
    questions[2].options[1] = "Pacific Ocean";
    questions[2].options[2] = "Indian Ocean";
    questions[2].options[3] = "Arctic Ocean";
    questions[2].answer = 2;

    questions[3].question = "What is the name of the largest country in the world by area?";
    questions[3].options[0] = "Canada";
    questions[3].options[1] = "China";
    questions[3].options[2] = "Russia";
    questions[3].options[3] = "United States";
    questions[3].answer = 3;

    questions[4].question = "What is the name of the smallest country in the world by area?";
    questions[4].options[0] = "Monaco";
    questions[4].options[1] = "Nauru";
    questions[4].options[2] = "Tuvalu";
    questions[4].options[3] = "Vatican City";
    questions[4].answer = 4;

    questions[5].question = "What is the name of the first woman to walk in space?";
    questions[5].options[0] = "Valentina Tereshkova";
    questions[5].options[1] = "Sally Ride";
    questions[5].options[2] = "Helen Sharman";
    questions[5].options[3] = "Kalpana Chawla";
    questions[5].answer = 1;

    questions[6].question = "What is the name of the first man to walk on the moon?";
    questions[6].options[0] = "Neil Armstrong";
    questions[6].options[1] = "Buzz Aldrin";
    questions[6].options[2] = "Michael Collins";
    questions[6].options[3] = "Yuri Gagarin";
    questions[6].answer = 1;

    questions[7].question = "What is the name of the largest desert in the world?";
    questions[7].options[0] = "Arabian Desert";
    questions[7].options[1] = "Sahara Desert";
    questions[7].options[2] = "Gobi Desert";
    questions[7].options[3] = "Kalahari Desert";
    questions[7].answer = 2;

    questions[8].question = "What is the name of the longest river in the world?";
    questions[8].options[0] = "Amazon River";
    questions[8].options[1] = "Nile River";
    questions[8].options[2] = "Yangtze River";
    questions[8].options[3] = "Mississippi River";
    questions[8].answer = 2;

    questions[9].question = "What is the name of the largest rain forest in the world?";
    questions[9].options[0] = "Congo Rain forest";
    questions[9].options[1] = "Borneo Rain forest";
    questions[9].options[2] = "New Guinea Rain forest";
    questions[9].options[3] = "Amazon Rain forest";
    questions[9].answer = 4;
}

void displayQuestions(quiz questions)
{
    printf("%s\n", questions.question);
    for (int j = 0; j < 4; j++)
    {
        printf("%5d. %2s\n", j + 1, questions.options[j]);
    }
}

int getAnswer()
{
    int userAnswer;
    printf("Enter your answer(1/2/3/4) : ");
    scanf("%d", &userAnswer);
    return userAnswer;
}
int isDuplicate(int *arr, int num)
{
    // Iterate over the matrix and check if the number already exists
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == num)
        {
            return 1; // Number is a duplicate
        }
    }

    return 0; // Number is not a duplicate
}
