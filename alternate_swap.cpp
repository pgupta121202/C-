#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void swap_alt(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }

}

int main(){
    int even[8]={2,5,6,7,8,1,3,55};
    int odd[5]={22,55,78,98,56};
    swap_alt(even,8);
    printArray(even,8);
    cout<<endl;
    swap_alt(odd,5);
    printArray(odd,5);
}
