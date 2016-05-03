// test5.c
// http://www.runoob.com/cprogramming/c-exercise-example5.html

#include <stdio.h>

int sortArray(int *array, int len);
void swap(int *a, int *b);

int main(int argc, char const *argv[])
{
    int x, y, z, a, b, c, d, e, f, g;
    printf("请输入三个数(用空格隔开)：\n");
    scanf("%d %d %d", &x, &y, &z);
    int numbers[] = {x, y, z};
    int len = sizeof(numbers) / sizeof(numbers[0]);
    sortArray(numbers, len);
    printf("排序后：");
    for (int i = 0; i < len; ++i)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}

int sortArray(int *array, int len)
{
    int temp;
    int *p = array;

    for (int i = len; i > 0; i--)
    {
        for (int j = 0; j < (i - 1); j++)
        {
            if (*(p + j) > *(p + j + 1))
            {
                swap((p + j), (p + j + 1));
            }
        }
    }
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}