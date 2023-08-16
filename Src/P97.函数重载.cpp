#include <iostream>
#include <string>
using namespace std;


//函数重载：
// 函数名可以相同

//函数重载条件：
// 1.同一作用域
// 2.函数名相同
// 3.函数参数不同 or 个数不同 or 顺序不同

//函数重载注意事项：
// 1.引用作为重载条件
// 2.遇到默认参数

void function(){cout<<"Nothing"<<endl;}

void function(double a){cout<<"Double"<<endl;}


void function(int& a){cout<<"int& a"<<endl;}

void function(const int& a){cout<<"const int& a"<<endl;}


int main()
{
    int a = 10;
    
    function();
    
    function(3.14);

    function(a);

    function(10);

    return 0;
}
