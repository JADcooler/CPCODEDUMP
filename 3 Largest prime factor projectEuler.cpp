#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int a=600851475143;
	long long int b = sqrt(a);
    vector<int>	dp(b+1,0);
    
    long long int maxfp=0;
    for(long long int i=2;i<=b;i++)
    {
        if(dp[i]==0)
        {
            if(a%i==0)
            maxfp=max(maxfp,i);
            for(long long int j=i*i;j<b;j+=i)
            {
                dp[j]=1;
            }
        }
    }
    cout<<maxfp<<endl;
	
	return 0;
}

