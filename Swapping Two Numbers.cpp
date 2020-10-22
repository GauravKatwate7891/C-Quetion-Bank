using namespace std;

#include<iostream>
#include<conio.h>

class Swapping
{
public :
    int ino1,ino2;
};

int main()
{
    Swapping obj1;

    cout << "\n Enter First Number=>";
    cin >> obj1.ino1;

    cout << "\n Enter Second Number=>";
    cin >> obj1.ino2;

    clrscr();

    cout << "\n ***========**********========***" << endl;
    cout << "\n Before Swapping First Number=>" << obj1.ino1 ;
    cout << "\n Before Swapping Second Number=>" << obj1.ino2 << endl;
    cout << "\n ***=========**********=======***" << endl;

    obj1.ino1=obj1.ino1+obj1.ino2;
    obj1.ino2=obj1.ino1-obj1.ino2;
    obj1.ino1=obj1.ino1-obj1.ino2;

    cout << "\n ***========**********========***" << endl;
    cout << "\n After Swapping First Number=>" <<obj1.ino1;
    cout << "\n After Swapping Second Number=>" <<obj1.ino2 << endl;
    cout << "\n ***========**********========***";
}