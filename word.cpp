#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <thread>
#include <sstream>
#include <unordered_map>
using namespace std;

void unique_words(string x, unordered_map<string, int> m){
    stringstream line(x);
    string word;
    while(line >> word){
        m[word]++;
    }
    return;
}

int main(){
    string bible = "KJVbible.txt.txt", quran = "quran.txt";
    ifstream input;

    input.open(bible);

    if(!input.is_open()){
        return -1;
    }

    unordered_map<string, int> mp;

    while(input){
        string line;
        getline(input, line);
        unique_words(line, mp);
    }

    return 0;
}
