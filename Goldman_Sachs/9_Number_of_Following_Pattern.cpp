// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        string ans="1";
        int n=S.length();
        int num=2;
        for(int i=0;i<n;i++)
        {
            ans.push_back(num+48);
            num++;
        }
        int i=0;
        int j=1;
        int k=0;
        while(k<n)
        {
            if(S[k]=='I')
            {
                reverse(ans.begin()+i,ans.begin()+j);
                i=j;
            }
            j++;
            k++;
        }
        if(S.back()=='D')
        {
            reverse(ans.begin()+i,ans.begin()+j);
        }
        return ans;
    }
};
// Time Complexity :O(n)
// Space Complexity :O(1)


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends
