#include <iostream>

using namespace std;
int main(){
int n;
cin >> n;
cout << "Enter the number of term upto which fib is to be found"<<endl;
int t1=0,t2=1,nextterm=0;
for(int i=1;i<=n;i++){
    if(i==1){
        cout<<t1<<",";
        continue;
    }
    if(i==2){
        cout<<t2<<",";
        continue;
    }
    nextterm=t1+t2;
    t1=t2;
    t2=nextterm;
    cout<<nextterm<<",";
    
    
}
     return 0;
    }
