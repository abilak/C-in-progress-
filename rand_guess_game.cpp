#include <iostream> 
#include <ctime> 

int main() {
    srand(time(NULL));
    int num = (rand() % 100)+1;
    std::cout << "********* NUMBER GUESSING GAME ************** \n";
    int num_guesses = 0; 
    int guess;
    do{ 
        std::cout << "Guess a number between 1 and 100!: \n";
        std::cin >> guess;
        num_guesses++;
        if(guess == num) { 
            std::cout << "Good job! It took you " << num_guesses << " guesses to win! \n";
        }

        else if(guess > num) { 
            std::cout << "Too high! \n";
        }

        else { 
            std::cout << "Too low! \n";
        }
    }while(guess != num);
    return 0; 
}