#include <iostream> 

namespace first { 
    int x  = 1; 
}

namespace second { 
    int x = 2;
}

int main() { 
    using namespace first; // by using this namespace, the first print statement will now assueme the x in the first namespace
    // to display the x in this method, we would use std::
    int x = 0; 
    std::cout << x << '\n'; 

    std::cout << second::x << '\n';

    return 0; 
}