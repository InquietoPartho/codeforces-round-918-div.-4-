#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
    int a ,b,c;
    cin>>a>>b>>c;

    if(a==c){
        cout<<b<<endl;
    }
    else if(b==c){
        cout<<a<<endl;
    }
    else{
        cout<<c<<endl;
    }
   } 
}