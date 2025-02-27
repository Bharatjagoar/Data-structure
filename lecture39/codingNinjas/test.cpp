#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

void modifyString(std::string str) {
    str += " - modified";
    std::cout << "Inside function: " << str << std::endl;
}

int main() {
    std::string original = "Original String";
    swap(original[1],original[3]);
    modifyString( original );
    std::cout << "Outside function: " << original << std::endl;
    return 0;
}
