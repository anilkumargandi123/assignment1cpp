#include<bits/stdc++.h>
using namespace std;

int maximumSubarray(int *a, int n) {
    int maxi = a[0];
    int max_end = a[0];
    for(int i=1;i<n;i++) {
        maxi = max(a[i], maxi + a[i]);
        max_end = max(max_end, maxi);
    }
    return max_end;
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<maximumSubarray(a, n);
}

