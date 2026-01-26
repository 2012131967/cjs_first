#include<iostream>
using namespace std;
int main(){

    int arr[2][3]={
        {1,2,3},
        {4,5,6}
    };
    

    cout<<"二维数据的大小"<<sizeof(arr)<<endl;
    cout<<"第一行:"<<sizeof(arr[0])<<endl;
    cout<<"第一个元素："<<sizeof(arr[0][0])<<endl;
    
    
    
    system("pause");

    return 0;
}