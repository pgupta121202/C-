#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,5,6,5,1};
    int ans=0;
    for(int i=0;i<5;i++){
        ans=ans^arr[i];
    }
    cout<<ans<<endl;
    return 0;
}
