#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin >>a[i];
    }
    int toplam = 0;
    for(int i = 0; i<n; i++){
        toplam += a[i];
    }
    
    cout << "toplam "<< toplam<< endl;
    
    
    
    
    return 0;
}
