#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   ll t;
   cin>>t;
   while(t--){
    ll n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    ll cnt = 0;
    for(int i = 0;i<n;i++){
        cnt = cnt+arr[i];
    }
    // cout<<cnt;
    ll x = sqrt(cnt);
    if(x*x==cnt){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
   }
   
}