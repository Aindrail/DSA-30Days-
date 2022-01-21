#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int solve(vector<int> &A, int B) {
    unordered_map<int,int>visited;
    int cpx = 0;
    long long c=0;
    for(int i=0;i<A.size();i++){
        cpx^=A[i];
        if(cpx==B) c++;
        int h = cpx^B;
        if(visited.find(h)!=visited.end()){
            c=c+visited[h];
        }
        visited[cpx]++;
    }
    return c;
}
};


int main()
{   vector<int> A{ 4,2,2,6,4 };
    Solution obj;
    int totalCount= obj.solve(A,6);
    cout<<"The total number of subarrays having a given XOR k is "<<totalCount<<endl;
}

//Qlink :- https://www.interviewbit.com/problems/subarray-with-given-xor/
// Approach :- We need to traverse the array while we maintain variables for current_perfix_xor, counter, and also a map to keep track of visited xors. This map will maintain the frequency count of all previous visited current_prefix_xor values. If for any index current_prefix_xor is equal to B, we increment the counter. If for any index we find that Z is present in the visited map, we increment the counter by visited[Z] (Z=current_prefi_xor^B). At every index, we insert the current_prefix_xor into the visited map with its frequency.
// TC :- O(N)  SC :- O(N)