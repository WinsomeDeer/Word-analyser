#include <iostream>
#include <fstream>
#include <vector>
#include <thread>
using namespace std;

int unique_words(string word){
    
}

int main(){
    string bible = "KJVbible.txt", quran = "quran.txt";
    ifstream input;

    if(!input.is_open()){
        return -1;
    }

    while(input){
        string line;
        getline(input, line, ':');
    }


    return 0;
}
