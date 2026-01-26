#include<iostream>
#include<windows.h>
// #include<locale>
using namespace std;

/*
 * 程序目的：演示指针的基本使用和 sizeof 操作符在指针上的应用
 * 
 * 知识点：
 * 1. 指针的定义和初始化：int *p; p = &a;
 * 2. 指针的解引用：*p 表示访问指针所指向的变量的值
 * 3. sizeof 操作符：返回数据类型或变量占用的字节数
 * 4. 指针的大小：在同一个系统中，所有类型的指针大小都相同（通常是 4 或 8 字节）
 */
int main(){
    // ========== 解决中文乱码 ==========
    // 设置控制台输出代码页为 UTF-8，解决中文乱码问题
    SetConsoleOutputCP(65001);  // 65001 是 UTF-8 的代码页编号
    
    // ========== 第一部分：指针的基本使用 ==========
    int a = 10;        // 定义一个整型变量 a，初始值为 10
    
    int *p;            // 定义一个指向 int 类型的指针变量 p（此时 p 还没有指向任何变量）
    
    p = &a;            // 将变量 a 的地址赋给指针 p（&a 表示取变量 a 的地址）
                       // 现在 p 指向变量 a
    
    cout << "========== 指针的基本操作 ==========" << endl;
    cout << "变量 a 的值：" << a << endl;              // 直接访问变量 a 的值
    cout << "通过指针访问 a 的值（*p）：" << *p << endl; // *p 表示解引用，访问 p 指向的变量的值
    cout << "变量 a 的地址（&a）：" << &a << endl;     // &a 表示变量 a 的地址
    cout << "指针 p 的值（p）：" << p << endl;         // p 的值就是变量 a 的地址
    cout << "指针 p 的地址（&p）：" << &p << endl;     // &p 表示指针变量 p 本身的地址
    
    // ========== 第二部分：sizeof 操作符在指针上的应用 ==========
    cout << "\n========== sizeof 操作符在指针上的应用 ==========" << endl;
    cout << "说明：sizeof 返回的是数据类型或变量占用的字节数" << endl;
    cout << "     指针的大小与指针指向的数据类型无关，只与系统架构有关" << endl;
    cout << "     32位系统：指针通常是 4 字节" << endl;
    cout << "     64位系统：指针通常是 8 字节" << endl;
    cout << endl;
    
    cout << "sizeof(p) = " << sizeof(p) << " 字节" << endl;
    cout << "         （指针变量 p 本身占用的内存大小）" << endl;
    cout << endl;
    
    cout << "各种类型指针的大小（都相同）：" << endl;
    cout << "sizeof(char *)      = " << sizeof(char *) << " 字节" << endl;
    cout << "sizeof(int *)       = " << sizeof(int *) << " 字节" << endl;
    cout << "sizeof(float *)     = " << sizeof(float *) << " 字节" << endl;
    cout << "sizeof(double *)    = " << sizeof(double *) << " 字节" << endl;
    cout << "sizeof(long *)      = " << sizeof(long *) << " 字节" << endl;
    cout << "sizeof(long long *) = " << sizeof(long long *) << " 字节" << endl;
    cout << "sizeof(short *)     = " << sizeof(short *) << " 字节" << endl;
    cout << "sizeof(bool *)      = " << sizeof(bool *) << " 字节" << endl;
    cout << "sizeof(void *)      = " << sizeof(void *) << " 字节" << endl;
    cout << "sizeof(wchar_t *)   = " << sizeof(wchar_t *) << " 字节" << endl;
    cout << "sizeof(char16_t *)  = " << sizeof(char16_t *) << " 字节" << endl;
    cout << "sizeof(char32_t *)  = " << sizeof(char32_t *) << " 字节" << endl;
    
    cout << "\n========== 总结 ==========" << endl;
    cout << "1. 指针变量本身的大小是固定的，与指向的数据类型无关" << endl;
    cout << "2. 指针存储的是地址，地址的大小由系统架构决定" << endl;
    cout << "3. 不同类型的指针大小相同，但指向的数据类型大小可能不同" << endl;
    
    system("pause");
    return 0;
}