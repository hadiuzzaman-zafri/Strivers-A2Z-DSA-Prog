#include<bits/stdc++.h>
using namespace std;
    void insertion(int arr[], int n){
        for(int i = 0;i<n-1;i++){
            for(int j = i;j>=0;j--){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        for(int k = 0;k < n; k++){
            cout<<arr[k]<<" ";
        }
    }
    void bubble(int arr[], int n){
        for(int i = n-1;i >= 0;i-- ){       
            for(int j = 0; j < i;j++){
                if(arr[j] > arr[j+1]){
                    int temp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        for(int k = 0;k < n; k++){
            cout<<arr[k]<<" ";
        }
    }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++ ){
        cin>>arr[i];
    }

    insertion(arr, n);
    return 0;
}