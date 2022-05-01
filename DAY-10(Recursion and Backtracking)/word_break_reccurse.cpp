#include <bits/stdc++.h>
void solve(string &s, string temp, vector<string> &dictionary, vector<string> &ans)
{
	if(s.length()==0)
    {
        ans.push_back(temp);
        return ;
    }
	
	
	    unordered_set<string> dict(dictionary.begin(),dictionary.end());
	for( int i =0 ; i<s.length(); i++){

		string str = s.substr(0,i+1);
		if(dict.find(str)!=dict.end()){
			string right = s.substr(i+1);
			string temp2 = temp;
			temp = temp+str+" ";
             solve(right,temp, dictionary, ans);
			temp = temp2;
			
		}
	
	}
	    
	
	
}

vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    // Write your code here

	vector<string> ans;
    //if no other function to be used
//     if(s.length()==0)
//     {
//         ans.push_back("");
//         return ans;
//     }
//     unordered_set<string> dict(dictionary.begin(),dictionary.end());
//     vector<string> temp;
//     for(int i=0;i<s.length();i++)
//     {
//         string str=s.substr(0,i+1);
//         if(dict.find(str)!=dict.end())
//         {
// 			string op = s.substr(i+1);
//             temp=wordBreak(op,dictionary);
//             for(int j=0;j<temp.size();j++)
//             {
//                 ans.push_back(str+" "+temp[j]);
//             }
//         }
//     }
	solve(s,"",dictionary,ans);
    return ans;
    
}


int main()
{
    string s = "catsanddog";
    vector<string> dictionary = {"cat","cats","and","sand","dog"};
    

    vector<string> ans = wordBreak(s,dictionary);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}