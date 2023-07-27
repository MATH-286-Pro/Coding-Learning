#include <iostream>
#include <string>
using namespace std;

// const + 结构体 → 防止误操作        <------👀


// 定义 student 结构体
struct student
{
    string name;
    int age;
    int score; 
};


//定义 指针参数 函数
void print(const student * p_stu)  //<------👀 此时如果函数里有修改值的操作会报错
{
    cout <<p_stu->age               
         <<p_stu->name
         <<p_stu->score
         <<endl;
}


int main()
{
    student student_1 = {"A",1,100};

    print(&student_1);

    return 0;
}
