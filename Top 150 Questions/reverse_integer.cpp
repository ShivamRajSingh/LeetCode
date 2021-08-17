#include "codeblock.h"

int reverse(long long int x) {
    bool negative =false;
    if(x < 0){
        negative = true;
        x *= -1;
    }
    long long int reversed = 0;
    while(x > 0){
        reversed = (reversed*10) + (x % 10);
        x = x /10;
    }
    
    if(reversed > INT_MAX || reversed < INT_MIN){
        return 0;
    }
    
    return (negative) ? (int) reversed*-1 : (int) reversed;
}
int main()
{
    ll x;
    cin >>x;
    x = reverse(x);
    cout << x;
}