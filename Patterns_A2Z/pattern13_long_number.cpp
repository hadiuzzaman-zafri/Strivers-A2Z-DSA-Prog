 #include<bits/stdc++.h>
using namespace std;
 int main(){
    int n;
    int num=1;
    cout<<"Enter the Row NUm; ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<"\n";
    }
 }