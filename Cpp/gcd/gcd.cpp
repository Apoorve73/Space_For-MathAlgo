// Finding GCD using Euclidean Algorithm
#include <bits/stdc++.h> 
using namespace std; 

// n = m*q + r;
// the iterative process as follows: 
// q = n/m
// q1 = m/r
// q2 = r/r1 and so on until denominator doesn't become less than 1
// therefore the answer is the denominator at this point of time

int gcd(int n, int m){
    // n>m is necessary for division to take place properly
    if(n < m) swap(n,m);

    // m is GCD in case n is divisible by m
    if(n%m == 0) return m;

    // loop and pass remainder value in n and swap that with m so that m is the dividend and n(the remainder now) is divisor
    while (m > 0){
        n = n%m;
        swap(n,m);
    }
    return n;
}

// Worst Case scenario is when the numbers are consecutive members of Fibonacci sequence
int main(){
float num1, num2;
    cout << "Enter two numbers to get GCD" << '\n';
    cin >> num1 >> num2;
    cout << gcd(num1, num2);
}
