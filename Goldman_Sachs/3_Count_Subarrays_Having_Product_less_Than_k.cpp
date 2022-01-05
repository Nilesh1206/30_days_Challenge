// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& arr, int n, long long k) {
        if(k<=1)
        {
            return 0;
        }
        int ct=0;
        long long int prod=1;
        int i=0,r=0;
        while(r<n)
        {
            prod*=arr[r];
            while(prod>=k)
            {
                prod/=arr[i];
                i++;
            }
            ct+=r-i+1;
            r++;
        }
        return ct;
    }
};
// Time Complexity :O(n)
// Space Complexity: O(1)

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends
