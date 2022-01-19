class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        if(n==0){
return;}
        int i=0, j=0;
        while(i<m){
if(a[i]<=b[j])
    i++;
            else{
swap(a[i],b[j]);
                i++;
                sort(b.begin(),b.end());
            }
} 
        while(j<n){
a[i]=b[j]; i++;
        
        j++;}

        
    }
};

// Qlink :- https://leetcode.com/problems/merge-sorted-array/submissions/
// Approach :- Use two pointer algo. compare the 1st array with second array  . and sort 2nd array every time swap is done .O(n*m)
 //(2) use gap method(where gap = n+m/2(ceil) and gap/2) for better solution O(n+m) shell short intuition