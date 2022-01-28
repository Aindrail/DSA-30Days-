class Solution {
public:
    int reverse(int x) {
       int res = 0;
        while(x !=0){
int lastD =  x % 10;
            x/=10;
             if (res > INT_MAX/10 || (res == INT_MAX / 10 && lastD > 7)) return 0;
            if (res < INT_MIN/10 || (res == INT_MIN / 10 && lastD < -8)) return 0;
   res = (res*10)+lastD;        
}
        return res;
    }
};

//Approach :- if overflow 
// To explain, lets assume that \text{rev}rev is positive.

// If temp = \text{rev} \cdot 10 + \text{pop}temp=rev⋅10+pop causes overflow, then it must be that \text{rev} \geq \frac{INTMAX}{10}rev≥ 
// 10
// INTMAX
// ​
 
// If \text{rev} > \frac{INTMAX}{10}rev> 
// 10
// INTMAX
// ​
//  , then temp = \text{rev} \cdot 10 + \text{pop}temp=rev⋅10+pop is guaranteed to overflow.
// If \text{rev} == \frac{INTMAX}{10}rev== 
// 10
// INTMAX
// ​
//  , then temp = \text{rev} \cdot 10 + \text{pop}temp=rev⋅10+pop will overflow if and only if \text{pop} > 7pop>7
// Similar logic can be applied when \text{rev}rev is negative.
