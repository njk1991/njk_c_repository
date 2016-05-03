// test10.c
// http://www.runoob.com/cprogramming/c-exercise-example10.html

#include <stdio.h>

void printStair(int, int);

int main(int argc, char const *argv[])
{
    for (;;)
    {
        int stairs, man_in_stair;
        printf("请输入阶梯级数:");
        scanf("%d", &stairs);
        printf("请输入小人所在级数:");
        scanf("%d", &man_in_stair);

        for (int i = 0; i < stairs; ++i)
        {
            if (i == man_in_stair)
            {
                printStair(i, 1);
            } else {
                printStair(i, 0);
            }
        }
    }
    return 0;
}

void printStair(int stairs, int man_in_stair)
{
    for (int i = 0; i < stairs - 1; ++i)
    {
        printf("** ");
    }
    if (man_in_stair)
    {
        printf("@@ ");
    }
    printf("\n");
}