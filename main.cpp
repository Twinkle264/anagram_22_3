#include <iostream>
#include <map>
#include <string>

using namespace std;

bool isAnagram(const string &str1, const string &str2) {
    if (str1.length() != str2.length()) {
        return false;
    }

    map<char, int> charCount;
    for (char c: str1) {
        charCount[c]++;
    }

    for (char c: str2) {
        charCount[c]--;
    }

    for (const auto &pair: charCount) {
        if (pair.second != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string str1, str2;
    cout << "Enter the first word: ";
    cin >> str1;
    cout << "Enter the second word: ";
    cin >> str2;

    if (isAnagram(str1, str2)) {
        cout << "Yes! The first word is an anagram of the second." << endl;
    } else {
        cout << "No! The first word is not an anagram of the second." << endl;
    }

    return 0;
}
