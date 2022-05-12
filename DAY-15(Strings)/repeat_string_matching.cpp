class Solution {
private:
    int BASE = 1000000;
public:
    int repeatedStringMatch(string A, string B) {
        if(A == B) return 1;
        int count = 1;
        string source = A;
        //add A to surce till the size is not grater than B
        while(source.size() < B.size()){
            count++;
            source+=A;
        }
        if(source == B) return count; //if equal return count
        if(Rabin_Karp(source,B) != -1) return count; // when it is incomplite in either one side only {A= ab B=babababababab  // here source will be ababababababab(7times ab) and count ==7 or a=abababababa here source is ab(6 times) and it will hence check if it is B is a substring of source if yes return count
        if(Rabin_Karp(source+A,B) != -1) return count+1; // when it has 2 sides incomplete if A = abc B= cabcabcab //here B has size equal to B so it will check if it is a sub and if yes then count ahs to be incremented by 1 
        return -1;
    }
    int Rabin_Karp(string source, string target){
        if(source == "" or target == "") return -1;
        int m = target.size();
        int power = 1;
        for(int i = 0;i<m;i++){
            power = (power*31)%BASE;
        }
        int targetCode = 0;
        for(int i = 0;i<m;i++){
            targetCode = (targetCode*31+target[i])%BASE;
        }
        int hashCode = 0;
        for(int i = 0;i<source.size();i++){
            hashCode = (hashCode*31 + source[i])%BASE;
            if(i<m-1) continue;
            if(i>=m){
                hashCode = (hashCode-source[i-m]*power)%BASE;
            }
            if(hashCode<0)
                hashCode+=BASE;
            if(hashCode == targetCode){
                if(source.substr(i-m+1,m) == target)
                    return i-m+1;
            }
        }
        return -1;
};
