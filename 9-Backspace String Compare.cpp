static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();

class Solution {
public:
    bool backspaceCompare(string S, string T) {
    
        int x  = solve(S);
        int y  = solve(T);
        
        return x==y &&  equal(S.begin(), S.begin() + x, T.begin());
        
    }
    
    int solve(string& s){
      int c = 0;
        for (int i = 0; i < s.size(); i++) {
                if (s[i] == '#') 
                c = max(0, c-1);
                
                else 
                s[c++] = s[i];
                
        }
      return c;
    }
};