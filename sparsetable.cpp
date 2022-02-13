#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<pair<int,int>> vpp;
typedef pair<int,int> coord;
typedef long long ll;
#define loopfor(m) for(int i=0;i<m;++i)
#define loopfrom(a,b) for(int i=a;i<b;++i)
#define p(x) push_back(x)
void print(vi a)
{
    for(int i=0;i<a.size();++i)
    {
        cout<<a[i]<<" ";
    }
	cout<<endl;
}

void printvpp(vpp a)
{
    for(int i=0;i<a.size();++i)
    {
        cout<<a[i].first<<','<<a[i].second<<" ";
    }
    cout<<endl;
}

int ninput(vector<int>&v)
{
    int n;cin>>n;
    loopfor(n)
    {
        int x;cin>>x;
        v.push_back(x);
    }
    return n;
}

int main() 
{
   //code here
    vi v;
    int n = ninput(v);
       
    vector<vector<int>>minn(n,vector<int>(17,INT_MAX));   
    
    //preprocessing
    for(int i=0;i<n;i++)
    {
        minn[i][0]=v[i];
    }
    
    //for each j, minn[i][j] covers 2^j elements
    for(int j=1;j<=17;j++)
    for(int i=0;i + (1<<j) - 1  <n;i++)
    {
        minn[i][j]=min(minn[i][j-1],minn[i+(1<<j-1)][j-1]);
    }
    
    int q;cin>>q;
    for(int i=0;i<q;i++)
    {
        int a,b;cin>>a>>b;
        
        int diff=b-a;
        if(diff==0)cout<<minn[a][0]<<endl;
        else
        {
        int x = floor( (log(diff)/log(2)) );
        int second= b - (1<<x) + 1;
        cout<<min(minn[a][x],minn[second][x])<<endl;
        }
        
        
    }
    
    
    return 0;
}

