/* 
You have been given a matrix of ‘N’ rows and ‘M’ columns filled up with integers where every row is sorted in non-decreasing order. Your task is to find the overall median of the matrix i.e if all elements of the matrix are written in a single line, then you need to return the median of that linear array.
The median of a finite list of numbers is the "middle" number when those numbers are listed in order from smallest to greatest. If there is an odd number of observations, the middle one is picked. For example, consider the list of numbers [1, 3, 3, 6, 7, 8, 9]. This list contains seven numbers. The median is the fourth of them, which is 6.
*/
int solve(vector<int> &row, int mid)
{
  /
  int l = 0, h = row.size() -1;
  while(l<=h){
    int md = (l+h) >>1;
    if(row[md]<=mid){
      l= md+1;
    }
    else{
      h=md-1;
    }
  }
  return l;

}


int Solution::findMedian(vector<vector<int> > &A) {
    int l = 1;
    int h = 1e9;
    int mid ;
    int m = A.size();
    int n = A[0].size();
    int total = m*n;
    while(l<=h){
        int count =0;
        mid = (l+h)/2;
        for( int i =0 ;i<m ; i++){
            count+=solve(A[i],mid);
        }
        if(count<=total/2)
        l=mid+1;
        else
        h=mid-1;
    }
    return l;
}

