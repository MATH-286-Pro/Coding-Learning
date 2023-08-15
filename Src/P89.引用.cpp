#include <iostream>
#include <string>
using namespace std;

int main()
{
    //引用基本语法
    //数据类型 &别名 = 原名

    int a = 0;

    int &b = a; //<------👀

    b = 20;

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    return 0;
}

//引用注意事项
//1.引用必须初始化
//2.引用在初始化后 不可改变 (b引用a后就不可以在引用c,d,e其他变量了)