#include<iostream>
using namespace std;
int main(){

    int temp = 0;
    int arr[9] = { 4,2,8,0,5,7,1,3,9 };
    for(int i = 0; i<9-1;i++){
        for(int j = 0;j
            <9-1-i;j++){
            if(arr[j+1]>arr[j]){

                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    
    for(int n =0;n<9;n++){
        cout<<arr[n]<<" ";
    }
    
    
    
    
    system("pause");

    return 0;
}