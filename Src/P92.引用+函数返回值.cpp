#include <iostream>
#include <string>
using namespace std;

//引用函数返回值
//1.不要返回局部变量的引用
//2.函数的调用可以作为左值 即 test_2() = 10 为正确语法

int &test_1()   
{
    int a = 10; // 创建局部变量 → 存放在栈区
    return a;   // 这里相当于 int &test_1() = a <-------------👀
}


int &test_2()
{
    static int a = 10; // 创建静态变量 → 存放在全局区
    return a;
}


int main()
{
    int reference1 = test_1(); // 这里返回了局部变量的引用 → ❌
    int reference2 = test_2();
    test_2() = 100;            // 函数作为左值

    cout << reference2 << endl;// 可以打印
    cout << reference1 << endl;// 无法打印

    system("pause");
    return 0;
}
