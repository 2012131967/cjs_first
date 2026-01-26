#include<iostream>
using namespace std;
main(){
    for(int i = 0 ;i<100;i++){
        if(i%2==0){
            continue;
        }
        cout<<i<<" ";
    }
    system("pause");
    return 0;
}