#include <iostream>
using namespace std;

int main(){

    int n,m,i,j;
    cin>>m>>n;

    int arr[m][n];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
        cin>>arr[i][j];
    }

        cout<<arr[i][j]<<endl;
    }
   
   
}