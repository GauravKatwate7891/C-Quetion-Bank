#include<iostream>
#include<conio.h>
using namespace std;
int Max_No(int,int);

class Max
{
public :
    int ino1,ino2;

    Max()
    {
        cout << "\n Enter First Number=>";
        cin >> ino1;

        cout << "\n Enter Second Number=>";
        cin >> ino2;

        clrscr();

        cout << "\n Maximum Number Is =>" << Max_No(ino1,ino2);
    }

    ~Max()
    {
    }
};

int Max_No(int no1,int no2)
{
    if(no1 > no2)
    {
        return no1;
    }
    else
    {
        return no2;
    }
}
int main()
{
    Max obj1;

    return 0;
}