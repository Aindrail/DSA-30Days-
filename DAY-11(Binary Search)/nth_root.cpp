// double findNthRootOfM(int n, double m) {
// 	// Write your code here.
// 	// Variable to store maximum possible error in order
//     // to obtain the precision of 10^(-6) in the answer.
//     double error = 1e-7;

//     // Difference between the current answer, and the answer
//     // in next iteration, which we take as big as possible initially.
//     double diff = 1e18;

//     // Guessed answer value
//     double xk = 2;

//     // We keep on finding the precise answer till the difference between
//     // answer of two consecutive iteration become less than 10^(-7).
//     while (diff > error) {

//         // Answer value in the next iteration.
//         double xk_1 = (pow(xk, n) * (n - 1) + m) / (n * pow(xk, n - 1));

//         // Difference of answer in consecutive states updated.
//         diff = abs(xk - xk_1);

//         // Updating the current answer with the answer of next iteration.
//         xk = xk_1;
//     }

//     // Returning the nthRootOfM with precision upto 6 decimal places
//     // which is xk.
//     return xk;
	
	
// }

#include <bits/stdc++.h>
using namespace std;
double multiply(double number, int n) {
    double ans = 1.0;
    for(int i = 1;i<=n;i++) {
        ans = ans * number;
    }
    return ans; 
}

void getNthRoot(int n, int m) {
    double low = 1;
    double high = m;
    double eps = 1e-6; 
    
    while((high - low) > eps) {
        double mid = (low + high) / 2.0; 
        if(multiply(mid, n) < m) {
            low = mid; 
        }
        else {
            high = mid; 
        }
    }
    
    cout <<n<<"th root of "<<m<<" is "<<low<<endl; 
    
}
int main() {
	int n=3, m=27; 
	getNthRoot(n, m); 
	return 0;
}

