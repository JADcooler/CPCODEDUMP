#include <bits/stdc++.h>
using namespace std;


vector<vector<int>>vs;

int colsum(int a,int b)
{
    
}

int main() 
{
   vs.assign(26,vector<int>(26,0));
   
   for(int i=0;i<20;i++)
   {
       for(int j=0;j<20;j++)
       {
           int x;cin>>x;
           vs[i][j]=x;
           
       }
   }
   int maxp=1;
   for(int i=0;i<20;i++)
   {
       for(int j=0;j<20;j++)
       {
           int diag1=1;
           int diag2=1;
           int col[4]={1,1,1,1};
           
           for(int a=0;a<4;a++)
           {
               int row=1;
               for(int b=0;b<4;b++)
               {
                   row*=vs[i+a][j+b];
                   col[b]*=vs[i+a][j+b];
                   
                   if(a==b)diag1*=vs[i+a][j+b];
                   if(a+b==3)diag2*=vs[i+a][j+b];
               }
               maxp=max(maxp,row);
           }
           for(int z=0;z<4;z++)
           maxp=max(col[z],maxp);
           
           maxp=max(maxp,diag1);
           maxp=max(maxp,diag2);
       }
   }
   cout<<maxp<<endl;
   
    return 0;
}
