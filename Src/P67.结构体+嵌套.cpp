#include <iostream>
#include <string>
using namespace std;


//定义 student 结构体
struct student
{
    string Name;
    int Age;
    int Score;
};


//定义 teacher 结构体
struct teacher
{
    int ID;
    string Name;
    int Age;
    struct student stu;  //嵌套结构体 代表辅导的学生
};


int main()
{
    //创建 teacher 结构体变量
    struct teacher teacher_1;

    // teacher_1 结构体变量赋值
    teacher_1.ID = 1;
    teacher_1.Name = "AF";
    teacher_1.Age = 18;

    // teacher_1 嵌套结构体赋值
    teacher_1.stu.Age = 18;       //<------👀
    teacher_1.stu.Name = "A";     //<------👀

    return 0;
}
