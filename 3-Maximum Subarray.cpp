static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
       return divideAndConquer(nums, 0, nums.size()-1);
  
    }
    
  

    int maxx(int a, int b, int c) { return max(max(a, b), c); } 
  

    int halfsMax(vector<int>& nums, int l, int m, int h) {
        
        int sum = 0; 
        int left = INT_MIN; 
        for (int i = m; i >= l; i--) {
            sum += nums[i]; 
            if (sum > left) 
              left = sum; 
        } 
        sum = 0; 
        int right = INT_MIN; 
        for (int i = m+1; i <= h; i++){
            sum += nums[i]; 
            if (sum > right) 
              right = sum; 
        } 

        return left + right ; 
    } 


    int divideAndConquer(vector<int>& nums, int l, int h) {
    
       if (l == h) 
         return nums[l]; 

       int m = (l + h)/2;
       return maxx(divideAndConquer(nums, l, m), divideAndConquer(nums, m+1, h),  halfsMax(nums, l, m, h)); 
    } 
};