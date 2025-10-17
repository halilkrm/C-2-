#include <iostream>

using namespace std;

int ust(int t, int u) {
    // t^u = t*t*t*....
    int sonuc = 1;
    for(int i = 1; i<=u; i++){
        sonuc = sonuc*t;
    }
    
    return sonuc;
}

bool asalmi(int x){
    for(int i = 2; i<x; i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    
    int c = 0;
    for(int i = 2; c<20; i++){
        if(asalmi(ust(2,i)-1)){
            cout << ust(2,i)-1 << endl;
            c++;
        }
    }
    
    return 0;
}
