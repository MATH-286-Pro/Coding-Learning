#include <iostream>
#include <string>
using namespace std;

//1.值传递

//2.地址传递

//3.引用传递
void exchange(int &a, int &b) //<------------👀
{
    int temp = a;
    a = b;
    b = temp;
}


int main()
{
    int a = 1;
    int b = 2;
    exchange(a,b);

    cout<< "a=" << a <<endl;
    cout<< "b=" << b <<endl;

    return 0;
}
