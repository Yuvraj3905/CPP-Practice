#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n;
        int arr[2*n];
        for(int i=0;i<2*n;i++){
            cin >> arr[i];
        }
        if(abs(arr[n])==abs(arr[2*n])){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}