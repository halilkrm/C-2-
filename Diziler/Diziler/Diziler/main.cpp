#include <iostream>

using namespace std;

int main() {
    int a[5];
    
    for(int i = 0; i<5; i++){
        cin>> a[i];
    }
    // en buyuk
    int eb = a[0];
    for(int i = 1; i<5; i++){
        if(a[i]>eb){
            eb = a[i];
        }
    }
    
    cout << "enbuyuk: "<< eb<< endl;
    
    int ek = a[0];
    for(int i = 1; i<5; i++){
        if(a[i]<ek){
            ek = a[i];
        }
    }
    cout << "enkucuk: "<< ek<< endl;
    
    int toplam = 0;
    for(int i = 0; i<5; i++){
        toplam += a[i];
    }
    cout<<"toplam :"<< toplam<< endl;
    cout << "ortalama: "<< toplam/5 << endl;
    
    
    return 0;
}
