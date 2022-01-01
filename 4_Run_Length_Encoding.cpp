// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
 string ans="";
 int ct=0;
 int i=0;
 int n=src.length();
 while(i<n)
 {
     char ch=src[i];
     while(i<n && src[i]==ch)
     {
         i++;
         ct++;
     }
     ans.push_back(ch);
     ans.push_back((ct+'0'));
     ct=0;
 }
 return ans;
}     
 
// Time Complexity :O(n)
// Space Complexity :O(n)
