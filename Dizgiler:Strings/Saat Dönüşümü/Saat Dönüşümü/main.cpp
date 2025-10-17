#include <iostream>

using namespace std;

int main() {
    
    cout << "lutfen 12 lik sistemde saat giriniz: ";
    
    char s[11];
    cin>>s;
    if(s[8] == 'P'){
        cout << 'P' << endl;
        char x[3];
        x[0] = s[0];
        x[1] = s[1];
        x[2] = '\0';
        int saat = 0;
        saat += (x[0]-48) *10;
        saat += (x[1]-48);
        saat += 12;
        s[0] = (char)48 + saat/10;
        s[1] = (char)48 + saat%10;
        s[8]= '\0';

        cout << s << endl;
        cout<< "saat+12"<<saat + 12<< endl;

        
    }
    else{
        s[8]= '\0';
        cout << s << endl;
    }
}
