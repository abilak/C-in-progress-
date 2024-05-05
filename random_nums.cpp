#include <iostream> 
#include <ctime>
int main() { 
    // generates pseudo-random numbers (close)

    srand(time(NULL)); //  time(NULL) is the seed
    int num = (rand() % 6) + 1;

    switch(num) { 
        case 1: 
            std::cout << "You won a peetsa!";
            break;
        case 2: 
            std::cout << "You won 2 peetsas!";
            break; 
        case 3: 
            std::cout << "You won 3 peetsas!";
            break; 
        case 4: 
            std::cout << "You won 4 peetsas!";
            break; 
        case 5: 
            std::cout << "You won 5 peetsas!";
            break; 
        case 6: 
            std::cout << "You won 6 peetsas!";
            break; 
    }
    return 0;
}