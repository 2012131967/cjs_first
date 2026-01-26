#include<iostream>
using namespace std;
#include <ctime>
#include <cstdlib>    // rand(), srand()
main(){
    srand(time(0));

    int num = rand()% 100 + 1;
    int a=0;
    while(a!=num){
            cout<<"请输入一个1-100的数字："<<endl;
            cin>>a;
            if(a>num){
                cout<<"猜大了"<<endl;
            }
            if(a<num){
                cout<<"猜小了"<<endl;
            }
    }
    cout<<"猜对了"<<endl;
    system("pause");
    return 0 ;
}