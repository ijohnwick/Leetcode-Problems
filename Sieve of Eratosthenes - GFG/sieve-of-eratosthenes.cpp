//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int n)
    {
        // Write Your Code here
        //   memset(isprime,true,sizeof(isprime));
    vector<bool>isprime(n+1,true);
    vector<int>ans;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(isprime[i])
        {
            isprime[i]=true;
            // ans.push_back(i);
            for(int j=i*i;j<=n;j+=i)
            {
                isprime[j]=false;
            }
        }
    }
     for(int i=2;i<n+1;i++)
    {
        if(isprime[i])
        {
           ans.push_back(i);
        }
    }
    return ans;
    
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends