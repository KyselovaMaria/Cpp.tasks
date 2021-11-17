#include <iostream>
#include <string>
#include <sstream>
using namespace std;


int main(){
    string s, s1;
    char el;
    cout << "Input string :" << endl;
    getline(cin, s);
    cout << "Input element to delete :" << endl;
    cin >> el;
    for (int i = 0; i < s.length(); i++){
        if (s[i] != el && s[i] != el){
            s1 += s[i];
        }
    }
    cout << endl;
    cout << "Res : " << s1 << endl;
    return 0;
}