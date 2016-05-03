// test3.c
// http://www.runoob.com/cprogramming/c-exercise-example3.html

#include <stdio.h>

int squareMatch(int );

int main(int argc, char const *argv[])
{
    int magic_num = 0;

    for (int i = 0; i < 1000000; ++i)
    {
        if (squareMatch(magic_num + 100))
        {
            if (squareMatch(magic_num + 100 + 168))
            {
                printf("Magic Number is %d\n", magic_num);
                // break;
            }
        }
        magic_num++;
    }

    return 0;
}

int squareMatch(int num)
{
    int result;

    for (int i = 0; i < num / 2; ++i)
    {
        result = i * i;
        if (result == num)
        {
            // printf("Match root : %d, result:%d\n", i, result);
            return 1;
        } else if (result > num) {
            return 0;
        }
    }
    return 0;
}
