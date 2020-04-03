static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();

class Solution {
public:
     
    int singleNumber(vector<int>& nums) {
        map<int, int> a;
       for(int i=0; i<nums.size() ;i++){
               a[nums[i]]++;
       }
        int x=0;
      for(int i=0; i<nums.size() ;i++){
           if(a[nums[i]] != 2){
               x=nums[i];
               break;
           }
       }
        return x ;
    }
};