#include <bits/stdc++.h>
using namespace std;


int main() {
	vector<int>nums(1000000,0);
	vector<int>primes;
	
	for(int i=2;i*i<1000000;i++)
	{
	    if(nums[i]==0)
	    for(int j=i*i;j<1000000;j+=i)
	    {
	        nums[j]=1;
	    }
	}
	for(int i=2;i<1000000;i++)
	{
	    if(!nums[i])primes.push_back(i);
	}
	cout<<primes[10001-1];
	return 0;
}
