#include <iostream> 

int main() { 
    // break = break out of a lopo
    // continue = skip da current iteration

    for(int i = 1; i < 21; i++){ 
        if(i==13){ 
            break; // breaks out of the llop, and does not finish the rest of the iterations
        }
        std::cout << i << '\n';
    }

    // however, instead, if we just wanted to skip 13

    // we could use continue
    std::cout << "******************************** \n";
    for(int i = 1; i < 21; i++ ) { 
        if(i==13){ 
            continue; // when we get to 13, just go to 14, and don't print 13. skips the rest of the code in THAT ITERATION/CURRENT ITERATION
        }   
        std::cout << i << '\n';
    }

    return 0;
}