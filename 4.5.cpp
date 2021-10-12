#include <iostream>
using namespace std;

int fact(int n)
{
    int f = 1;
    if(n%2==0)
    {
       for(int i=2; i<=n; i+=2)
       {
           f*=i;
       }
    }
    else
    {
        for(int i=1; i<=n; i+=2)
       {
           f*=i;
       }
    }
    return f;
}
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    cout <<"n!!= "<<fact(n)<<endl;
    return 0;
}