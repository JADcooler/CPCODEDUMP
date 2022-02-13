class Solution {
public:
    vector<int> searchRange(vector<int>& v, int target) {
        vector<int>ans(2,-1);
        
        if(!v.size())return ans;
        
        int l=0,r=v.size()-1;
        int firstpos=-1;
        
        
        while(r>=l)
        {
            int m = l + (r-l)/2;
            
            if(m<0 or m>=v.size())break;
            
            if(v[m]>target)
            {
                r=m-1;
                continue;
            }
            
            else if(v[m]==target)
            {
                firstpos=m;                
                r=m-1;
            }         
            
            else
            {
              l=m+1;  
            }        
            
                
        } 
        int lastpos=-1;
        
        l=firstpos,r=v.size()-1;
        while(r>=l)
        {
            int m = l + (r-l)/2;
            
            if(m<0 or m>=v.size())break;
            
            if(v[m]>target)
            {
                r=m-1;
                continue;
            }
            
            else if(v[m]==target)
            {
                lastpos=m;                
                l=m+1;
            }         
            
            else
            {
              l=m+1;  
            }        
            
                
        }
        
        
        ans[0]=firstpos;
        
        ans[1]=lastpos;
        
        return ans;
        
    }
};