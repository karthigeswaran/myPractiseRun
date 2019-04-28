#include <bits/stdc++.h>
#include <iostream> 
using namespace std; 
  
int trailingZeroes(int n) 
{ 
    int cnt = 0; 
    while (n > 0) { 
        n /= 5; 
        cnt += n; 
    } 
    return cnt; 
} 
  
void binarySearch(int n) 
{ 
    int low = 0; 
    int high = 1e6;  
    while (low < high) { 
        int mid = (low + high) / 2; 
        int count = trailingZeroes(mid); 
        if (count < n) 
            low = mid + 1; 
        else
            high = mid; 
    } 
  
    vector<int> result; 
    while (trailingZeroes(low) == n) { 
        result.push_back(low); 
        low++; 
    } 
  
    for (int i = 0; i < result.size(); i++)  
        cout << result[i] << " "; 
} 
  

int main() 
{ 
    int n = 384; 
    binarySearch(n); 
    return 0; 
} 