
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
    public:
    bool checkmate(int a, int b, int x, int y){
        // code here
        if(a==4 && b==4){
            if(x==1 && y==7){
                return 0;
            }
            if(x==7 && y==1){
                return 0;
            }
        }
        if(x==4 && y==4){
            if(a==1 && b==7){
                return 0;
            }
            if(a==7 && b==1){
                return 0;
            }
        }
        if(a==b && x==y){
            return 0;
        }
        if((a==x) || (b==y)){
            return 0;
        }
        if(abs(a-b)==abs(x-y)){
            if(abs(a-x) == abs(b-y)){
                return 0;
            }
            
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
