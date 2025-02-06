#include <iostream>
#include <string>
using namespace std;
void replaceSpaces(std::string &str) {
    int n = str.length();
    int countSpaces = 0;

    // First pass: count spaces
    for (int i = 0; i < n; i++) {
        if (str[i] == ' ') {
            countSpaces++;
        }
    }
    cout<<countSpaces<<endl;
    // Calculate new size of the string
    int newLength = n + 2 * countSpaces;
    cout<<"newLength :: "<<newLength<<endl;
    str.resize(newLength);

    // Second pass: replace spaces from the end
    for (int i = n - 1, j = newLength - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            str[j] = '0';
            str[j - 1] = '4';
            str[j - 2] = '@';
            j -= 3;
        } else {
            str[j] = str[i];
            j--;
        }
    }
}

int main() {
    std::string str = "Hello World This is a Test";
    cout<<str.length()<<endl;
    replaceSpaces(str);
    std::cout << str << std::endl; // Outputs: Hello@40World@40This@40is@40a@40Test
    return 0;
}
