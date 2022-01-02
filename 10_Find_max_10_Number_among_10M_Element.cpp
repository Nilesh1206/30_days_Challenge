#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long 
#define mod 1000000007
using namespace std;
#define endl '\n'


int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.out", "w", stdout);
#endif
    IOS;
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        pq.push(a);
        if(pq.size()>10)
        {
            pq.pop();
        }
    }
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}
// Time Complexity :O(n) (nlogn is negliagable because comparision is between only 10 elements)
// Space Complexity :O(1) (because, we are going to store only 10 elements )
