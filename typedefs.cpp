#include <iostream> 
#include <vector> 
typedef std::vector<std::pair<std::string, int> > pairlist_t; // we made a very complicated datatype much simpler
// it is a naming convention to use _t after a typedef keyword
typedef std::string string_t;
int main() { 
    // typedef = reserved keyword to create an additional name for a data type. it's like a nickname.
    // so...
    // instead of saying 
    // std::vector<std::pair<std::string, int>> pairlist;

    // we can say

    pairlist_t pairlist;

    string_t name = "peetsa"; 

    std::cout << name << "\n";

    return 0; 
}