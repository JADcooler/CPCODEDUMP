#include <bits/stdc++.h>
using namespace std;


int main() 
{
    
    for(int i=1000;i>=0;i--)
    {
        int r=1000-i;
        
        for(int j=0;j<=r;j++)
        {
            for(int k=0;k<=r;k++)
            {
                if(i+j+k==1000 and i*i+j*j==k*k and i<j and j<k)
                {
                    cout<<i<<" "<<j<<" "<<k<<endl;return 0;
                }
            }
        }
    }
	return 0;
}
