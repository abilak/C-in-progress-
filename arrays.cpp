#include <iostream> 
template <class T>
int lengthOf(T arr[]) { 
    int size = 0;
    for(T i : arr) { 
        // for each loop
        size++;
    }
    return size;
}
int main() { 
    // array = a data structure that can hold multiple values
    // values are accessed by an index number
    // kinda like a variable that holds multiple values

    std::string cars[] = {"Bugatti Chiron", "Mustang", "Camry", "Corvette", "Camaro"}; // this is a way to create an array
    // we put square brackets after da var, and then we list out the values(pretty much the EXACT SAME) as in java. std::string tells us that the array ONLY STORES STRINGS.
    // if we wanted the array to only contain integers, we would do int numbers[] = {1,2,3,4,5};
    std::cout << cars << '\n'; // this gives us a weird string, which is a memory address of where our array is
    // we need a special method to display an array

    std::cout << cars[0] << '\n'; // the first element of the array is represented by index number 0
    // to select a specific value from an array, we do var[index#
    
    std::cout << cars[3] << '\n'; // this gets the 4th car in the array(with an index of 3, as we start from 0)

    // what if we want to change the value in an array? we can do that

    cars[1] = "Lucid Gravity"; // cars[1] is accessing the second element, and then the equals sign is telling the computer that we want to now equal this to a new value, namely, "Lucid Gravity"


    std::cout << cars[1] << '\n';
    
    // IMPORTANT NOTE: Arrays can only contain values of the same data type. It is not possible to make an array in C++ like this: 
    // stuff = {"Pizza", 9522, false, 3.256}

    // if we don't know wat we want to place in an array, we can declare it and fill it in later

    std::string foods[5]; // [5] means there will be 5 elememnts
    
    foods[0] = "peetsa";
    foods[1] = "french fries"; // assigning values
    foods[2] = "coke"; 
    foods[3] = "pasta";
    foods[4] = "garlic twist";
    std::cout << '[';
    int sizer = lengthOf(foods);
    for(int i = 0; i < sizer; i++) { 
        if(i != sizer-1) { 
            std::cout << foods[i] << ", ";
        }
        else { 
            std::cout << foods[i] << '] \n';
        }
    }    

    return 0;
}