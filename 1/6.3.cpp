#include<iostream>
#include<string>
using namespace std;


int add (int num1,int num2){
    int sum = num1+num2;
     return sum;
}
    

int main(){


    int a =10;
    int b =20;
    int c = add (60,b);
    cout<<"总和"<<c<<endl;
    
    system("pause");

    return 0;
}