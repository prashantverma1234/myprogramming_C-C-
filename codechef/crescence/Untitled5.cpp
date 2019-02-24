
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int inv(int a, int m)
{
    int m0 = m, t, q;
    int x0 = 0, x1 = 1;
 
    if (m == 1)
       return 0;
 
    // Apply extended Euclid Algorithm
    while (a > 1)
    {
        // q is quotient
        q = a / m;
 
        t = m;
 
        // m is remainder now, process same as
        // euclid's algo
        m = a % m, a = t;
 
        t = x0;
 
        x0 = x1 - q * x0;
 
        x1 = t;
    }
 
    // Make x1 positive
    if (x1 < 0)
       x1 += m0;
 
    return x1;
    cout<<x1<<" ";
}
 
// k is size of num[] and rem[].  Returns the smallest
// number x such that:
//  x % num[0] = rem[0],
//  x % num[1] = rem[1],
//  ..................
//  x % num[k-2] = rem[k-1]
// Assumption: Numbers in num[] are pairwise coprime
// (gcd for every pair is 1)
int findMinX(int num[], int rem[], int k)
{
    
    int prod = 1;
    for (int i = 0; i < k; i++)
        prod *= num[i];
 
    
    int result = 0;
 
    
    for (int i = 0; i < k; i++)
    {
        int pp = prod / num[i];
        result += rem[i] * inv(pp, num[i]) * pp;
    }
 cout<<result;
    return result % prod;
}
 

 main()
{
    int t10;
    cin>>t10;
    while(t10--)
    {
      int k;
      cin>>k;
      int num[k+k],rem[k+k];
      
      for(int z2=0;z2<k;z2++)
      cin>>num[z2];
      
       for(int z2=0;z2<k;z2++)
      cin>>rem[z2];
      
    cout<< findMinX(num, rem, k)<<endl;
    }
}

