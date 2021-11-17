#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string f(const string &s){
    string s1=s;
    size_t p1=s.find(".");
    size_t p2=s.find(".",p1+1);
    if(p1==string::npos){
        while (s1.length()>0 && isspace(s1[0])) {
            s1=s1.substr(1);
        }
        return s1;
    }
    if(p2==string::npos){
        return s.substr(p1);
    }
    return s.substr(0,p1+1)+s.substr(p2,s.length());
}
int main() {

    string s;
    getline(cin, s);
    string s1=f(s);
    cout<<s1<<endl;
    return 0;
}