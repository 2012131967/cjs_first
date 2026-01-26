#include<iostream>
using namespace std;

main(){
    for(int i =1;i<=100;i++){
        if(i%10==7||(i/10)%10==7||i%7==0){
            cout<<i<<endl;

            cout<<"敲桌子"<<endl;
        }
    }



    system("pause");
    return 0;
}