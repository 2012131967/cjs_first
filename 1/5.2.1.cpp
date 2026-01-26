#include<iostream>
using namespace std;

int main(){
    int score[10];
    score[1]=100;
    score[0]=25;
    score[8]=88;
    cout<<score[8]<<endl;

    int score2[10]={10,9,8,7,6,5,4,3,2,1};
    for(int i =0;i<10;i++){
        cout<<score2[i]<<endl;
    }


    int score3[]={10,9,8,7,6,5,4,3,2,1};
    for(int i =0;i<10;i++){
        cout<<score3[i];
    }

    system("pause");
    return 0;
}