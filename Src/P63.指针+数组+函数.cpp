#include <iostream>
using namespace std;

int array[10] = {4, 3, 5, 9, 1, 2, 10, 8, 7, 5};  //创建排序数组

void sort(int * array, int size)                  //创建排序函数，增加参数size表示数组的大小，通过改变指针指向地址的值进行排序，所以使用void不带返回值的函数
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // 交换两个元素
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int size = sizeof(array) / sizeof(array[0]);  // 计算数组大小
    sort(array, size);  // 调用排序函数

    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
