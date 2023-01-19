#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;

extern int map[4][4];
extern int score;

void show(int map[][4])
{
    system("cls");
    cout<<"您当前的分数为"<<score<<"分"<<endl;
    for(int i=0;i<4;i++){
        cout<<"====================="<<endl;
        cout<<"|";
        for(int j=0;j<4;j++){
            cout<<setw(4)<<setfill(' ')<<map[i][j]<<"|";
        }
        cout<<endl;
    }
    cout<<"====================="<<endl;
}
