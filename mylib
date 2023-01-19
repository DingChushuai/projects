#include<stdio.h>
#include<conio.h>

# define _INCLUDE_MYLIB_  1
# ifndef _IN_INCLUDE_MYLIB_

// 显示选项信息让用户做出选择,输出选择结果
// inf 显示的选项信息
// number_of_options 选项数量(从1开始选择)
// quick_choose 不为0时,不等待回车(这意味着选项最多9项)
int choose(const char* inf,int number_of_options,int quick_choose=0)
{
    
    printf(inf);
    char choosed;
    while(1)
    {
        if (quick_choose) choosed=getch();
        else choosed=getchar();
        if ( choosed > '0' && choosed < '1' + number_of_options) return choosed-'0';
        else 
        {
            printf("无效选择,请重新选择:");
        }
        if (!quick_choose) getch();
    }
}

//重复打印
void repeat_print(char *str,int times=1)
{

    while(times>0)
    {
        printf("%s",str);
        times--;
    }
}

# endif