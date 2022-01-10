// "continue" ex:

#include <iostream>

using namespace std;

int main(){
    int a;
    int b=0;
    cin>>a;
    while(b<=a){
        b++;
        if(b==3){
            continue;
        }
        cout<<b<<endl;
    }
}
