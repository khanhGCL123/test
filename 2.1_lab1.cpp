#include <iostream>
#include <string>

using namespace std;

string encryptMessage(const string& message, int key) {
    string encryptedMessage = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            char encryptedChar = ((c - base + key) % 26) + base;
            encryptedMessage += encryptedChar;
        }
        else {
            encryptedMessage += c;
        }
    }
    return encryptedMessage;
}

string decryptMessage(const string& message, int key) {
    return encryptMessage(message, 26 - key); // Decrypting is the same
}

int main() {
    
    int n; 
    int key;
    string message;
    cout << "Please,choose 1 or 2  " << endl;
    cout << "1.To Encrypted Message " << endl; 
    cout << "2.To Decrypted Message " << endl; 
    cin >> n; 
    string encrypted;
    string decrypted;

    switch (n)
    {
        
    case 1: 
        cout << "Enter the key: ";
        cin >> key;
        cin.ignore(); // Ignore the newline character
        cout << "Enter the message: ";
        getline(cin, message);
        encrypted = encryptMessage(message, key);
        cout << "Encrypted message: " << encrypted << endl;
        break;
    case 2:
        cout << "Enter the key: ";
        cin >> key;
        cin.ignore(); // Ignore the newline character
        cout << "Enter the message: ";
        getline(cin, message);
        decrypted = decryptMessage(message, key);
        cout << "Decrypted message: " << decrypted << endl;
        break; 
    
    }

    
    


   

  

    return 0;
}