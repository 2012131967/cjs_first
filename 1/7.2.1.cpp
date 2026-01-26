#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p;
    p=&a;
    cout<<"a的值："<<a<<endl;   
    cout<<"p的值："<<p<<endl;
    cout<<"p的地址："<<&p<<endl;
    cout<<"*p："<<*p<<endl;
    system("pause");
    return 0;
}