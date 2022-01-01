// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
    // vector<int>res;
    // Solution()
    // {
    //     for(int i=1;i<=10000;i++)
    //     {
    //         if(i<=6)
    //         {
    //             res.push_back(i);
    //             visited[i]=true;
    //         }
    //         else if( visited[i]==false && (i%2==0) || (i%3==0) || (i%5==0))
    //         {
    //             res.push_back(i);
    //             visited[i]=true;
    //             int temp=i+i;
    //             while(temp<=1000)
    //             {
                    
    //             }
    //         }
    //     }
        
    // }
    
    
    // int mx(int a,int b)
    // {
    //     while(a%b==0)
    //     {
    //         a/=b;
    //     }
    //     return a;
    // }
    // int isUgl(int n)
    // {
    //     n=mx(n,2);
    //     n=mx(n,3);
    //     n=mx(n,5);
    //     return n==1?1:0;
    // }
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    
	   // Method :1  Brute Force
	   
	   // int i=1;
	   // int count=1;
	   // while(n>count)
	   // {
	   //     i++;
	   //     if(isUgl(i))
	   //     {
	   //         count++;
	   //         //i++;
	   //     }
	   // }
	   // return i;
	   
	   
	   // Method : 2 DP
	   
	   
	   //ull ugly[n];
	   //ull i2=0,i3=0,i5=0;
	   //ull mul2=2;
	   //ull mul3=3;
	   //ull mul5=5;
	   //ull ugl=1;
	   //ugly[0]=1;
	   //for(int i=1;i<n;i++)
	   //{
	   //    ugl=min({mul2,mul3,mul5});
	   //    ugly[i]=ugl;
	   //    if(ugl==mul2)
	   //    {
	   //        i2+=1;
	   //        mul2=ugly[i2]*2;
	   //    }
	   //    if(ugl==mul3)
	   //    {
	   //        i3+=1;
	   //        mul3=ugly[i3]*3;
	   //    }
	   //    if(ugl==mul5)
	   //    {
	   //        i5+=1;
	   //        mul5=ugly[i5]*5;
	   //    }
	   //}
	   //return ugl;
	   
	   
	   
	   
	   // Method 3:  STL 
	   if(n==1 or n==2 or n==3 or n==4 or n==5)
	   {
	       return n;
	   }
	   set<ull>st;
	   st.insert(1);
	   n--;
	   while(n)
	   {
	       auto it=st.begin();
	       ull x=*it;
	       st.erase(it);
	       st.insert(x*2);
	       st.insert(x*3);
	       st.insert(x*5);
	       n--;
	   }
	   return *st.begin();
	   
	   
	}
};
// Time Complexity :O(n)
// Space Complexity :O(n)

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
