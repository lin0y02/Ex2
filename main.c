#include <stdio.h>
#include <stdlib.h>

int main()
{
    char user = 0;
    int i = 0, j = 0;
    int mat[10][10];

    while(user != 'D')
    {
        scanf("%c", &user);
        switch (user)
        {
            case 'A':
                matrix(mat);
                break;

            case 'B':
                ifExist(i, j, mat);
                break;

            case 'C':
                shortPath(i, j, mat);
                break;
        }
    }
    return 0;
}
