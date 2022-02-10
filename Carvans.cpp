// #include <iostream>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t>0){
//         t--;
//         int n;
//         cin >> n;
//         long long arr[n];
//         for(int i=0; i<n; i++){
//             cin >> arr[i];
//         }
//         for(int i=0; i<n; i++){

//         }
//     }


// }
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
    // ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t ;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
          cin >> arr[i];
    }
    int min = arr[0];
    int c=1;
    for(int i=1;i<n;i++){
          if(arr[i]<=min){
                c++;
                min = arr[i];
          }
    }
    cout << c <<'\n';
    }
      return 0;
    }