#include "swap.h"

void swap(int a,int b){

    cout<<"数字1："<<a<<endl;
    cout<<"num2:"<<b<<endl;
    int temp =a;
    a=b;
    b=temp;

    cout<<"数字1："<<a<<endl;
    cout<<"num2:"<<b<<endl;

}


int main(){

    int a=10;
    int b=20;

    swap(a,b);

    system("pause");
    return 0;
}