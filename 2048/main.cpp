#include<stdio.h>

int map[4][4]={0};
int score=0;

void begin();//0显示空,是否重新开始
int update(char direction,int map);//失败返回1,合成出2048返回2
void show(int map);//分数显示在第一行,界面方形

int main()
{
    while(1) begin();
}