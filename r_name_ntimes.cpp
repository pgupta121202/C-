#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void f_name(int i,int n){
    if(i>n){
    return ;
    }
    cout<<"Pankaj"<<endl;
    f_name(i+1,n);
}
int main(){
    int n,i;
    cin>>n;
    f_name(1,n);
    
}



