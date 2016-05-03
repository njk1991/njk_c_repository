// test14.c
// http://www.runoob.com/cprogramming/c-exercise-example14.html

#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (;;)
    {
        long number;
        long factor = 2;

        printf("请输入数字:");
        scanf("%ld", &number);

        printf("%ld = ", number);
        for (;;)
        {
            if (number % factor == 0)
            {
                printf("%ld", factor);
                number = number / factor;
                if (number == 1)
                {
                    printf("\n");
                    break;
                }
                printf(" * ");
            } else {
                factor++;
            }
        }

    }
    return 0;
}