#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string sentence, word, firstWord;
    int vowels = 0;
    int words = 0;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Number of characters: " << sentence.length() << endl;

    stringstream ss(sentence);

    while (ss >> word) {
        words++;

        if (words == 1)
            firstWord = word;
    }

    cout << "Number of words: " << words << endl;

    for (int i = 0; i < sentence.length(); i++) {
        char ch = tolower(sentence[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u') {
            vowels++;
        }
    }

    cout << "Number of vowels: " << vowels << endl;

    string upperSentence = sentence;

    for (int i = 0; i < upperSentence.length(); i++) {
        upperSentence[i] = toupper(upperSentence[i]);
    }

    cout << "Uppercase: " << upperSentence << endl;

    string reversedWord = firstWord;
    reverse(reversedWord.begin(), reversedWord.end());

    if (firstWord == reversedWord)
        cout << "First word is a palindrome" << endl;
    else
        cout << "First word is not a palindrome" << endl;

    return 0;
}
