#include <bits/stdc++.h>
using namespace std;


int main() 
{
    
    vector<int>nums(2000001,0);
    
    int n=nums.size();
    for(int i=2;i*i<n;i++)
    {
        for(int j=i*i;j<n;j+=i)
        {
            nums[j]=1;
        }
    }
    long long int a=0;
    for(int i=2;i<n;i++)
    {
        a+= nums[i]? 0: i;
    }
    cout<<a<<endl;
    
    return 0;
}
