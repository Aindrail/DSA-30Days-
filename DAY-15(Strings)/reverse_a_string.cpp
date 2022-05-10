class Solution {
public:
    string reverseWords(string s) {
      stack<string> rev;int n = s.length();
        for( int i =0 ; i<n; i++ ){
            string temp;
            if(s[i]==' ')continue;
            while(i< n && s[i]!=' '){
                temp+=s[i];
                i++;
            }
            rev.push(temp);
        }
        string ans;
        while(!rev.empty()){
            ans+=rev.top();
            
            rev.pop();
            if(!rev.empty()) ans+=" ";
        }
        return ans;
    }
};