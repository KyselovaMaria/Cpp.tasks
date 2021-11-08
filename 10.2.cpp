#include <iostream>
using namespace std;
//10.1b 10.2

struct ChessField
{
    char hor;
    int vert;
};

void input(ChessField* ch)
{
    do {
        cout << "Input horizontal coord (abcdefgh): ";
        cin >> ch->hor;
    } while (ch->hor > 'h' || ch->hor < 'a');

    do {
        cout << "Input vertical coord (12345678): ";
        cin >> ch->vert;
    } while (ch->vert > 8 || ch->vert < 1);

}

bool func(ChessField ch1, ChessField ch2)
{
    return (ch1.vert - ch2.vert == ch1.hor - ch2.hor) || (ch1.hor == ch2.hor) || (ch1.vert == ch2.vert) ;
}

int main()
{
    ChessField ch1, ch2;
    input(&ch1); 
    input(&ch2);
    cout << func(ch1, ch2) << endl;
}