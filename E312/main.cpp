#include <iostream>
#include <fstream>

/* L33T speak exercise
 * For this challenge we'll be using a subset of American Standard L3375p34k:
 * A -> 4
 * B -> 8
 * E -> 3
 * G -> 6
 * I -> |
 * L -> 1
 * M -> |\/|
 * N -> |\|
 * O -> 0
 * S -> 5
 * T -> 7
 * V -> \/
 * W -> `//
 * Your challenge, should you choose to accept it, is to translate to and from L33T.
 *
 * You'll be given a word or a short phrase, one per line, and asked to convert it from L33T or to L33T. Examples:
 * Example input :
    * storm or 31337
 *
 * Example output:
    * 31337 -> eleet
    * storm -> 570R|\/|
*/

////General program structure
// If word is just characters do
    // Convert to L33T
    // For each character in word, make new word with L33T characters using the legend

// Else do
    // Convert to normal
    // For each L33T character, change it to normal using the legend

int main() {
    std::ifstream inputFile;
    std::ofstream outputFile;
    std::string word, output;
    int counter;
    char c;
    inputFile.open ("C:\\Users\\stsgsa2\\Desktop\\input.txt");
    outputFile.open("C:\\Users\\stsgsa2\\Desktop\\output.txt");

    inputFile >> std::ws;

    while(inputFile.is_open()) {
        while(std::getline(inputFile, word)) {
            counter = 0;
            for(int i = 0; i < word.length(); i++) {
                if(isalpha(word[i]) || isspace(word[i])) counter++;
            }
            if(counter == word.length()) {                          //if word is all characters (normal)
                std::cout << "Converting word to L33Tspeak" << std::endl;
                for(int i = 0; i < word.length(); i++) {
                    if(word[i] == 'A' || word[i] == 'a') {
                        output += '4';
                    }
                    else if(word[i] == 'B' || word[i] == 'b') {
                        output += '8';
                    }
                    else if(word[i] == 'E' || word[i] == 'e') {
                        output += '3';
                    }
                    else if(word[i] == 'G' || word[i] == 'g') {
                        output += '6';
                    }
                    else if(word[i] == 'I' || word[i] == 'i') {
                        output += '|';
                    }
                    else if(word[i] == 'L' || word[i] == 'l') {
                        output += '1';
                    }
                    else if(word[i] == 'M' || word[i] == 'm') {
                        output += "|\\/|";
                    }
                    else if(word[i] == 'N' || word[i] == 'n') {
                        output += "|\\|";
                    }
                    else if(word[i] == 'O' || word[i] == 'o') {
                        output += '0';
                    }
                    else if(word[i] == 'S' || word[i] == 's') {
                        output += '5';
                    }
                    else if(word[i] == 'T' || word[i] == 't') {
                        output += '7';
                    }
                    else if(word[i] == 'V' || word[i] == 'v') {
                        output += "\/";
                    }
                    else if(word[i] == 'W' || word[i] == 'w') {
                        output += "`//";
                    }
                    else {
                        output += word[i];
                    }
                }
            }
            else {
                std::cout << "Converting L33Tspeak to normal text" << std::endl;
                for(int i = 0; i < word.length(); i++) {
                    if(word[i] == '4' && i == 0) {
                        output += 'A';
                    }
                    else if(word[i] == '4'){
                        output += 'a';
                    }
                    else if(word[i] == '8' && i == 0) {
                        output += 'B';
                    }
                    else if(word[i] == '8'){
                        output += 'b';
                    }
                    else if(word[i] == '3' && i == 0) {
                        output += 'E';
                    }
                    else if(word[i] == '3'){
                        output += 'e';
                    }
                    else if(word[i] == '6' && i == 0) {
                        output += 'G';
                    }
                    else if(word[i] == '6'){
                        output += 'g';
                    }
                    else if(word[i] == '1' && i == 0) {
                        output += 'L';
                    }
                    else if(word[i] == '1'){
                        output += 'l';
                    }
                    else if(word[i] == '|' && word[i+2] == '/' && i == 0) {
                        output += 'M';
                        i += 3;
                    }
                    else if(word[i] == '|' && word[i+2] == '/') {
                        output += 'm';
                        i += 3;
                    }
                    else if(word[i] == '|' && word[i+2] == '|' && i == 0) {
                        output += 'N';
                        i += 2;
                    }
                    else if(word[i] == '|' && word[i+2] == '|') {
                        output += 'n';
                        i += 2;
                    }
                    else if(word[i] == '|' && i == 0) {
                        output += 'I';
                    }
                    else if(word[i] == '|'){
                        output += 'i';
                    }
                    else if(word[i] == '0' && i == 0) {
                        output += 'O';
                    }
                    else if(word[i] == '0') {
                        output += 'o';
                    }
                    else if(word[i] == '5' && i == 0) {
                        output += 'S';
                    }
                    else if(word[i] == '5') {
                        output += 's';
                    }
                    else if(word[i] == '7' && i == 0) {
                        output += 'T';
                    }
                    else if(word[i] == '7') {
                        output += 't';
                    }
                    else if(word[i+1] == '/' && i == 0) {
                        output += 'V';
                    }
                    else if(word[i+1] == '/') {
                        output += 'v';
                    }
                    else if(word[i] == '`' && i == 0) {
                        output += 'W';
                    }
                    else if(word[i] == '`') {
                        output += 'w';
                    }
                    else {
                        output += word[i];
                    }
                }
            }
            //print output
            outputFile << output << std::endl;
            output = "";
        }
        inputFile.close();
    }

}