#include <iostream> 

double square(double length) { 
    return length*length; // instead of using "void", we use double, as that is the data type of what we are returning
}
double cube (double length) { 
    return length*length*length;
}

std::string full_name(std::string first, std::string last) { 
    first.append(" ");
    first.append(last);
    return first;
}
int main() { 
    // return = returns a value back to the spot where you called the encompassing function

    double length = 5.0; 

    double area = square(length);
    double volume = cube(length); 
    std::string first = "Peetsa";
    std::string last = "Nation"; 
    std::cout << "Area: " << area << " cm^2 \n";
    std::cout << "Volume: " << volume << " cm^2 \n";
    std::cout << "Full name: " << full_name(first, last);

    return 0; // we are returning 0 to the function
}

