#include <iostream>
#include <string>
using namespace std;

//定义结构体
struct data_t
{
    string name;
    int    age;
    string sex;
};

//定义排序函数 //指针使用 → 地址传递
void sort(data_t data_0[],int len)
{
    for(int i=0; i<len-1 ; i++)
    {
        for(int j=0; j<len-i-1 ; j++)
        {
            if(data_0[j].age > data_0[j+1].age)
            {
                data_t temp = data_0[j];
                data_0[j]   = data_0[j+1];
                data_0[j+1] = temp;
                cout << &data_0[j] << endl;
            }
        }
    }
}

int main()
{   //创建结构体变量
    data_t data_1[5] = 
    {
        {"A",23,"1"},
        {"B",22,"1"},
        {"C",20,"1"},
        {"D",21,"1"},
        {"E",19,"0"},
    };

    //计算长度
    int len = sizeof(data_1)/sizeof(data_1[0]);

    //调用排序函数
    sort(data_1,len);

    //打印结果
    for(int i=0 ; i<len ; i++)
    {
        cout <<" Name "<<data_1[i].name
             <<" Age  "<<data_1[i].age
             <<" Sex  "<<data_1[i].sex <<endl;
    }

    return 0;
}
