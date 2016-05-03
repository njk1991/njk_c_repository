// test20.c
// http://www.runoob.com/cprogramming/c-exercise-example20.html

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float bound_height = 100;
    float distance = 0;

    for (int i = 0; i < 10; ++i)
    {
        distance += bound_height * 1.5;
        bound_height /= 2;
        if (bound_height <= 0)
        {
            break;
        }
    }
    distance -= bound_height;
    printf("共经过%f米, 反弹高度%f米\n", distance, bound_height);

    return 0;
}