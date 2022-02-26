#include <iostream>
using namespace std;

int power(int b, int p){
    int result=1;
    for(int i=0;i<p;i++){
      result=result*b;
    }
    return result;
}


int main(){
  cout<<power(9,4);
}


