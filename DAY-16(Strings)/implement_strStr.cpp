/*
Implement strStr().

Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
*/
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0) return 0;
        if(haystack.size() == 0) return -1;
        int i = 0;
        int j = 0;
        while(i<haystack.size()){
            if(haystack[i] == needle[j]){
                i++;
                j++;
                if(j == needle.size()) return i-j;
            }
            else{
                i = i-j+1;
                j = 0;
            }
        }
        return -1;
       
    }
};

