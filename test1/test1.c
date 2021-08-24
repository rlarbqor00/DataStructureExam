#include <stdio.h>

int main()
{

    for (int i = 2; i <= 9; i++)
    {
        printf("%d 단\n", i);
        for (int x = 1; x <= 9; x++)
        {
            printf("%d X %d = %d\n", i, x, i * x);
        }
        printf("\n");
    }

    return 0;
}