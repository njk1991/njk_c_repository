// test21.c
// http://www.runoob.com/cprogramming/c-exercise-example21.html

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int peach_number = 1;
    for (int i = 0; i < 9; ++i)
    {
        peach_number = (peach_number + 1) * 2;
    }
    printf("一共有%d个桃子\n", peach_number);
    return 0;
}