#include <iostream>
#include <string>
using namespace std;

#define Max 100 //Contact_Roller 长度

struct Contact_t
{
    string name;
    int    sex;
    int    age;
    string phone; //电话号码
    string address;
};

struct Contact_Roller_t
{
    Contact_t ContactArray[Max];
    int size; //属性：当前联系人数量
};


//UI界面
void showMeun()
{
    cout << "###########################" << endl;
    cout << "##### 1.Add   contact #####" << endl;
    cout << "##### 2.Show  contact #####" << endl;
    cout << "##### 3.Delet contact #####" << endl;
    cout << "##### 4.Find  contact #####" << endl;
    cout << "##### 5.Mod   contact #####" << endl;
    cout << "##### 6.Clear contact #####" << endl;
    cout << "##### 0.Log   Out     #####" << endl;
    cout << "###########################" << endl;
}

//添加联系人函数
void function_1(Contact_Roller_t* Contact_Roller_p)
{
    // 判断通讯录人数是否已满 > Max
    if(Contact_Roller_p->size == Max){cout <<"Already Full"<< endl;}
    else
    {   // 输入年龄
        string name_input;
        cout << "please input name" << endl;
        cin >> name_input;
        Contact_Roller_p->ContactArray[Contact_Roller_p->size].name = name_input;

        // 输入性别
        int sex_input = 0;
        cout << "please input sex" << endl;
        cin >> sex_input;
        Contact_Roller_p->ContactArray[Contact_Roller_p->size].sex = sex_input;

        // 输入电话
        int phone_input = 0;
        cout << "please input phone number" << endl;
        cin >> phone_input;
        Contact_Roller_p->ContactArray[Contact_Roller_p->size].phone = phone_input;

        Contact_Roller_p->size++;

        cout <<"Successfully Adding New Contacts"<< endl;

        system("pause"); //请按任意键继续
        system("cls");   //清屏
    }
}

//显示联系人函数
void function_2(Contact_Roller_t* Contact_Roller_p)
{
    //判断通讯录人数是否为0
    if(Contact_Roller_p->size==0){cout<<"Your Contact List Is Empty"<<endl;}
    else
    {
        for(int i =0; i<Contact_Roller_p->size; i++)
        {
            cout <<"Name: "<< Contact_Roller_p->ContactArray[i].name << "\t";
            cout <<"Sex:  "<< Contact_Roller_p->ContactArray[i].sex  << "\t";
            cout <<"Phone:"<< Contact_Roller_p->ContactArray[i].phone << endl;
        }
    }

    system("pause");
    system("cls");
}




int main()
{   

    /*------------------------初始化开始---------------------------*/
    int select = 0; // 创建用户输入

    Contact_Roller_t Contact_Group_1;
    Contact_Group_1.size = 0;
    /*------------------------初始化结束---------------------------*/

    while(true)
    {   
        showMeun();

        cin >> select;

        switch(select)
        {
            case 1: // 添加联系人
                function_1(&Contact_Group_1);
                break;
            case 2: // 显示联系人
                function_2(&Contact_Group_1);
                break;
            case 3: // 删除联系人
                break;
            case 4: // 查找联系人
                break;
            case 5: // 修改联系人
                break;
            case 6: // 清空联系人
                break;
            case 0: // 退出系统
                cout << "Already Log Out" << endl;
                return 0;
                break;
        }
    }

    return 0;
}
