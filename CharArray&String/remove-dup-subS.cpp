#include <iostream>
using namespace std;

string removeOccurrences(string s, string part) {
    int partLen = part.length();
    string result = "";

    for (int i = 0; i < s.length(); i++) {
        result += s[i];

        if (result.length() >= partLen) {
            bool isMatch = true;
            for (int j = 0; j < partLen; j++) {
                if (result[result.length() - partLen + j] != part[j]) {
                    isMatch = false;
                    break;
                }
            }
            if (isMatch) {
                result.resize(result.length() - partLen);
            }
        }
    }
    return result;
}

int main() {
    string s, part;

    cout << "Enter the main string: ";
    cin >> s;

    cout << "Enter the substring to remove: ";
    cin >> part;

    string result = removeOccurrences(s, part);

    cout << "String after removing occurrences: " << result << endl;

    return 0;
}
