#include <iostream>

using namespace std;

int main() {
    
    string s; // içeriği degistirilemez
    char *p = "evren";
    char c[6] = "evren";
    s = p;
    cout << s.size()<< endl;
    s.append(" deneme");
    cout<< s << endl;
    cout << s.substr(2,8)<< endl;
    
}
