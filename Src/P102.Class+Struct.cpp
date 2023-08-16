#include <iostream>
#include <string>
using namespace std;

class A1
{
    int property; //默认私有权限
};

struct A2
{
    int property; //默认公共权限
};

int main()
{   
    A1 a1;
    a1.property = 10; //❌

    A2 a2;
    a2.property = 10; //✔

    return 0;
}
