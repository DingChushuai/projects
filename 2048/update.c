void add(int map[][4]);

int update(char direction,int map[][4])//失败返回1,合成出2048返回2
{
    int i,j,k;
    int isEnd=1;
    int isWin=0;
    int temp[6][6];
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {           
            temp[i][j]=1;
        }
    }
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            temp[i][j]=map[i-1][j-1];
        }
    }
    for(i=0;i<6;i++)  //判断是否结束
    {
        for(j=0;j<6;j++)
        {
            if(temp[i][j]==0)
            {
                isEnd=0;
                break;
            }
        }
    }
    if(isEnd==1) return 1;

    add(map);
    if(direction=='w')
    {
        for(i=1;i<5;i++)
        {
            for(j=1;j<5;j++)
            {
                if(temp[i-1][j]==0)//移动
                {
                    for(k=i-1;k<4;k++)
                    {
                        temp[k][j]=temp[k+1][j];
                    }
                    temp[4][j]=0;
                }
                if(temp[i-1][j]==temp[i][j])//相同项合并
                {
                    temp[i-1][j]*=2;
                    for(k=i;k<4;k++)
                    {
                        temp[k][j]=temp[k+1][j];
                    }
                    temp[4][j]=0;
                }
            }
        }
    }
    else if(direction=='a')
    {
        for (i = 1; i < 5; i++)
        {
            for (j = 1; j < 5; j++)
            {
                if (temp[i][j-1] == 0) // 移动
                {
                    for (k = j - 1; k < 4; k++)
                    {
                        temp[i][k] = temp[i][k+1];
                    }
                    temp[i][4] = 0;
                }
                if (temp[i][j-1] == temp[i][j]) // 相同项合并
                {
                    temp[i][j-1] *= 2;
                    for (k = j; k < 4; k++)
                    {
                        temp[i][k] = temp[i][k+1];
                    }
                    temp[i][4] = 0;
                }
            }
        }
    }
    else if(direction=='s')
    {
        for(i=5;i>1;i--)
        {
            for(j=1;j<5;j++)
            {
                if(temp[i][j]==0)
                {
                    for(k=i;k>1;k--)
                    {
                        temp[k][j]=temp[k-1][j];
                    }
                    temp[1][j]=0;
                }
                if(temp[i][j]==temp[i-1][j])
                {
                    
                }
            }
        }
    }
    else if(direction=='d')
    {

    }
}