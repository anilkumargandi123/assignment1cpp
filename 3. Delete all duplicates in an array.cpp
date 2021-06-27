#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(int *a, int n) {
    set<int>s(a, a+n);
    for(auto i: s) {
        cout<<i<<" ";
    }
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    removeDuplicates(a, n);
}
