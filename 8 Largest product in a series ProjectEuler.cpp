#include <bits/stdc++.h>
using namespace std;

vector<int>val;


long long int calc(int pos, int len)
{
    long long int a=1;
    for(int i=pos;i<val.size() and i<pos+len;i++)
    {
        a*=val[i];
    }
    return a;
}

int main() 
{
	string a;
	
	vector<vector<int>>grid;
	
	for(int i=0;i<20;i++)
	{
	    getline(cin,a);
	    vector<int>row;
	    for(auto i:a)
	    {
	        row.push_back(i-'0');
	        val.push_back(i-'0');
	    }
	    grid.push_back(row);
	    
	   
	}
    
    int r=13;
    long long int maxp=0;
    for(int i=0;i<val.size();i++)
    {
        long long int p=1;
        for(int j=i;j<val.size() and j<i+r;j++)
        {
            p*=val[j];
        }
        maxp=max(maxp,p);
        
    }
    
    cout<<maxp<<endl;
	
	
	return 0;
}
