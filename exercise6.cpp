#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int countVowels(const string& str) {
    int iEnum = 0;
    for(char CaseVowel : str) {
        if(tolower(CaseVowel) == 'a' || tolower(CaseVowel) == 'e' || tolower(CaseVowel) == 'i'
        || tolower(CaseVowel) == 'o' || tolower(CaseVowel) == 'u')
            iEnum++;
    }
    return iEnum;
}

int countWords(const string& str) {
    int iEnum = 0;
    bool inWord = false;
    for(char CaseVowel : str) {
        if(isalnum(CaseVowel) && !inWord) {
            inWord = true;
           iEnum++;
        }
        else if(!isalnum(CaseVowel) && inWord) {
            inWord = false;
        }
    }
    return iEnum;
}

string reversing(const string& str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    return reversedStr;
}

string capitalSecLetter(const string& str) {
    string result = str;
    bool capitalize = true;
    for(char& CaseVowel : result) {
        if(isalpha(CaseVowel)) {
            if(capitalize) {
                CaseVowel = toupper(CaseVowel);
                capitalize = false;
            }
            else {
                capitalize = true;
            }
        }
    }
    return result;
}

int main() {
    ifstream textFile("PreparedFile.txt");
    if(textFile.is_open()){
        string writtenStatement;
        while(getline(textFile, writtenStatement)) {
            int vCount = countVowels(writtenStatement);
            cout << "Number of vowels: " << vCount << endl;

            int wCount = countWords(writtenStatement);
            cout << "Number of words: " << wCount << endl;

            string revStatement = reversing(writtenStatement);
            cout << "Reversed statement: " << revStatement << endl;

            string capitalStatement = capitalSecLetter(writtenStatement);
            cout << "Capitalized statement: " << capitalStatement << endl;
        }
        textFile.close();
    }
    else{
        cout << "Cannot open the file.";
        return 1;
    }
    return 0;
}
