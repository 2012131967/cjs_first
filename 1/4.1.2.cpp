#include<iostream>
#include<windows.h>  // 用于设置控制台代码页，解决中文乱码
using namespace std;

// 目的：演示三目运算符 (条件 ? 表达式1 : 表达式2) 的两种用法：
// 1) 作为“右值/普通表达式”参与赋值：c = (a>b ? a : b)
// 2) 在表达式1/2都是左值(可被赋值的对象)时，整个三目表达式也可以作为左值：(a>b ? a : b) = 100
int main() {
    // 设置控制台代码页为 UTF-8，解决中文乱码问题
    SetConsoleOutputCP(65001);
    
    int a = 10;
    int b = 20;

    cout << "初始：a=" << a << ", b=" << b << '\n';

    // 用法1：取较大值赋给 c（此时 c 只是被赋了一次值）
    int c = (a > b ? a : b);
    cout << "步骤1：c = (a>b ? a : b) -> c=" << c << '\n';

    // 用法2：三目运算符当左值使用  
    // 因为 a>b 为假，所以 (a>b ? a : b) 选择的是 b，等价于：b = 100
    (a > b ? a : b) = 100;
    cout << "步骤2：(a>b ? a : b) = 100\n";

    cout << "最终：a=" << a << ", b=" << b << ", c=" << c << '\n';

    // system("pause");
    return 0;
}