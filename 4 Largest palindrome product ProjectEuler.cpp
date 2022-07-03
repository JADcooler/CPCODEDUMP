#include <bits/stdc++.h>
using namespace std;

int pal(int a)
{
    int b=a;
    int c=0;
    while(b)
    {
        c=c*10+b%10;
        b/=10;
    }
    
    if(c==a)
    return 1;
    else return 0;
}

int main() {
	// your code goes here
	int m=0,mi=0,mj=0;
	for(int i=100;i<=999;i++)
	{
	    for(int j=100;j<=999;j++)
	    {
	        if(pal(i*j) and i*j>m)
	        {
	            m=i*j;
	            mi=i;
	            mj=j;
	        }
	    }
	}
	cout<<m<<endl;
	cout<<mi<<endl;
	cout<<mj<<endl;
	
	return 0;
}

