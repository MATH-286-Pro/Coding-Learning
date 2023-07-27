#include <iostream>
#include <string>
using namespace std;

//定义 student 结构体
struct student
{
    string name;
    int age;
    int score; 
};

//定义 指针参数 函数
void print(student * p_stu)
{
    cout <<p_stu->age                 //<------👀
         <<p_stu->name
         <<p_stu->score
         <<endl;
}

int main()
{   
    //创建 student_1 结构体变量
    student student_1 = {"A",1,100};

    //调用 指针参数 函数
    print(&student_1);                //<------👀

    return 0;
}
