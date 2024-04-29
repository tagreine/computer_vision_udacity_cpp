#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

constexpr int string_hash( const string& str ) {
    int hash = 0;
    for ( size_t i = 0; i < str.size(); ++i) {
        hash = hash * 31 + static_cast<int>(str[i]);
    }
    return hash;
}

// try to build a switch with string as input 
int main()
{

}