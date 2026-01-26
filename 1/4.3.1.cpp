#include<iostream>
using namespace std;
main(){
    cout << "选择："<<endl;
    cout << "1.普通"<<endl;
    cout << "2.中等"<<endl;
    cout << "3.困难"<<endl;
    int num = 0;
    cin>>num;
    switch(num){
        case 1:
        cout<<"ku==pt"<<endl;
        break;
        case 2:
        cout<<"zd"<<endl;
        break;
        case 3:
        cout<<"kn"<<endl;
        break;
    }
    system("pause");
    return 0;
}