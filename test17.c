// test17.c
// http://www.runoob.com/cprogramming/c-exercise-example17.html

#include <stdio.h>
#include <string.h>

void getString(char buffer[], size_t size);
void stringSummary(char buffer[], int length);

int main(int argc, char const *argv[])
{
    char buffer[100];
    size_t size = sizeof(buffer);
    int length;

    getString(buffer, size);
    length = strlen(buffer) - 1;
    stringSummary(buffer, length);

    return 0;
}

void getString(char buffer[], size_t size)
{
    printf("请输入一串字符:");
    fgets(buffer, size, stdin);
}

void stringSummary(char buffer[], int length)
{
    int numbers, lowers, uppers, others;
    numbers = 0;
    lowers = 0;
    uppers = 0;
    others = 0;

    for (int i = 0; i < length; ++i)
    {
        char temp = *(buffer + i);
        if (temp >= '0' && temp <= '9')
        {
            numbers++;
        } else if (temp >= 'a' && temp <= 'z') {
            lowers++;
        } else if (temp >= 'A' && temp <= 'Z') {
            uppers++;
        } else {
            others++;
        }
    }
    printf("数字:%d, 小写字母:%d, 大写字母:%d, 其他:%d\n", numbers, lowers, uppers, others);
}