// test13.c
// http://www.runoob.com/cprogramming/c-exercise-example13.html narcissus number;

#include <stdio.h>

int cube(int);

int main(int argc, char const *argv[])
{
    for (int i = 100; i < 999; ++i)
    {
        int hundreds, tens, ones;
        hundreds = i / 100;
        tens = i / 10 % 10;
        ones = i % 10;
        if (cube(hundreds) + cube(tens) + cube(ones) == i)
        {
            printf("水仙花数:%d\n", i);
        }
    }
    return 0;
}

int cube(int i)
{
    return i * i * i;
}