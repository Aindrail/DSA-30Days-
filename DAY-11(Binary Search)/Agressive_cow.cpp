  #include <bits/stdc++.h>
  using namespace std;

bool isPossible(vector<int> &A, int c, int mid, int N){
    int temp = A[0]; int count = 1;
    for( int i =1 ; i<N ; i++){
        if(A[i] - temp >=mid){
             temp = A[i];
                count++;

        }
        if(count == c) return true;
        
    }
    return false;
}


   int main(){
     int t;
     cin>>t;

        while(t--){

          int N , C;
            cin>>N>>C;
            vector<int> v(N);
            for(int i=0;i<N;i++){
                cin>>v[i];
            }
            sort(v.begin(),v.end());
            int l = 1;
            int h = v[N-1]-v[0];
            while(l<=h){
                int mid = (l+h)>>1;
                if(isPossible(v,C,mid,N)){
                    
                    l = mid+1;
                }
                else{
                    h = mid-1;
                }
            }
            cout<<h<<endl;

        }
       return 0;
   }