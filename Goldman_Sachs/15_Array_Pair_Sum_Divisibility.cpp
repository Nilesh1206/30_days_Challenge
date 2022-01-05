// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        map<int,int>mp;
        for(auto it:nums)
        {
            // int val=abs(it-k);
            mp[it%k]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            int num=nums[i]%k;
            if(num==0)
            {
            if(mp[0]&1) return 0;
            }
            else if(mp[num]!=mp[k-num])
            {
                return 0;
            }
        }
        return 1;
        // return true;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends
