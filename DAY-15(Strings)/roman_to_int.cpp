class Solution {
public:
    int romanToInt(string s) {
        if(s.length()==0) return 0;
        map <char,int> romanToInt = {
        {'I',1} , {'V',5}, {'X',10}, {'L',50}, {'C',100},{'D',500},{'M',1000}
                                    
                                    };
          int ans =0 , prev = 0;
      int n = s.length();
        for( int i = n-1 ; i>=0 ; i--){
          
            if(prev > romanToInt[s[i]]){
                ans-=romanToInt[s[i]];
                
            }
            else
                ans+=romanToInt[s[i]];
            prev = romanToInt[s[i]];
        }
        return ans;
    }
};