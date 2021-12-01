#include <stdio.h>
#include <stdlib.h>

int mat[10][10];
void matrix(int mat[10][10])
{
    printf("Create your matrix:\n");
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("JOB DONE!\n");
}

void ifExist(int i, int j, int mat[10][10])
{
    printf("Enter your mat[i][j]: ");
    scanf("%d %d", &i, &j);
    if(mat[i][j] > 0 && mat[j][i] > 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}



void shortPath(int i, int j, int mat[10][10])
{
    printf("Enter your mat[i][j]: ");
    scanf("%d %d", &i, &j);

    for (int k = 0; k < 10; k++)
    {
        for (int m = 0; m < 10; m++)
        {
            for (int n = 0; n < 10; n++)
            {
                if (mat[m][k] + mat[k][n] < mat[m][n])
                {
                    mat[m][n] = mat[m][k] + mat[k][n];
                }
            }
        }
    }

    if(mat[i][j] > 0)
    {
         printf("The shortest path from vertex %d to vertex %d is: %d\n", i, j, mat[i][j]);
    }
    else
    {
        printf("-1\n");
    }
}

