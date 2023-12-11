#include <fstream>
#include <iostream>
#include <string>

int main(){
    std::ifstream my("example.csv");
    std::string line;
    getline(my, line);
    std::cout << line << '\n';
    while(getline(my, line)){
        std::cout << line << '\n';
    }
    return 0;
}