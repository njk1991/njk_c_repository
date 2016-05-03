// test7.c
// http://www.runoob.com/cprogramming/c-exercise-example7.html

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a = 176, b = 219;
    printf("%c%c%c%c%c\n",b,a,a,a,b);
    printf("%c%c%c%c%c\n",a,b,a,b,a);
    printf("%c%c%c%c%c\n",a,a,b,a,a);
    printf("%c%c%c%c%c\n",a,b,a,b,a);
    printf("%c%c%c%c%c\n",b,a,a,a,b);
    return 0;
}