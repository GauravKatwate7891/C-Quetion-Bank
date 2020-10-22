using namespace std;

#include<iostream>
#include<conio.h>

class Squer
{
public:
    int ino;

    int Squer_Of();

    Squer()
    {
        cout << "\n Enter The Any Number=>";
        cin >> ino;
    }

    ~Squer()
    {
    }
};

int Squer_Of(int No)
{
    return No*No;
}

int main()
{
    Squer obj1;

    cout << "\n ****=========*******=========****" << endl;
    cout << "\n Squer Of Given Number "<< obj1.ino <<"^2 Is =>" << Squer_Of(obj1.ino) << endl;
    cout << "\n ****=========*******=========****";

    getch();
    return 0;
}
