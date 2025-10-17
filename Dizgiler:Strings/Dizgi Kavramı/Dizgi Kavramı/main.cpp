#include <iostream>

using namespace std;

int main() {
    
    char *s = "evren";
    cout<< s << endl;
    cout << s[2]<< endl;
    
    char c[6] = "evren";
    char a[5];
    
    a[0] = 'e';  //  "e" -> e,\0
    a[1] = 'v';
    a[2] = 'r';
    cout << c << endl;
    cout << a << endl;
}
