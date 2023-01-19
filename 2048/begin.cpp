#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

extern int map[4][4];
extern score;

void add();
void begin()
{
    add(map);
    add(map);
    score=0;
    while (1)
    {
        int right=0,ifend=0;
        char direction='\0';
        show(map);
        do
        {
            direction=getch();
            if (direction=='w'||direction=='a'||direction=='s'||direction=='d') right=1;
        } while (!right);
        ifend=update(direction,map);
        if (ifend==1) 
        {
            system("cls");
            printf("游戏失败!\n")
        }
        if (ifend==2) 
        {
            system("cls");
            printf("游戏成功!\n")
        }
        if (ifend)
        {
            printf("您的最终分数是:%d\n",score);
            char re;
            printf("是否再来一局?(y/n)\n");
            re=getchar();
            if(re=='y')
            {
                score=0;
                for(i=0;i<16;i++) map[0][i]=0;
                continue;
            }
            else
            {
                exit(0);
            }
        }
    }
    
}