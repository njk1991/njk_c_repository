// test22.c
// http://www.runoob.com/cprogramming/c-exercise-example22.html
// 题目：两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。已抽签决定比赛名单。有人向队员打听比赛的名单。a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单。

#include <stdio.h>
#include <string.h>

void pickOpponent(char player,char opponent[], char except[], int length_of_opponent, int length_of_except);
void handleOpponent(char opponent[], char pickedOpponent[]);

int main(int argc, char const *argv[])
{
    char team1[] = "abc";
    char team2[] = "xyz";

    char c_except_list[] = "x,z";
    char a_except_list[] = "x";

    int length_of_team = strlen(team1);
    for (int i = 0; i < length_of_team; ++i)
    {
        printf("%c\n", *(team1 + i));
        pickOpponent(*(team1 + i), )
    }
    return 0;
}

void pickOpponent(char player,char opponent[], char except[], int length_of_opponent, int length_of_except)
{
    char temp[length_of_opponent];
    strcpy(temp, opponent);
    for (int i = 0; i < length_of_opponent; ++i)
    {
    }
}
