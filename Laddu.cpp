#include <iostream>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int a;\
        string nat;
        cin>>a>>nat;
        bool ind=false;
        if(nat == "INDIAN") ind = true;
        long long l=0;
        string s;
        int n;
        for(int i=0;i<a;i++){
            cin>>s;
            if(s== "CONTEST_WON"){
                cin>>n;
                l+=300;
                if(n<20) l+= 20-n;
            }
            else if(s== "TOP_CONTRIBUTOR" ){ 
                l+=300;
            }
            else if(s== "BUG_FOUND" ){
                cin>>n;
                l+=n;
            }
            else if(s== "CONTEST_HOSTED"){
                l+=50;
            }
        }
        if(ind) cout<<l/200<<endl;
        else cout<<l/400<<endl;
    }
    return 0;
}