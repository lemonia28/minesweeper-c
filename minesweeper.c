#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    printf("Minesweeper\n\n");

    int plansza[12][12];
    int a, b;

    // initialize board with zeros
    for(a = 0; a < 12; a++)
    {
        for(b = 0; b < 12; b++)
        {
            plansza[a][b] = 0;
        }
    }

    printf("Board legend:\n");
    printf("X - hidden cell\n");
    printf("0 - empty cell\n");
    printf("9 - mine\n");
    printf("1-8 - number of mines around the cell\n\n");

    int e, f, g;

    // mines
    srand(time(0));
   for(g = 0; g < 10; g++)
{
    e = rand() % 10 + 1;
    f = rand() % 10 + 1;

    // prevent duplicate mine placement
    if(plansza[e][f] == 9)
    {
        g--;        // repeat this iteration
        continue;
    }

    plansza[e][f] = 9;

    if(plansza[e+1][f] != 9)
        plansza[e+1][f]++;

    if(plansza[e-1][f-1] != 9)
        plansza[e-1][f-1]++;

    if(plansza[e+1][f+1] != 9)
        plansza[e+1][f+1]++;

    if(plansza[e][f-1] != 9)
        plansza[e][f-1]++;

    if(plansza[e][f+1] != 9)
        plansza[e][f+1]++;

    if(plansza[e+1][f-1] != 9)
        plansza[e+1][f-1]++;

    if(plansza[e-1][f+1] != 9)
        plansza[e-1][f+1]++;

    if(plansza[e-1][f] != 9)
        plansza[e-1][f]++;
}

    int j, k;
    int planszadwa[10][10];

    // initialize visible board as hidden (-1)
    for(j = 0; j < 10; j++)
    {
        for(k = 0; k < 10; k++)
        {
            planszadwa[j][k] = -1;
            printf("X ");
        }
        printf("\n");
    }

    int l;

    for(l = 0; l < 90; l++)
    {
        printf("\nEnter coordinates (row and column 0-9):\n");

        int h, i;
        scanf("%i", &h);
        scanf("%i", &i);

        // reveal chosen cell
        planszadwa[h][i] = plansza[h+1][i+1];

        // print board
        for(j = 0; j < 10; j++)
        {
            for(k = 0; k < 10; k++)
            {
                if(planszadwa[j][k] == -1)
                    printf("X ");
                else
                    printf("%i ", planszadwa[j][k]);
            }
            printf("\n");
        }

        if(planszadwa[h][i] == 9)
        {
            printf("\nGame over! You hit a mine.\n");
            l = 101;
        }

        if(l == 90)
        {
            printf("\nCongratulations! You won.\n");
        }
    }

    system("PAUSE");
    return 0;
}