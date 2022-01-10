// "switch" ex:

#include <iostream>

using namespace std;

int main(){
    int a;
    cin>>a;
    switch (a){
        case 1:
            cout<<"a=1";
            break;
        case 2:
            cout<<"a=2";
            break;
        default:
            cout<<"a!=1 && a!=2";
            break;
	}
}
