bool isPosible( vector<int> &A , int B, int sum){
    int temp =0; int count =1;
for( int i =0 ; i<A.size(); i++){
    if(temp+A[i]>sum){
        count++;
        temp = A[i];
        if(temp > sum || count>B ) return false;
    }
    else{
          temp+=A[i];
    }
}

return true;



}


int Solution::books(vector<int> &A, int B) {
    if(A.size()<B) return -1;

   int l = A[0];
   int h = 0;
   for( int i =0 ; i<A.size(); i++){
       l = min (l,A[i]);
       h += A[i];
   }

   while(l<=h){
      int mid = (l+h)>>1;
      if(isPosible(A,B,mid)){
       h= mid-1;
   }
   else{
       l=mid+1;
   }


   }
   return l;
}
   