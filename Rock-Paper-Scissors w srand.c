#include <stdio.h>
#include <time.h>

int main()
{
    int noRounds, p1, p2, p1score = 0, p2score = 0;

    printf("Jan - Ken - Pon!\n");
    printf("Enter no. of Rounds\n");
    scanf("%d", &noRounds);

    srand(time(NULL));

    for (int i = 0; i < noRounds; i++)
    {
        printf("Player 1: ");
        scanf("%d", &p1);

        p2 = rand() % 3 + 1;
        printf("Player 2: %d\n", p2);

        if ((p1 == 1 && p2 == 3) || (p1 == 2 && p2 == 1) || (p1 == 3 && p2 == 2))
        {
            p1score++;
        }
        else if ((p2 == 1 && p1 == 3) || (p2 == 2 && p1 == 1) || (p2 == 3 && p1 == 2))
        {
            p2score++;
        }
        printf("Player 1 score: %d\n", p1score);
        printf("Player 2 score: %d\n", p2score);
    }
    return 0;
}
