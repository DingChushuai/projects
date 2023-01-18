#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"

int main()
{
    repeat_print("=",20);
    int t;
    t=choose("\n1.开始\n2.结束\n3.继续\n",3);
    repeat_print("=",20);
    printf("%d",t);
    system("pause");
}