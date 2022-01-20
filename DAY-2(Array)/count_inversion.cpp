#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    long long int merge(long long arr[], long long l, long long mid, long long n){
        long long n1 = mid-l+1;
        long long n2= n-mid;
        
        long long int a[n1];
        long long int b[n2];
        long long int  ans=0;
        
        for( long long int i = 0;i<n1; i++){
           a[i]=arr[l+i];
  }
   for( long long  i = 0;i<n2; i++){
           b[i]=arr[mid+i+1];
  }
     long long  i = 0, j= 0 , k=l;
  while(i<n1 && j<n2){
         if( a[i]<=b[j]){
             arr[k]=a[i];
             i++; k++;
         }
         else{
             arr[k]= b[j];
             ans += n1 - i  ; 
             k++;j++;
         }
  }
  while (i<n1)
  {
      
      arr[k]=a[i];
      i++; k++; 
  }
  while (j<n2)
  {
      
      arr[k]=b[j];
  k++; j++;
  }
  
   return ans;   
        
        
    }
    
    
    long long int sortAndCount(long long arr[], long long l, long long N){
        long long int ans= 0;
        if(l<N){
            long long  mid = (l+N)/2;
        ans+= sortAndCount(arr,l,mid);
        ans+=sortAndCount(arr,mid+1,N);
        ans+=merge(arr,l,mid,N);
        
        }
       return ans;
    }
    
    
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        return sortAndCount(arr,0,N-1);
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  
  // Approach :- Merge sort intuite