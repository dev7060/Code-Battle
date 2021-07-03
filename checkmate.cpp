//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
    public:
    bool checkmate(int a, int b, int x, int y){
        // code here
        if(a==x){
            return 0;
        }
        if(b==y){
            return 0;
        }
        if(a==b && x==y){
            return 0;
        }
        if(abs(a-b)==abs(x-y)){
            return 0;
        }
        return 1;
    }
};

// { Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        Solution obj;
        cout << obj.checkmate(a, b, x, y) << "\n";
    }
}
  // } Driver Code Ends
