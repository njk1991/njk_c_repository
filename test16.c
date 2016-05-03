// test16.c
// http://www.runoob.com/cprogramming/c-exercise-example16.html

#include <stdio.h>

void getNumber(int *m, int *n);
void getGCD(int, int);
void getLCM(int, int);
int getMax(int, int);

int main(int argc, char const *argv[])
{
    int m, n;
    getNumber(&m, &n);
    getGCD(n, m);
    getLCM(n, m);
    return 0;
}

void getNumber(int *m, int *n)
{
    printf("请输入第一个数:");
    scanf("%d", m);
    printf("请输入第二个数:");
    scanf("%d", n);
}

void getGCD(int m, int n)
{
    int max = getMax(m, n);
    int GCD;
    for (int i = 1; i <= max / 2; ++i)
    {
        if (m % i == 0 && n % i == 0)
        {
            GCD = i;
        }
    }
    printf("最大公约数:%d\n", GCD);
}

void getLCM(int m, int n)
{
    int limit = m * n;
    int LCM;
    for (int i = limit; i >= getMax(m, n); --i)
    {
        if (i % m == 0 && i % n == 0)
        {
            LCM = i;
        }
    }
    printf("最小公倍数:%d\n", LCM);
}

int getMax(int m, int n)
{
    return m > n ? m : n;
}