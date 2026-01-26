#include<iostream>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"数组的总内存空间："<<sizeof(arr)<<endl;
    cout<<"数组首地址的内存空间："<<sizeof(arr[1])<<endl;
    cout<<"数组的元素数："<<sizeof(arr)/sizeof(arr[1])<<endl;

    cout<<"数组首地址为："<<(long long)arr<<endl;
    cout<<"数组第一个元素的地址为："<<(long long)&arr[0]<<endl;


    system("pause");
    return 0;
}