#include <stdio.h>
#include <ctype.h>

int main()
{

    // QUIZ GAME

    char questions[][100] = {"What is the largest planet in solar system ?",
                             "What is the hottest planet?",
                             "Which planet has most moons?",
                             "Who has the largest individual stakeholder of Microsoft?"};

    char options[][100] = {"A. Jupiter\nB. Saturn\nC. Earth\nD. Uranus",
                           "A. Mercury\nB. Venus\nC. Mars\nD. Neptune",
                           "A. Saturn\nB. Earth\nC. Jupiter\nD. Mars",
                           "A. Jeff Bezos\nB. Steve Jobs\nC. Bill Gates\nD. Steve Ballmer"};

    char answerKey[] = {'A', 'B', 'A', 'D'};

    int qustionCount = sizeof(questions) / sizeof(questions[0]);

    char guess = '\0';
    int score = 0;

    printf("*** QUIZ GAME ***");

    for (int i = 0; i < qustionCount; i++)
    {
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);
        printf("Enter your choice: ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if (guess == answerKey[i])
        {
            printf("\nCORRECT!!!!\n");
            score++;
        }
        else
        {
            printf("\nWRONGGG\n");
        }
    }

    printf("\nYour score is %d out of %d points\n",score,qustionCount);

    return 0;
}