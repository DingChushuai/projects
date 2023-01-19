#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include"ui.cpp"
#include"update.c"

extern int map[4][4];
extern int score;

void add(int map[][4]);
int update(char direction,int map[][4]);
void show(int map[][4]);

void begin()
{
    printf("1");
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
            printf("游戏失败!\n");
        }
        if (ifend==2) 
        {
            system("cls");
            printf("游戏成功!\n");
        }
        if (ifend==1||ifend==2)
        {
            printf("您的最终分数是:%d\n",score);
            char re;
            printf("是否再来一局?(y/n)\n");
            re=getchar();
            if(re=='y')
            {
                score=0;
                for(int i=0;i<16;i++) map[0][i]=0;
                continue;
            }
            else
            {
                exit(0);
            }
        }
    }
    
}

void add(int map[][4])
{
    srand(time(0));
    int t,r=0;
    do{
    t=rand()%16;
    printf("%d\n",t);
    if (map[0][t]==0) 
    {
        if(t==0||t==1) map[0][t]=4;
        else map[0][t]=2;
        r=1;
    }
    }while(r!=1);
}