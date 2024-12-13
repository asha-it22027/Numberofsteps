#include<bits/stdc++.h>
using namespace std;
 
int main() 
{
    int n;
    cin >> n;
    vector<int> arr1(n), arr2(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
 
    int x = arr1[0];
    for (int i = 1; i < n; i++) {
        if (arr1[i] < x) {
            x = arr1[i];
        }
    }
 
    long long steps = 0; 
    for (int i = 0; i < n; i++) {
        if (arr2[i] == 0) {
            if (arr1[i] != x) {
                cout << -1 << endl;
                return 0;
            }
        } else {
            int diff = arr1[i] - x;
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