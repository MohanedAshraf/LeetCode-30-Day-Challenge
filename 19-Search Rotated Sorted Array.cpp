static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int l=0,h=nums.size();
        h--;
        
        while(l<h){
            int mid=(l+h)/2;
            if(nums[mid]>nums[h]) l=mid+1;
            else h=mid;
        }
     
        int r=l;
        l=0;h=nums.size();
        h--;
     
        while(l<=h){
            int mid=(l+h)/2;
            int realmid=(mid+r)%nums.size();
            if(nums[realmid]==target)return realmid;
            if(nums[realmid]<target)l=mid+1;
            else h=mid-1;
        }
        return -1;
        
    }
};