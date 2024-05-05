#include <iostream> 

int main() { 
    /* 
    loop() { 
        loop() { 

        }
    }

    loops inside loop
    */

   for(int i = 0; i < 3; i++) { 
    for(int j = 0; j <= 10;j++) { 
        std::cout << j << " ";
    }
   } // the outer loop tells to do the inner loop three times
   // the inner loop counts to 10
   // so we are counting from 0-10 three times

   // another use: 

   std::cout << '\n';

   int rows, cols; 
   char symbol;
   std::cout << "Enter # of rows: "; 
   std::cin >> rows; 

   std::cout << "Enter # of columns: "; 
   std::cin >> cols; 

   std::cout << "Enter a symbol: ";

   std::cin >> symbol;

   for(int i = 0; i<rows; i++) { 
    for(int j = 0; j<cols; j++) {
        std::cout << symbol;
    }
    std::cout<<'\n';
   }

}