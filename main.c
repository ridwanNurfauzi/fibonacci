/**
 * @file main.c
 * @author M. Ridwan Nurfauzi (mrnhp123@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-07-25
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 20;
    int F[n];

    F[0] = 0;
    F[1] = 1;

    for (size_t i = 0; i < n; i++)
    {
        if (!(i < 2))
            F[i] = F[i - 1] + F[i - 2];

        printf("%i", F[i]);

        if (i + 1 < n)
            printf(", ");
    }

    return 0;
}
