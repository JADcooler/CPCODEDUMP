#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    
    vector<int>dp(31);
    for(int i=2;i*i<=30;i++)
    {
        if(dp[i]==0)
        for(int j=i*i;j<=30;j+=i)
        {
            dp[j]=1;
        }
    }
    //for(int i=0;i<30;i++)cout<<i<<":"<<dp[i]<<endl;
    
    int p=1;
    cout<<"enter input, 10 or 20\n";;
    int inp;
    cin>>inp;
    
    for(int i=2;i<=inp;i++)
    {
        if(!dp[i])
        {
            p*=pow(i,floor(log(inp)/log(i)));
        }
    }
    cout<<p<<endl;
    
	return 0;
}

