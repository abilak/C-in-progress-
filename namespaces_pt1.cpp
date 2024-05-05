#include <iostream> 

namespace first { 
    int x  = 1; // we have another variable named x in a different namespace, so we can do this
}

namespace second { 
    int x = 2;
}

int main() { 
    /* 
    A namespace provides a solution for preventing name conflicts in large projects. Each entity uses a unique name. A namespace 
    allows for identically named entities as long as the NAMESPACES are different.
    */

    int x = 0; 
    // if we then typed "int x  = 1", this would be incorrect, as we just declared x to be 0. we can't make the same variable that is 0, 1

    // however, using namespaces, we can have two entities that share the same name

    std::cout << x << '\n'; // if we don't specify which namespace we are using, tje local one is used 

    std::cout << first::x << '\n'; // by typing "first::" as a prefix, we are now using the "first" namespace and not  the "std" namespace
    std::cout << second::x << '\n';

    // for more info, go to namespaces_pt2.cpp, to see another demonstration

    return 0; 
}