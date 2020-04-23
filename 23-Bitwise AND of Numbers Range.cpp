static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();

class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int c =0;
        while(n!=m){
            n/=2;
            m/=2;
            c++;
        }
            

        
        return n << c ;
        
    }
};