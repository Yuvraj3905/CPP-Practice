#include <iostream>

using namespace std;

void gir(string name, int n){
    cout<<"My name is "<<name<<endl<<"I am "<<n<<"years old"<<endl;
}
int main(){
   gir("yuvraj", 20);
   gir("manjot", 12);
   return 0;
}