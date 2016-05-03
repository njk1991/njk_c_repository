// test12.c
// http://www.runoob.com/cprogramming/c-exercise-example12.html

#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 101; i < 200; ++i)
    {
        int is_prime_number = 1;
        for (int j = 2; j < i / 2; ++j)
        {
            if (i % j == 0)
            {
                is_prime_number = 0;
                break;
            }
        }
        if (is_prime_number)
        {
            printf("素数:%d\n", i);
        }
    }
    return 0;
}