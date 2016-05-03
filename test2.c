// test2.c
// http://www.runoob.com/cprogramming/c-exercise-example2.html

#include <stdio.h>

int main(int argc, char const *argv[])
{
    for(;;)
    {
        double profit, bonus;
        
        double bonus10, bonus20, bonus40, bonus60, bonus100;
        bonus10 = 100000 * 0.1;
        bonus20 = bonus10 + 100000 * 0.075;
        bonus40 = bonus20 + 200000 * 0.05;
        bonus60 = bonus40 + 200000 * 0.03;
        bonus100 = bonus60 + 400000 * 0.015;

        printf("请输入利润：\n");
        scanf("%lf",&profit);

        if (profit <= 100000) {
            bonus  = profit * 0.1;
        } else if (profit <= 200000) {
            bonus = bonus10 + (profit - 100000) * 0.075;
        } else if (profit <= 400000) {
            bonus = bonus20 + (profit - 200000) * 0.05;
        } else if (profit <= 600000) {
            bonus = bonus40 + (profit - 400000) * 0.03;
        } else if (profit <= 1000000) {
            bonus = bonus60 + (profit - 600000) * 0.015;
        } else {
            bonus = bonus100 + (profit - 1000000) * 0.01;
        }

        printf("提成为:%.2lf元\n", bonus);
    }
    return 0;
}