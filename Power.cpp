#include <bits/stdc++.h>
using namespace std;

int fact(int n, int m){
    if(n==0){
        return 0;
    }
    if(m==0){
        return 1;
    }
    int smout=pow(n,m-1);
    return n*smout;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int output=fact(n,m);
    cout<<output<<endl;
}