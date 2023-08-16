#include <iostream>
#include <string>
using namespace std;


//注意事项
//1.若某个位置有默认值，那这个位置之后都必须由默认值 int function(int a; int b=1; int c=1){}
//2.函数声明，函数实现 只有一个能有默认值


//函数默认参数
int function1( int a = 1; int b = 2; int c = 3)
{
    return a+b+c;
}

int function2(int a=0; int b=0); //Function2 函数声明 (添加默认值)


int main()
{
    cout << function1(10) << endl; //<----虽然要三个参数，但是因为有默认值，所以输入<3个参数也行
    cout << function2(10,10) << endl;

    return 0;
}

int function2(int a; int b) //Function2 函数实现 (函数声明添加默认值，所以函数实现不可添加)
{
    return a+b;
}