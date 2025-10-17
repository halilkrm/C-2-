#include <iostream>

using namespace std;

// anastasmumsatsana\0
// p               q


int main() {
    
    cout<< "lutfen bir kelime giriniz: "<< endl;
    char c[100];
    cin >> c;
    char *p,*q;
    p = c;
    q = c;
    while(*q !='\0'){
        q++; // dizginin sonu
    }
    q--; // Dizginin son elemanı
    bool palindrome = true;
    while(q>p){
        if(*p != *q){
            bool palindrome = false;
        }
        p++;
        q--;
   
        
    }
    if(palindrome)
        cout<< "Girilen dizgi palindromdur"<< endl;
    else
        cout<<"girilen dizgi palindrome degildir."<< endl;
}

