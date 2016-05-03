// test11.c
// http://www.runoob.com/cprogramming/c-exercise-example11.html

#include <stdio.h>

int main(int argc, char const *argv[])
{
    long count1, count2;
    count1 = 2;
    count2 = 2;

    for (int i = 1; i <= 40; ++i)
    {
        if (i >= 3)
        {
            count2 = count1 + count2;
            count1 = count2 - count1;
        }
        printf("第%d个月的兔子总数为:%ld\n", i, count2);
    }
    return 0;
}