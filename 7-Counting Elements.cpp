static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();

class Solution {
public:
    bool a[1005];
    int countElements(vector<int>& arr) {
        
        for (int i=0 ; i<arr.size() ;i++)
            a[arr[i]] = true;
        
        int c = 0;
        for (int i=0 ; i<arr.size() ;i++)
            if(a[arr[i]+1])c++;
        
        return c ;    
    
    }
};