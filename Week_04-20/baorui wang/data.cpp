#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int a[9][9];
    fstream in("C://Users//wangshaoxin//Desktop//data.txt");
    cin.rdbuf(in.rdbuf());
    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++)
            std::cin>>a[i][j];
    for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
    return 0;
}
