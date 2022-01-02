#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];
    int x=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        x^=arr[i];
        x^=(i+1);
    }
    int mask=(x&-x);
    int a=0;
    int b=0;
    for(int i=0;i<n;i++)
    {
        if((mask&arr[i])==0)
        {
            a^=arr[i];
        }
        else
        {
            b^=arr[i];
        }
    }
    for(int i=1;i<=n;i++)
    {
        if((mask&i)==0)
        {
            a^=i;
        }
        else
        {
            b^=i;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            cout<<"Missing Number -> "<<b<<endl;
            cout<<"Repeating Number -> "<<a<<endl;
            break;
        }
        else if(arr[i]==b)
        {
            cout<<"Missing Number -> "<<a<<endl;
            cout<<"Repeating Number -> "<<b<<endl;
            break;
        }
    }
    return 0;
}
// Time Complexity :O(n)
// Space Complexity :O(1)
