// test4.c
// http://www.runoob.com/cprogramming/c-exercise-example4.html

#include <stdio.h>

int isLeapYear(int);
int dayOfMonthInYear(int, int);

int main(int argc, char const *argv[])
{
    int year, month, day;

    for (;;)
    {
        int day_count = 0;

        printf("请输入年-月-日(1990-01-01)：\n");
        scanf("%d-%d-%d", &year, &month, &day);

        for (int i = 0; i < month; ++i)
        {
            day_count += dayOfMonthInYear(i, year);
        }

        day_count += day;
        printf("%d年%d月%d日是本年的第%d天\n",year, month, day, day_count);

    }

    return 0;
}

int isLeapYear(int year)
{
    if (year % 4 == 0 && year % 100 != 0)
    {
        return 1;
    } else if (year % 400 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int dayOfMonthInYear(int month, int year)
{
    switch (month) {
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10 :
        case 12 :
        return 31;

        case 4 :
        case 6 :
        case 9 :
        case 11 :
        return 30;

        case 2 :
        if (isLeapYear(year)) {
            return 29;
        } else {
            return 28;
        }

        default:
        return 0;
    }
}
