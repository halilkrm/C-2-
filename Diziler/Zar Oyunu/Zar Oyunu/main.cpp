#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin>>n; // kaç zar atılacagı
    srand(time(NULL));
    int skor = 0;
    int a[n];
    int b[n];
    for(int i = 0 ; i<n; i++){
        int z1  = rand()%6 +1;
        int z2 = rand()%6 +1;
        a[i] = z1;
        b[i] = z2;
        
        if(z1>z2){
            skor++;
        }
        else if(z2>z1){
            skor--;
        }
    }
    for(int i = 0; i<n; i++)
        cout << a[i]<< " ";
    cout << endl;
    for(int i = 0; i<n; i++)
        cout << b[i]<< " ";
    cout << endl;
    
    if(skor>0)
        cout << "1. kullanıcı kazandı"<< endl;
    
    else if (skor<0)
        cout<< "2.kulanıcı kazandı" << endl;
        
    else
        cout<<"beraber" << endl;
    
    
    
    return 0;
}
