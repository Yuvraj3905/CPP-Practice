#include <iostream>
using namespace std;
int findTrailingZeros(int n)
{
    if (n < 0) // Negative Number Edge Case
        return -1;
 
    // Initialize result
    int count = 0;
 
    // Keep dividing n by powers of
    // 5 and update count
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;
 
    return count;
}

int main() {
    int t;
    cin>>t;
    while(t>0){
        t--;
    int n;
    long double factorial = 1.0;

    
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        int ans = factorial/10;  
        cout << findTrailingZeros(n)<<endl;  
    }
    }
    return 0;
}