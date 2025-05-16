
//Linear search
#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key=10;
    int final;
    int size1=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size1;i++){
        if (key==arr[i]){
            final=arr[i];
        }

    }
    cout<<"Key found"<<arr[i]<endl;
    return 0;
}

