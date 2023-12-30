#include<bits/stdc++.h>
// using namespace std;
typedef long long ll;
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define fs(i,n) for(int i = 0;i<n;i++)
#define fb(i,n) for(int i = n;i>=0;i--)
using namespace std;

void tests(){
    int n;
    string s;
    cin>>n>>s;

    string ans;
    for(int i =n-1;i>=0; ){
        if(s[i]=='a' || s[i]=='e'){
            for(int j = i;j>=i-1;j--){
                ans +=s[j];
            }
            i -=2;
        }
        else{
            for(int j = i;j>=i-2;j--){
                ans +=s[j];
            }
            i -=3;
        }
        ans += '.';
    }
    ans.pop_back();
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
}

int main(){


    int t;
    cin>>t;

    while(t--){
        tests();
    }
    
    
}