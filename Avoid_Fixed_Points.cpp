#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t>0){
        t--;
        cin>>n;
        int arr[n];
        int count=0;
        
        for(int i=0;i<n;i++){
            cin >> arr[i];
            }
            for(int i=0;i<n;i++){
            if(i<arr[i]){
                count++;
                
            }else if(i>0 && arr[i]==0){
                break;

            }
                cout<<count-1<<endl;
                // break;
            // cout <<arr[i] <<endl;
            
        }
        
    }
}