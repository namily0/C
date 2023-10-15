#include <stdio.h>
#include <stdlib.h>

#define X 100
#define Y 50
int GetRandom(int min, int max);

int main()
{
    int map[X][Y];
    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            map[i][j] = 0;
        }
    }

    int i = 0;
    int j = 0;
    int rand = 0;
    int end = 1;
    map[0][0] = 1;
    while (1)
    {
        rand = GetRandom(1, 4);
        if (!(map[i][j + 1] == 0 || map[i][j - 1] == 0 || map[i + 1][j] == 0 || map[i - 1][j] == 0))
        {
            break;
        }

        if (rand == 1 && i > 2 && map[i - 1][j] == 0)
        {
            map[i - 1][j] = 1;
            i -=1;
        }
        else if (rand == 2 && map[i + 1][j] == 0)
        {
            map[i - 1][j] = 1;
            i+=1;
        }
        else if (rand == 3 && j > 2 &&map[i][j - 1] == 0)
        {
            map[i - 1][j] = 1;
            j-=1;
        }
        else if (rand == 4 && map[i][j + 1] == 0)
        {
            map[i][j + 1] = 1;
            j+=1;
        }
    }

    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            printf("%d", map[i][j]);
        }
        printf("\n");
    }
}

int GetRandom(int min, int max)
{
    return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}
