#include <iostream>

using namespace std;

int boyut(char *s) {
    int b = 0;
    char c = s[0];
    while(c != '\0'){
        c = s[++b];
    }
    return b;
}




int main() {
    char *s = "evren";
    char c[6] = "evren";
    cout <<boyut(c)<< endl;
    char *x = (char*)malloc(sizeof(char)*6);
    strcpy(x,s);
    cout << x << endl;
    
}
