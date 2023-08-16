#include <iostream>
#include <string>
using namespace std;


class test
{
public: //设置公共行为 （通过公共函数接口对私有属性赋值）
    void set(string input_name)
    {name = input_name;}

    void get()
    {cout << name << endl;}
    
private: //设置私有属性
    string name;
    int    age;
    string phone;
};


int main()
{   
    test data1;

    data1.set("Battle Field 2042");

    data1.get();

    return 0;
}
