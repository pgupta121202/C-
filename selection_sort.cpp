#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main(){

    int arr[5]={2,76,4,98,3};
    for(int i=0;i<4;i++){
        int minIndex=i;
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
            swap(arr[minIndex],arr[i]);
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
