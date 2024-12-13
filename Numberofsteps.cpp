#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    long long n;
    cin >> n;
    vector<long long> arr1(n), arr2(n);
    
    for (long long i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (long long i = 0; i < n; i++) {
        cin >> arr2[i];
    }
 
    long long x = *min_element(arr1.begin(), arr1.end());
    long long steps = 0;
 
    for (long long i = 0; i < n; i++) {
        if (arr2[i] == 0) {
            if (arr1[i] != x) {
                cout << -1 << endl;
                return 0;
            }
        } else {
            long long diff = arr1[i] - x;
            if (diff < 0 || diff % arr2[i] != 0) {
                cout << -1 << endl;
                return 0;
            }
            steps += diff / arr2[i];
        }
    }
 
    cout << steps << endl;
    return 0;
}