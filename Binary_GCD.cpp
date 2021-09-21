#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (!a || !b)
        return a | b; //if any one is zero, return the other one
    unsigned shift = __builtin_ctz(a | b); //min no of zeros in both
    a >>= __builtin_ctz(a); // make it odd
    do {
        b >>= __builtin_ctz(b); // removing end zeros making it odd 
        if (a > b) 
            swap(a, b);  //making b bigger
        b -= a; // b -=a , euclidian properties , gcd(a,b) = gcd (b,a-b) for b>a
    } while (b);
    return a << shift; // multiplying it by shift becoz - gcd(2a,2b) = 2 * gcd(a,b) =>  if a and b are multiples of 2
}

int main()
{
    cout<<gcd(6,3);
    return 0;
}
