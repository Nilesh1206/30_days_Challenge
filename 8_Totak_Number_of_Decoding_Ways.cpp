// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    #define mod 1000000007
	public:
		int CountWays(string str){
		    // Code here
		    
		    int n=str.length();
		    if(str.empty() || str.front()=='0')
		    {
		        return 0;
		    }
		    // it will keep track eye on the last and the last of last
		    long long int r1=1,r2=1;
		    for(int i=1;i<n;i++)
		    {
		        // no more way to decode it
		        if(str[i]=='0')
		        {
		            r1=0;
		        }
		        if(str[i-1]=='1' || str[i-1]=='2' && str[i]<='6')
		        {
		            r1=(r1+r2)%mod;
		            r2=(r1-r2)%mod;
		        }
		        else
		        {
		            r2=r1;
		        }
		    }
		    return r1%mod;
		  //int n=str.size();
    //         int dp[n+1];
    //         memset(dp,0,sizeof(dp));
    //         dp[n]=1;
    //         for(int i=n-1;i>=0;i--)
    //         {
    //             // Single digit
    //             if(str[i]!='0')
    //             {
    //                 dp[i]=(dp[1]%mod+dp[i+1]%mod)%mod;
    //             }
    //             if(i+1<n && (str[i]=='1' || str[i]=='2' && str[i+1]<='6')) // two digits
    //             {
    //                 dp[i]=(dp[i]%mod+dp[i+2]%mod)%mod;
    //             }
    //         }
    //         return dp[0]%mod;
		}

};
// Time Complexity :O(n)
// Spac Complexity :O(1)

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
