
// C++ program to get size of subset whose 
// each pair sum is not divisible by K 
#include <bits/stdc++.h> 
using namespace std; 
  
// Returns maximum size of subset with no pair 
// sum divisible by K 
int subsetPairNotDivisibleByK(int arr[], int N, int K) 
{ 
    // Array for storing frequency of modulo 
    // values 
    int f[K]; 
    memset(f, 0, sizeof(f)); 
  
    // Fill frequency array with values modulo K 
    for (int i = 0; i < N; i++) 
        f[arr[i] % K]++; 
  
  for (int i = 0; i < N; i++) 
    	cout<<"\n"<<f[i]<<"\n"; 
  
    //  if K is even, then update f[K/2] 
    if (K % 2 == 0) 
        f[K/2] = min(f[K/2], 1); 
  
    // Initialize result by minimum of 1 or 
    // count of numbers giving remainder 0 
    int res = min(f[0], 1); 
  
    // Choose maximum of count of numbers 
    // giving remainder i or K-i 
    for (int i = 1; i <= K/2; i++) 
        res += max(f[i], f[K-i]); 
  
    return res; 
} 
  
//  Driver code to test above methods 
int main() 
{ 
    int arr[] = {3, 7, 2, 9, 1}; 
    int N = sizeof(arr) / sizeof(arr[0]); 
    int K = 3; 
    cout << subsetPairNotDivisibleByK(arr, N, K); 
    return 0; 
}

