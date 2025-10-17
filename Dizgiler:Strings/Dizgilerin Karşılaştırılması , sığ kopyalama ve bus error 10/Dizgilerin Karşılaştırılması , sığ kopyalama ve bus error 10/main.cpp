#include <iostream>

using namespace std;

int main() {
    
    char *s = "evren"; // karakterlerini değiştiremezsiniz
    cout<< s << endl;
    cout << s[2]<< endl;
    
    char c[6] = "evren"; // bunda değiştirirsin
    char a[5];
    
    a[0] = 'e';  //  "e" -> e,\0
    a[1] = 'v';
    a[2] = 'r';
    cout << c << endl;
    cout << a << endl;
    
    // s = c; shallow copy, sığ kopyalama
    // strcmp -> string compare
    // sozluk == 0 , -1, +1
    
    if(strcmp(c,s) == 0) {
        cout << "esitler" << endl;
    }
    else{
        cout << "esit değiller"<< endl;
    }
    
    c[2] = 'x';              // 7.satırdaki nott s[2] = 'x'; böyle yaparsak bus error 10 verir
    cout << s << endl;
    cout << c << endl;

}

