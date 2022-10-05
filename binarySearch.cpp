#include <iostream>

using namespace std;
int binarySearch(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    
    while(s<=e){
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=s+(e-s)/2;

}
return -1;
}
int main()
{
    int even[6]={12,34,45,56,87,908};
    int odd[5]={1,3,5,67,98};
    int index=binarySearch(odd,5,67);
    cout<<"The element is found at index  "  <<  index   <<endl; 
    return 0;
}
