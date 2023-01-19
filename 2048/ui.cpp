#include<iostream>
#include<iomanip>
using namespace std;
void show(int *map[])
{
    cout<<"您当前的分数为"<<score<<"分"<<endl;
    for(int i=0;i<4;i++){
        cout<<"---------------------"<<endl;        
        cout<<"|";
        for(int j=0;j<4;j++){
            cout<<setw(4)<<setfill(' ')<<map[i][j]<<"|";
        }
        cout<<endl;
    }
    cout<<"---------------------"<<endl; 
}
int main()
{
    show(map);
}