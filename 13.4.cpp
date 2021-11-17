#include <iostream>
#include <string>
using namespace std;

void f(string &s){
    int end=s.find(" ");
    if(s[s.size()-1]!=' '){
        s.replace(s.size()-1, 1, "");
    }
    while (end!=string::npos) {
        if(s[end-1]!=' '){
            s.replace(end-1, 1, "");
        }
        end=s.find(" ", end+1);
    }
    cout<<s;
}

int main(){
    string s;
    getline(cin, s);
    f(s);
}