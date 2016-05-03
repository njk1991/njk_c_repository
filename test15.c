// test15.c
// http://www.runoob.com/cprogramming/c-exercise-example15.html

#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (;;)
    {
        int score;
        printf("请输入分数:");
        scanf("%d", &score);

        char level;
        level = score >= 90 ? 'A' : score >= 60 ? 'B' : 'C';
        printf("该分数等级为:%c\n", level);
    }
    return 0;
}