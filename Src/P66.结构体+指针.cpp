#include <iostream>
#include <string>
using namespace std;

/*----------------------结构体指针利用 -> 访问结构体属性-------------------------*/

struct student
{
    string Name;
    int age;
    int score;
};

int main()
{
    //1.创建 student 结构体变量
    struct student stu1 = {"A",18,100};

    //2.通过指针指向 student 结构体变量
    struct student * p = &stu1;

    //3.通过指针访问 student 结构体变量树形
    cout << p->age            //<------👀
         << p->Name           //<------👀
         << p->score          //<------👀
         << endl;

    return 0;
}
