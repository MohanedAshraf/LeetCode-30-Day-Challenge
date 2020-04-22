static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();

class Solution {
public:
    int a[30000];
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        a[0]=0;
        
        for(int i =1;i<=n ;i++)
            a[i]=a[i-1]+nums[i-1];
    
        int ans = 0;
        for(int i=0 ; i<=n ; i++){
            for(int j=i+1; j<=n ;j++){
                if(a[j] - a[i] == k)
                    ans++;
            }
        }
        
        return ans;
    }
};