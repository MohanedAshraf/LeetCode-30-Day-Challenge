static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size() , a[2*n+1] , c=0 , ans=0;
        memset(a, -2 , sizeof(a)); 
        a[n]=-1;
        for(int i =0;i < n ; i++){
           c += (nums[i] == 0 ? -1 : 1);
                if(a[c + n] >= -1)
                    ans = max(ans , i-a[c+n]);
                else 
                    a[c+n] = i;
                
              
        }
        
        return ans ;
    
        
    }
};