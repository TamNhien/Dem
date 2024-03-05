#include <iostream>
#include <string>

using namespace std;

int main() {
    string userInput;
    cout << "Nhap mot cau bat ky: ";
    getline(cin, userInput);

    int wordCount = 0, charCount = 0;
    for (char c : userInput) {
        if (c == ' ') {
            wordCount++;
        }
        else {
            charCount++;
        }
    }
    wordCount++; // Đếm từ cuối cùng
    cout << "So tu trong cau la : " << wordCount << endl;
    cout << "So ky tu trong cau la : " << charCount << endl;

    return 0;
}
