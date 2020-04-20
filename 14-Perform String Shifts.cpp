static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();

class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        deque<char> d(s.begin() , s.end());
        int l=0 , r=0 , n=s.size();
        for (int i=0 ;i<shift.size() ;i++){
            if(shift[i][0])
                r+=shift[i][1];
        
            else
                l+=shift[i][1];
            
        }
        
        if(l>r){
            l-=r;
            for (int i =0 ; i <l;i++){
                d.pop_front();
                d.push_back(s[i%n]);
            }
        }
        else{
             r-=l;
            for (int i =0 ; i <r;i++){
                d.pop_back();
                d.push_front(s[n-(i%n)-1]);
            }
        }
        
        string ans(d.begin() , d.end());
        return ans;
       
    }
};