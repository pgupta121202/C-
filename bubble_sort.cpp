#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main(){

    int arr[5]={2,76,4,98,3};
    for(int i=0;i<4;i++){
        for(int j=0;j<5-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
