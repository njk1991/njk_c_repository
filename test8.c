// test8.c
// http://www.runoob.com/cprogramming/c-exercise-example8.html

#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 9; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            int product;
            product = i * j;

            printf("%d * %d = %d ",i, j, product);
        }
        printf("\n");
    }
    return 0;
}