// #include<bits/stdc++.h>
// // using namespace std;
// typedef long long ll;
// #define yes cout<<"YES\n";
// #define no cout<<"NO\n";
// #define fs(i,n) for(int i = 0;i<n;i++)
// #define fb(i,n) for(int i = n;i>=0;i--)
// using namespace std;

// void tests(){
//         int n;
//         cin>>n;
//         vector<vector<char>> v(n, vector<char>(n));
//     fs(i,n){
//        fs(j,n){
//         cin>>v[i][j];
//        } 
//     }
//     int a = 0,b = 0,c = 0;
//     fs(i,n){
//         fs(j,n){
//             if(v[i][j] == 'A') a++;
//             else if(v[i][j]=='B') b++;
//             else c++;
//         }
//     //code
//     }
//     if(a==0) cout<<"A"<<endl;
//     if (b==0) cout<<"B"<<endl;
//     if (c==0) cout<<"C"<<endl;
// }
// int main(){


//     ios_base::sync_with_stdio(false);

//     tests();
    
// }
// #include <iostream>
// #include <vector>

// using namespace std;

// void findMissingLetter(const vector<vector<char>>& latinSquare) {
//     int n = latinSquare.size();
//     int aCount = 0, bCount = 0, cCount = 0;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (latinSquare[i][j] == 'A') {
//                 aCount++;
//             } else if (latinSquare[i][j] == 'B') {
//                 bCount++;
//             } else if (latinSquare[i][j] == 'C') {
//                 cCount++;
//             }
//         }
//     }

//     if (aCount < n) {
//         cout << "Missing letter: A" << endl;
//     } else if (bCount < n) {
//         cout << "Missing letter: B" << endl;
//     } else if (cCount < n) {
//         cout << "Missing letter: C" << endl;
//     } else {
//         cout << "Error: Cannot find missing letter in provided Latin square" << endl;
//     }
// }

// int main() {
//     int numTestCases;
//     cin >> numTestCases;

//     for (int i = 0; i < numTestCases; i++) {
//         int n;
//         cin >> n;

//         vector<vector<char>> latinSquare(n, vector<char>(n));
//         for (int j = 0; j < n; j++) {
//             for (int k = 0; k < n; k++) {
//                 cin >> latinSquare[j][k];
//             }
//         }

//         findMissingLetter(latinSquare);
//     }

//     return 0;
// }
#include<bits/stdc++.h>
// using namespace std;
typedef long long ll;
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define fs(i,n) for(int i = 0;i<n;i++)
#define fb(i,n) for(int i = n;i>=0;i--)
using namespace std;

void tests(){
    
        int t;
        cin>>t;
        while(t--){
            string k,l;
            int g=3;
            for(int i=0;i<g;i++){
                string s;
                cin>>s;


                int a = 0,b=0,c=0,cnt = 0;
                for(int i = 0;i<s.size();i++){
                    if(s[i]=='A') a = 1;
                    else if(s[i]=='B') b = 1;
                    else if(s[i]=='C') c = 1;
                }
                if(a==0) cout<<"A"<<endl;
                if(b==0) cout<<"B"<<endl;
                if(c==0) cout<<"C"<<endl;
            }
        }
    //code
}

int main(){


    ios_base::sync_with_stdio(false);

    tests();
    
}