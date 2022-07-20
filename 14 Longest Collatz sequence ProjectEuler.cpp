#include <bits/stdc++.h>
using namespace std;

vector<long long int >dp;

long long int  func(long long int  x)
{
    if(x==1)return 0;
    
    if(x<=1000000)
    {
        if(dp[x]!=-1)
            return dp[x];   
    }
    
    long long int  s= ( !(x%2) ? 1 + func(x/2): 1+ func(3*x + 1) ); 
    if(x>=1000000) return s;
    else return dp[x] = s;
}


 int  main() {
	// your code goes here
	dp.assign(1000001,-1);
	
	long long int  max_chain=0;
	
	long long int  max_num=0;
	dp[1]=0;
	for(long long int  x=2;x<1000001;x++)
	{
	    if(dp[x]==-1)
	    {
	        max_chain = max( func(x) , max_chain);
	        max_num = (max_chain == dp[x] ? x : max_num);
	    }
	    
	}

	
	cout<<max_num<<" has max "<<max_chain<<endl;
	return 0;
}
