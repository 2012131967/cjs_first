#include<iostream>
using namespace std;

int main(){
    cout<<1<<endl;
    goto FLAG;
    cout << 2<< endl;

    FLAG :
    cout<<3<<endl;
    system("pause");
    return 0;
}