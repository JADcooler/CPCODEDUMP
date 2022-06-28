class Solution {
public:
    int maxProduct(vector<int>& a) 
    {
        int maxsum=a[0];
        int sum1=a[0];
        int sum2=a[0];
        
        cout<<"s1 s2"<<endl;
        for(int i=1;i<a.size();i++)
        {
            int t1=a[i];
            int t2=sum1*a[i];
            int t3=sum2*a[i];
            
            sum1=max(t1,max(t2,t3));
            sum2=min(t1,min(t2,t3));
                        
            maxsum=max(maxsum,sum1);
            //cout<<sum1<<" "<<sum2<<endl;
        }

               
        return maxsum;
        
    }
};
