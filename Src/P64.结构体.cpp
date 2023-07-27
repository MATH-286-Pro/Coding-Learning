#include <iostream>
#include <string>
using namespace std;


struct student
{
    int ID;
    string Name;
}stu3;                              //定义 stu3


int main()
{
    /*--------------------------------------------------------------------*/
    struct student stu1;            //定义 stu1
    stu1.ID = 1;
    stu1.Name = "A";       

    struct student stu2 = {2,"B"};  //定义 stu2 + 参数

    /*--------------------------------------------------------------------*/
    struct student stu[3] =         //定义 stu 结构体数组 
    {
        {1,"A"},
        {2,"B"},
        {3,"C"}
    };         

    stu[2].Name = "D";              //修改 stu 结构体数组 stu[2].Name 参数
    /*--------------------------------------------------------------------*/

    for (int i = 0; i < 3; i++ )
    {
        cout << stu[i].ID
             << stu[i].Name
             << endl;

    }

    return 0;
}
