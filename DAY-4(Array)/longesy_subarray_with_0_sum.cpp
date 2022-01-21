int maxLen(int A[], int n)
{
    // Your code here
    unordered_map<int,int> mpp; 
    int maxi = 0;
    int sum = 0; 
    for(int i = 0;i<n;i++) {
        sum += A[i]; 
        if(sum == 0) {
            maxi = i + 1; 
        }
        else {
            if(mpp.find(sum) != mpp.end()) {
                maxi = max(maxi, i - mpp[sum]); 
            }
            else {
                mpp[sum] = i;
            }
        }   
    }

    return maxi; 
}
//Qlink :- https://takeuforward.org/data-structure/length-of-the-longest-subarray-with-zero-sum/
// Approach :- USe a hash set to store the sum till every index and find if the sum has repeated or not if repeated then take the diff between curr index and the repeted sum index. max(diif)==ans
// TC :- O(N)  SC :- O(N)