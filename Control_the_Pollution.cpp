// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n,x,y;
//         cin >> n >> x >> y;
//         int m=(n/4)+(n%4);
//         int o=(n/100)+(n%100);
//         if(n<100){
//             if((y*m)>100){
//                 cout<<y*m-100<<endl;
//             }else if((y*m)<100){
//             cout<<m*y<<endl;

//         }
//     }else{
//         if(x*o>100){
//             cout<<x*o-380<<endl;
//         }else if(x*o<100){
//             cout<<x*o<<endl;
//         }
//     }
// }
// }
#include <iostream>
using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, bus, car, count = 0;
//         cin >> n >> bus >> car;
//         while (n > 0)
//         {
//             if (n < bus / car * 4)
//             {
//                 n = n - 4;
//                 count = count + car;
//             }
//             else
//             {
//                 n = n - 100;
//                 count = count + bus;
//             }
//         }
//         cout << count << endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){

    int n,x,y;cin>>n>>x>>y;
    int m = 100006;
    for(int i = 0; i<=n;i++){
        for(int j = 0; j <= n; j++){
            int k = 100*j+4*i;
            (k>=n)? m=min(m, i*y+j*x):0;
        }
    }
    cout<<m<<endl;
    }
    return 0;
}