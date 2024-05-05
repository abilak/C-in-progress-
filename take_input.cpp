#include <iostream> 

int main()  { 
    // cout <<  = for output
    // cin >> = for input
    std::string name; // declaration
    int age;
    std::string full_name;
    std::cout << "What's your name?" << '\n'; // asking the question
    std::cin >> name; // setting the input equal to name

    std::cout << "How old are you?: " << '\n'; // asking the question
    std::cin >> age; 

    std::cout << "What's your full name?" << '\n';
    std::getline(std::cin >> std::ws, full_name); // we use the getline() function to take in strings with spaces. it just literally gets everything on the line
    // we have to add std::ws, because there is a '\n i nthe int, which getline takes in. so std::ws (whitespace) gets rid of it
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old." << '\n'; 

    std::cout << "Hello " << full_name << '\n';

    return 0;
}