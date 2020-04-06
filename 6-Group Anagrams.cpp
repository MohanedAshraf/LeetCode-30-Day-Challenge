static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
    
        vector<vector<string>> v;
        unordered_map<string, int> m;
        
        for (int i =0 ; i<strs.size() ; i++){
            string a = strs[i];
            sort(strs[i].begin() , strs[i].end());
            
            if(m.find(strs[i]) == m.end()){
                vector<string> x(1 , a);
                v.push_back(x);
                m[strs[i]]= (int)v.size()-1;
            }
            else{
                v[m[strs[i]]].push_back(a);
            }
            
        }
        
        return v;
    
    }
};