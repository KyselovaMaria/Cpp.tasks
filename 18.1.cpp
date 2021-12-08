#include <iostream>
#include <string>

namespace MM {
template<typename T>
T max(T a, T b){
    if(a>b) 
        return a;
    return b;
}
}

int main() {
    int a=3,b=4;
    int x=MM::max(a, b);
    std::cout<<x<<std::endl;
    long long unsigned a1=6L,b1=7L;
    long long unsigned x1=MM::max(a1, b1);
    std::cout<<x1<<std::endl;
    std::string s1("aaaa");
    std::string s2("bbbb");
    std::string s=MM::max(s1, s2);
    std::cout<<s<<std::endl;
    return 0;
}