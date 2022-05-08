/* 
Given an array, find the nearest smaller element G[i] for every element A[i] in the array such that the element has an index smaller than i.
*/

vector<int> Solution::prevSmaller(vector<int> &A) {
    int n = A.size();
    vector<int> ans(n, -1);
    stack<int> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && st.top() >= A[i]) {
            st.pop();
        }
        if (!st.empty()) {
            ans[i] = st.top();
        }
        st.push(A[i]);
    }
    return ans;
}

