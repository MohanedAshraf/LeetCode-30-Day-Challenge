static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size()!=1){
            
             int n = stones.size();
             sort(stones.begin() , stones.end()); 
             stones[n-2]= stones[n-1] - stones[n-2] ;
             stones.pop_back();
        
            
          }
        return stones[0];
    }
};