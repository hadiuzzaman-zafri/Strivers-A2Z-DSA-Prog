#include <bits/stdc++.h>

using namespace std;

void pattern_1(int n){
    for(int i = 0;i < n; i++){
        for(int j = 0; j< n-i; j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}

int main() {
    int t;
    cin>>t;

    for(int i = 0; i<t;i++){
        int k;
        cin>>k;
        pattern_1(k);
    }

    return 0;
}
