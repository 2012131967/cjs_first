#include<iostream>
using namespace std;

main(){
    int score = 0;
    cout<<"请输入您的分数（1-10）："<<endl;
    cin>>score;

    switch(score){
        case 9:
        case 10:
        cout<<"9-10"<<endl;
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        cout<<"5-8"<<endl;
        break;
    }

    system("pause");
    return 0;
}