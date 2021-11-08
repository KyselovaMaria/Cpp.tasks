#include <iostream>
using namespace std;
//10.1a 10.3

struct Date {
    int day;
    int month;
    int year;
    int status;
};

int checkDate(const Date* x){
    int mas[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    
    if(x->year<1900||x->year>2200)return -1;
    if(x->month<1||x->month>12)return -2;
    if(x->day<0||x->day>mas[x->month-1])return -3;
    
    return 0;
}

struct Date input(){
    Date a;
    cout<<"Enter day: ";
    cin >> a.day;
    cout<<"Enter month: ";
    cin >>a.month;
    cout<<"Enter year: ";
    cin >> a.year;
    
    return a;
}

void print(Date a) {
    cout << a.day << "." << a.month << "."<< a.year << endl;
}

bool leapYear(int year){
    return (year%4==0 and year%100!=0);
}

Date tomorrow(const Date x){
    int mas[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    Date res=x;
    if(leapYear(x.year)) mas[1]++;
    if(x.day==mas[x.month-1]){
        if(x.month==12){
            res.day=1;
            res.month=1;
            res.year++;
            return res;
        }
        res.day=1;
        res.month++;
        return res;
    }
    res.day+=1;
    
    return res;
}

int main() {
 
    Date a = input();
    print(a);
    a = tomorrow(a);
    print(a);

    return 0;
}