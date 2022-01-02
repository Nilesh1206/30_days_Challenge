// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        // code here
        // encoding rule is k[encoded_string]
        stack<string> chars; // stack for keeping trakc of the already decoded string
        stack<int> nums; // stack for k
        string res;
        int num = 0;
        
        //Iterate through every single character in s -->o(n); n is size of s
        for(char c : s) {
            /*
            There are 4 possible states that we can see
            (1) number --> use built in isdigit(char)
            (2) alphabet --> use built in isaplha(char)
                >> Just add the character to the result if we see a letter
            (3) '[' -->just compare with that char
            (4) ']' --> just compare with that char
            */
            if(isdigit(c)) {
                num = num*10 + (c-'0');  // coverts the string number to integer
                // Note you need to handle cases like 22[a], this is just using increasing the place value by one and then adding the single digit to the ones place value
            }
            else if(isalpha(c)) { // check if characteris a letter
                res.push_back(c);            
            }
            else if(c == '[') { // From the encoding rule, we are guaranteeda number
                // prior to '[' and an encoded_string after '['
                // Hence we can push all number and encoded_string to their stacks
                
                chars.push(res); // put the encoded_string to stack
                nums.push(num); // put the number into the stack
                
                // reset back to default 
                res = "";
                num = 0;
            }
            else if(c == ']') {
                // every time we see ']' we are guaranteed to have finished a set of 
                // k[encoded_string]. Hence we can start processing the stacks emptying
                // them and moving it to res. 
                
                string tmp = res; 
                for(int i = 0; i < nums.top()-1; ++i) {
                    res += tmp;
                }
                res = chars.top() + res;
                chars.pop(); 
                nums.pop();
            }
        }
        return res;
    }
};
// Time Complexity :O(n)
// Space Complexity:O(n)

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
