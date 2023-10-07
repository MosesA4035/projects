#include <iostream>
#include <string>  
using namespace std;

int GetNumOfNonWSCharacters(const string usrStr) {  
    int counter = 0;  
    for (int i = 0; i < usrStr
    .size(); ++i) { 
        if (usrStr
        .at(i) != ' ' ) { 
            counter++; 
        } 
    }  
  return counter;  
} 

// ---------------------------------------------------------------------------------------------------

int GetNumOfWords(const string usrStr) {   
    int counter = 1;  
    for (int i = 0; i < usrStr
    .size(); ++i) { 
        if (usrStr
        .at(i) == ' ' && usrStr
        .at(i - 1) != ' ') { 
            counter += 1; 
        }
    }  
  return counter; 
} 

// ---------------------------------------------------------------------------------------------------

int FindText(string toFind, const string usrStr) {
    int counter = 0; // if charCounter equals the same letters of the given word increment
    int charCounter = 0;  // if the first letter of the given word is the same increment 
    for (int i = 0; i < usrStr.size(); ++i) { 
        if  (usrStr.at(i) == toFind.at(charCounter)) {  
            charCounter++;
            if (charCounter == toFind.size()) { 
                charCounter = 0;
                counter++;
            } 
        } else if (usrStr.at(i) != toFind.at(charCounter)) {
            charCounter = 0;
        } 
    } 
  return counter; 
} 

// ---------------------------------------------------------------------------------------------------

string ReplaceExclamation(string& usrStr) {
    for (int i = 0; i < usrStr
    .size(); ++i) {
        if (usrStr
        .at(i) == '!' ) {
            usrStr
            .at(i) = '.';
        } 
    } 
    return usrStr
    ;
} 

// ---------------------------------------------------------------------------------------------------

// Function contains a reference to usrStrallowing change and returning back to main without chaning original input
string ShortenSpace(string& usrStr) {     
    string shortSpace;
    for (int i = 0; i < usrStr
    .size(); ++i) {
        if (i == usrStr
        .length()-1) {
            shortSpace += usrStr
            .at(i);
            break;
        } 
        if (usrStr
        .at(i) == ' '  && usrStr
        .at(i + 1) == ' ' ) {
            continue;
        } 
        else {
            shortSpace += usrStr
            .at(i);
        } 
    }  
    usrStr
    = shortSpace; 
  return usrStr
  ;
} 

// ---------------------------------------------------------------------------------------------------


char PrintMenu(string usrStr) { 
    char option;
    string toFind;
    bool menuPrompt = true; 
    
    while (menuPrompt) {  // Loop keeps excuting until user enter character q to quit and returns to Function call in main.
        cout << endl;
        cout << "MENU" << endl;
        cout << "c - Number of non-whitespace characters" << endl;
        cout << "w - Number of words" << endl;
        cout << "f - Find text" << endl;
        cout << "r - Replace all !'s" << endl;
        cout << "s - Shorten spaces" << endl;
        cout << "q - Quit" << endl << endl;

        cout << "Choose an option:";
        cin >> option;

        switch (option) {

        case 'c':
            cout << "Number of non-whitespace characters: " << GetNumOfNonWSCharacters(usrStr) << endl; 
            break;
        case 'w':
            cout << "Number of words: " << GetNumOfWords(usrStr
            ) << endl; // Function call
            break;
         case 'f':
             cin.ignore();
            cout << "Enter a word or phrase to be found:";
            getline(cin, toFind);
            cout << " " << toFind << " " << "counter: " << FindText(toFind, usrStr
            ) << endl; 
            break;
        case 'r':
            cout << "Edited text: " << ReplaceExclamation(usrStr
            ) << endl; // Function call
            break;
         case 's':
            cout << "Edited text: " << ShortenSpace(usrStr
            ) << endl; // Function call
            break;
        case 'q':
            return option; // Returns character q back to Function call in main(); to quit program.
        } // end switch
    } // end while
  }
// -----------------------------    MAIN    ----------------------------------------------------

int main() {
    char option;
    string usrStr;
  
    cout << "Enter a sample text:";
    getline(cin, usrStr);
    cout << "\nYou entered: " << usrStr << endl;
    while (option != 'q') { //Keeps looping allowing Function call PrintMenu(); to execute until user wants to quit   
        option = PrintMenu(usrStr);   // calls Function Printmenu(); , recieves value when user wants to quit
    } 
    return 0;
} 
