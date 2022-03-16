#include <iostream>
using namespace std;

string reverseWord(string str) {
    for (size_t i = 0; i < str.length() / 2; i++) swap(str[i], str[str.length() - i - 1]);
    return str;
}
int main() {
    string q = "Abishek Sankar";
    cout << "\nReversed String : " << reverseWord(q);
    return 0;
}