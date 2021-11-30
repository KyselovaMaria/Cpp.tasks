#include <iostream>
#include <string>
#include <sstream>
#define N 100
using namespace std;

//a c
void find_longest_word(string words[N], string shortest_words[N], int& words_number, int& shortest_words_number){

    string shortest_word = words[0];

    for (int i=1;i<words_number;i++){
        if (words[i].length()<shortest_word.length()){
            shortest_word = words[i];
        }
    }
    //a
    cout<<endl<<"First shortest word:"<<endl;
    cout<<shortest_word;
    for (int i=0;i<words_number;i++)
       if (words[i].length()==shortest_word.length()){
           shortest_words[shortest_words_number] = words[i];
           shortest_words_number+=1;
       }

}

int main(){

    cout<<"Input string: "<<endl;
    string s;
    getline(cin,s);

    stringstream ss;

    ss << s;

    int words_number=0;
    int shortest_words_number = 0;

    string* words = new string[N];
    string* shortest_words = new string[N];

    while (ss.good()) {
        ss >> words[words_number];
        words_number+=1;
        if (ss.fail())
            break;
    }

    find_longest_word(words,shortest_words,words_number,shortest_words_number);
    //c
    cout<<endl<<"All shortest words:"<<endl;

    for (int i=0;i<shortest_words_number;i++){
        cout<<shortest_words[i]<<endl;
    }


    delete[] words;
    delete[] shortest_words;

    return 0;
}
