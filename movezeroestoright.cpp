/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{    
    int n;
    cin>>n;
    int arr[n]={};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int nonzero=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[nonzero]);
            nonzero++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
