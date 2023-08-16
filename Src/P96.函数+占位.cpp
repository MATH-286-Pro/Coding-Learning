#include <iostream>
#include <string>
using namespace std;



//语法：返回值类型 函数名 (数据类型){}
//     void function (int a; int){}

//目前学习阶段占位参数无法调用
//占位参数可以有默认参数

void function (int a; int = 10)
{
    cout << a << endl;
}

int main()
{
    function(1,1);

    return 0;
}
