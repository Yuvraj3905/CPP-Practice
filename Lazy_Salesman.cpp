#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,w;
        cin >> n;
        cin >>w;
        int array[n];
        for(int i=0; i < n; i++){
            cin >> array[i];
        }
        sort(array, array + n);
        int sum = 0;
        int count = 0;
        for(int i=0;i<n; i++){
            sum += array[i];
            count++;
            if(sum==w){
                cout<<count<<endl;
                break;
            }
        
      }
    }
}