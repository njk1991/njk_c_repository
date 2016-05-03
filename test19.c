// test19.c
// http://www.runoob.com/cprogramming/c-exercise-example19.html

#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i < 1000; ++i)
    {
        int result = 0;
        for (int j = 1; j <= i / 2; ++j)
        {
            if (i % j == 0)
            {
                result += j;
            }
        }
        if (result == i)
        {
            printf("完数:%d\n", i);
        }
    }
    return 0;
}