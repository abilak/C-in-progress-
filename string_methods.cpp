#include <iostream> 

int main() { 
    std::string name; 
    std::cout << "What is your full name? \n";
    std::getline(std::cin, name); 

    int length = name.length(); // length method gives the length of the strength

    if(name.length() > 12) {
         std::cout << "ur username can't be over 12 chars long \n"; 
    }

    else { 
        std::cout << "Welcome" << " " << name << '\n';
    }

    if(name.empty()) { // name.empty() returns a boolean telling whether there is nothing or not
        std::cout << "Please enter a username \n";
    }

    else { 
        std::cout << "You have entered your username \n";
    }

    name.clear(); // deletes the string
    
    std::cout << "Hello " << name << '\n';
    name = "peetsa";
    name.append("@gmail.com"); // the .append method adds a string to the end of another string
    
    std::cout << name << '\n';

    // we can get the specific character at an index of a string use the at() method 

    std::cout << "The 4th letter of your email is " << name.at(3) << '\n';

    // we can insert a string/character at a given position in the string

    name.insert(0, "Your email is: "); // the first argument is the index that the expression will be inserted into
    // and the second argument is the expression itself
    std::cout << name << '\n';

    // the find() method will return the first index/position of the character that is inputted

    std::cout << name.find('a') << '\n';

    // the erase method deletes a portion of the string

    name.erase(0,3); // (inclusive, exclusive). 

    std::cout << name << '\n';

    // the substr() method will return a substring that goes from the two indices given. (inclusive, exclusive).

    std::cout << name.substr(0,3) << '\n'; // 
    std::cout << name;
    return 0;
}