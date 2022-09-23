#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int key;
    cin>>key;
    int index;
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            index=i;
            break;
        }
           }
    cout<<"element is found at index:"<<index<<endl;
    return 0;
}
