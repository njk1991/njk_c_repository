// test18.c
// http://www.runoob.com/cprogramming/c-exercise-example18.html
// 题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。

#include <stdio.h>

int getNumber();
int getDigit();
void calculateResult(int, int);

int main(int argc, char const *argv[])
{
    int number = getNumber();
    int digit = getDigit();
    calculateResult(number, digit);
    return 0;
}

int getNumber()
{
    int number;
    printf("请输入数字(1-9):");
    scanf("%d", &number);
    return number;
}

int getDigit()
{
    int digit;
    printf("请输入位数:");
    scanf("%d", &digit);
    return digit;
}

void calculateResult(int number, int digit)
{
    long result = 0;
    long addend = 0;

    for (int i = 0; i < digit; ++i)
    {
        addend = addend * 10 + number;
        result += addend;
        printf("%ld", addend);
        if (i != digit - 1)
        {
            printf(" + ");
        }
    }
    printf(" = %ld\n", result);
}