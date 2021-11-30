#include <iostream>
#include <fstream>
using namespace std;

bool in(char s){
    string ss=".,?!";
    if(s==' ')
        return true;
    for(char sign: ss){
        if(s==sign)
            return true;
    }
    return false;
}

string inver(const string &s){
    string res="";
    size_t n=s.size()-1;
    for(int i=0;i<=n;i++){
        res.push_back(s[n-i]);
    }
    return res;
}

int main() {
    string line;
    ifstream infile("file_in.txt");
    ofstream outfile("file_out.txt");
    string ans="";
    string word="";
    string text;
    char sign;
    if(infile.is_open()){
        while (getline(infile,text,'\n')) {;
            for (int i=0;i<text.size();++i){
                sign=text[i];
                if (in(sign)){
                    if(word!=""){
                        ans=inver(word);
                        outfile<<ans;
                    }
                    outfile<<sign;
                    word="";
                }
                else{
                    word.push_back(sign);
                }}}
        infile.close();
    }
    outfile.close();
    return 0;
}