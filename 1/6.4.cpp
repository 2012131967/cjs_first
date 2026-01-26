#include<iostream>
#include<string>
#include<windows.h>  // 用于设置控制台代码页，解决中文乱码
using namespace std;

// 目的：演示值传递（按值传递）的特点
// 注意：这个 swap 函数无法真正交换 main 函数中的 a 和 b
// 因为参数是按值传递的，函数内部只是交换了形参（副本）的值
void swap(int num1, int num2) {
    cout << "交换前（函数内部）：数字1=" << num1 << ", 数字2=" << num2 << endl;
    
    int temp = num1;
    num1 = num2;
    num2 = temp;
    
    cout << "交换后（函数内部）：数字1=" << num1 << ", 数字2=" << num2 << endl;
}

int main() {
    // 设置控制台代码页为 UTF-8，解决中文乱码问题
    SetConsoleOutputCP(65001);
    
    int a = 10;
    int b = 20;
    
    cout << "调用 swap 前：a=" << a << ", b=" << b << endl;
    swap(a, b);
    cout << "调用 swap 后：a=" << a << ", b=" << b << endl;
    cout << "\n结论：a 和 b 的值没有改变，因为 swap 函数使用的是值传递（传值）\n";
    cout << "     函数内部只修改了形参的副本，不会影响实参的值\n";
    
    system("pause");
    return 0;
}