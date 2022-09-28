#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{  
    int arr[5]={25,6,21,2,1};
    int temp;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            
               sort(arr,arr+5,greater<int>());
            
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
