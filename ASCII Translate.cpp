#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void TranslateToASCII(string fileName) {
    fstream myFile;
    myFile.open(fileName, ios::out);
    if (myFile.is_open())
    {
        cout << "Enter the text: \n";
        string line;
        getline(cin,line);
        for (int i = 0; i < line.length(); i++)
        {
            char x = line.at(i);
            myFile << int(x) << endl;
        }
        myFile.close();
    }
}
void TranslateToEnglish(string fileName) {
    fstream myFile;
    myFile.open(fileName, ios::in);
    if (myFile.is_open()) {
        string line;
        while (getline(myFile,line))
        {
            cout << char(stoi(line));
        }
    }
    myFile.close();
}

int main()
{
    cout << "Please enter the name of the file: ";
    string fileName;
    getline(cin, fileName);
    cout << "What do you want to do?\n";
    cout << "1 - Translate english to ASCII\n";
    cout << "2 - Translate ASCII to english\n";
    int option=0;
    cin >> option;
    cin.ignore();
    switch (option)
    {
    case 1:TranslateToASCII(fileName); break;
    case 2:TranslateToEnglish(fileName); break;
    default:
        cout << "Not a valid option!\n"; break;
    }

    system("pause>0");
}
