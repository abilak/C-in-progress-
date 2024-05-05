#include <iostream> 
#include <fstream> 
#include <cstring>
#include <boost/algorithm/string.hpp>

int main() { 
    std::ifstream myfile; myfile.open("/Users/abilakanti/Downloads/diabetes_real_data.csv");
    std::string data;
    double x[27994][10];
    int i = 0;
    while (std::getline (myfile, data)) { 
        i++;
        std::string line = data;
        
    }



    return 0; 

}