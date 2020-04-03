static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();

class Solution {
public:
    bool isHappy(int n) {
        set<int> s;
        while(n!=1){
            int z = s.size();
            n = next(n);
            s.insert(n);
            if(n != 1 && s.size() == z)
                return 0;
        }
        return 1;
    }
    
    int next(int n){
        int ans = 0;
        while(n>0){
            ans += (n%10)*(n%10);
            n /= 10;
        }
        
        return ans;
    }
};