vector<int> find_missing_repeating(vector<int> array)
{
  vector<int>missing_repeated_number(const vector<int> &A) {
    long long int len = A.size();

    long long int S = (len * (len+1) ) /2;
    long long int P = (len * (len +1) *(2*len +1) )/6;
    long long int missingNumber=0, repeating=0;
     
    for(int i=0;i<A.size(); i++){
       S -= (long long int)A[i];
       P -= (long long int)A[i]*(long long int)A[i];
    }
     
    missingNumber = (S + P/S)/2;

    repeating = missingNumber - S;

    vector <int> ans;

    ans.push_back(repeating);
    ans.push_back(missingNumber);

    return ans;
}

// Q link :- https://www.interviewbit.com/problems/repeat-and-missing-number-array/
// Approach :- Find summ of X2 and summation of all element in array. Then subtract with suma n and summ n2.   A2-B2=(A+b) (A-b) we have A+B so we can get A-B. no add A+b and A-b = 2A=x(let) A=x/2 then find B. where A is missing and B is extra.
// TC :- O(n) SC :-O(1)
// Appraoch 2:- use x or. find rigthmost bit of XOR value. seperate all element in two buckets on that basis. then seperate all no till N(no of elements) in two buckets . and takes Xor of each element in the respective buckets . then iterate and find which is missing and which is extra
// TC :- O(n)  SC :- O(1)