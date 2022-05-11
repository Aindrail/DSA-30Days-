class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty() || s.length()==1)return s;
        int start =0; int end =0;
        int ansLen = INT_MIN;
        for(int i =0 ; i<s.length(); i++){
            int len1 = expandFromMiddle(s,i,i);
            int len2 = expandFromMiddle(s,i,i+1);
             ansLen = max(len1, len2);
            if(ansLen > (end-start)){
                //if longest found set the startindex and endindex for substr
                
                start = i-((ansLen-1)/2);
                end = i+((ansLen)/2);
            }
            
        }
        // cout<<start<<" "<<end<<endl;
        // if(start!=0)
        // return s.substr(start,end);
        
        return s.substr(start,(end-start)+1);
        
    }
    int expandFromMiddle(string s , int left , int right){
        if(s.empty() || left>right)
            return 0;
      while(left>=0 && right<s.length() && s[left]==s[right]){
          left--;
          right++;
      }
        return right-left-1;
    }
};