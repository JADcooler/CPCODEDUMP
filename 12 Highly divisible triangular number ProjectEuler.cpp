#include <bits/stdc++.h>

using namespace std;

int func(int a)
{
    int c=0;
    for(int i=1;i*i<=a;i++)
    {
        if(a%i==0)
        {
            c++;
            if(a/i!=i)c++;
            
        }
        
        
    }
    return c;
}

int num(int a)
{
    return a*(a+1)/2;
}

int main()
{
  for(int i=2;i<1000000;i++) 
  {
      if(func(num(i))>=500)
      {
          cout<<num(i)<<endl;
          break;
      }
  }
  return 0;
}

