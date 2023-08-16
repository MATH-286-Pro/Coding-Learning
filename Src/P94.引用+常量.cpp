#include <iostream>
#include <string>
using namespace std;

//常量引用
//使用场景：修饰形参，防止误操作

void print(const int& value) //<-------防止函数内变量修改影响函数外的被引用变量
{
    cout << value << endl;
}

int main()
{
    int a = 10;
    
    //int& refernce = 10; //❌
    const int& refernce = 10;      //加上 const 后编译器执行过程： int temp =10; int & refernce = tmep;

    int a = 100;

    print(a);

    return 0;
}
