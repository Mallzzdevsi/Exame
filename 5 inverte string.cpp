#include <iostream>
#include <string>

using namespace std;

void inverteString(string& s){
    int n = s.length();
    for(int i=0; i<n/2; i++){
        char temp = s[i];
        s[i] = s[n-1-i];
        s[n-1-i] = temp;
    }
}

int main(){
    string str;
    cout << "Digite uma string: ";
    getline(cin, str);
    
    cout << "String original: " << str << endl;
    inverteString(str);
    cout << "String invertida: " << str << endl;

    return 0;
}
