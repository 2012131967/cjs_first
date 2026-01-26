#include<iostream>
using namespace std;
main(){
    int score = 0;
    cout<<"请输入您的分数："<<endl;
    cin>>score;
    if(score>=650){
        cout<<"恭喜您考上了985"<<endl;
    }
    else if(score>=500 && score<650){
        cout<<"1ben"<<endl;
    }
    else{
        cout<<"wandan"<<endl;
    }

    system("pause");
    return 0;
}