// test1.c
// http://www.runoob.com/cprogramming/c-exercise-example1.html

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int hundreds, tens, ones;
    int numbers[] = {1, 2, 3, 4};
    int len;
    int count = 0;

    len = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < len; ++i)
    {
        hundreds = numbers[i];
        for (int i = 0; i < len; ++i)
        {
            tens = numbers[i];
            if (hundreds == tens)
            {
                continue;
            }
            for (int i = 0; i < len; ++i)
            {
                ones = numbers[i];
                if (hundreds == ones || tens == ones)
                {
                    continue;
                }
                count++;
                printf("%d%d%d\n", hundreds, tens, ones);
            }
        }
    }

    printf("total : %d\n", count);

    return 0;
}