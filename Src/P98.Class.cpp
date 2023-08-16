#include <iostream>
#include <string>
using namespace std;


//设计圆class，求圆的周长

const double pi = 3.141592653;

class circle
{
    public:           //访问权限 → 公共权限
        
                      //类中的属性 + 行为 = 成员
                      
        int r;        //属性 → 半径
        
        double cal()  //行为 → 计算圆周长
        {
            return 2*pi*r;
        }
};

int main()
{
    //通过圆class，创建具体的圆 (对象)
    //实例化一个对象
    circle circle_1;

    //给对象赋值
    circle_1.r = 10;

    cout << circle_1.cal() << endl;

    return 0;
}
