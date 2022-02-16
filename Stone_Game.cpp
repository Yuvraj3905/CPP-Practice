// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     int x;
//         cin >> x;
//     while(t--){
        
//         char arr[x];
        
//         for(int i=0;i<x;i++){
//             cin >> arr[i];
//         }
//         sort(arr,arr+x);

//         cout << arr << endl;
//     }
// }
// #include <bits/stdc++.h>
// #define nl "\n"

// #define all(v) v.begin(),v.end()
// #define ll long long int

// using namespace std;

// void solve(){
//   ll n;
// cin >> n;
// string si, s2;
// cin >> sl >> s2;
// string res(2 *n, '0');
// sort(all(s1));
// sort (all(s2));
// ll a=0,a_e=n-1,be-0,b
// 11 right_most = 2." n'- 1, leFt_mos!
// for(int i:0;ic 2 * njirt) {
// if (b< be) {
// res[left_most] = sifa];
// at;
// left_most += 1;
// ee







// #include <bits/stdc++.h>

// #define n1 "\n"
// #define all(v) v.begin(), v.end()
// #define ll long long int
// using namespace std;

// void solve()
// {
//     ll n;
//     cin >> n;
//     string s1, s2;
//     cin >> s1 >> s2;
//     string res(2 * n, '0');
//     sort(all(s1));
//     sort(all(s2));
//     ll a = 0, a_e = n - 1, b_e = 0, b = n - 1;
//     ll right_most = 2 * n - 1, left_most = 0;
//     for (int i = 0; i < 2 * n; i++)
//     {
//         if (b < b_e)
//         {
//             res[left_most] = s1[a];
//             a += 1;
//             left_most += 1;
//             continue;
//         }
//         if (a > a_e)
//         {
//             res[left_most] = s2[b];
//             b -= 1;
//             left_most += 1;

//             continue;
//         }

// if (a> a_e) {
// res[left_most] = s2(b];
// b-= 1;

// left_most += 1;
// continue;

// )

// if (i % 2==0) {

// if (s1[a] < s2[b]){
// res[left_most] = s1[a];
// a+=1;
// left_most += 1;
// }


// else {

// res[right_most]
// right_most -= 1;
// a_e-= 1;

// }
// }

// else (
// if (s2[b] > s1[a]) (
// res[left_most] = s2[b];
// left_most += 1;
// b-=1;

// }

// else{
//     res{right_most} =s2{b_e};
//     right_most-=1;
//     b_e+=1;
// }
// }
// }
// cout <<res <<"\n";
// }
// int main(){
//     int ht;
//     cin >>ht;
//     for(int i=0; i<ht; i++){
//         solve();
//     }
// }
#include <bits/stdc++.h>

#define n1 "\n"
#define all(v) v.begin(), v.end()
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    string res(2 * n, '0');
    sort(all(s1));
    sort(all(s2));
    ll a = 0, a_e = n - 1, b_e = 0, b = n - 1;
    ll right_most = 2 * n - 1, left_most = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        if (b < b_e)
        {
            res[left_most] = s1[a];
            a += 1;
            left_most += 1;
            continue;
        }
        if (a > a_e)
        {
            res[left_most] = s2[b];
            b -= 1;
            left_most += 1;

            continue;
        }

        if (i % 2 == 0)
        {
            if (s1[a] < s2[b])
            {
                res[left_most] = s1[a];
                a += 1;
                left_most += 1;
            }
            else
            {
                res[right_most] = s1[a_e];
                right_most -= 1;
                a_e -= 1;
            }
        }
        else
        {
            if (s2[b] > s1[a])
            {
                res[left_most] = s2[b];
                left_most += 1;
                b -= 1;
            }
            else
            {
                res[right_most] = s2[b_e];
                right_most -= 1;

                b_e += 1;
            }
        }
    }
    cout << res << "\n";
}

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
        solve();
}