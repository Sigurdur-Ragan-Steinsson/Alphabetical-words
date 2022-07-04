#include <iostream>
#include <string>

using namespace std;

class AlphabeticalOrder{
public:
AlphabeticalOrder(string sentence);
void printwords();

private:
string lowerAl = "abcdefghijklmnopqrstuvwxyz";
string finalWord = "";
string phrase = "";
};

AlphabeticalOrder::AlphabeticalOrder(string sentence){
  // forces input into lower case
  for(int i = 0; i < sentence.length(); i++){
    phrase += tolower(sentence[i]);
  }
  //forces a space on so index doesn't go over
  phrase += ' ';
  //just so that in future you could use original string if needed
  string preserveString;
  preserveString = sentence;
  
  for(int x=0; x<26; x++)
    {
      while(phrase.find(lowerAl[x])<phrase.length()){
        finalWord+=lowerAl[x];
        phrase.erase(phrase.find(lowerAl[x]),1);}
    }
  for(int i = 0; i < phrase.length(); i++){
    if(isalpha(phrase[i]) == 0){
      finalWord += phrase[i];
    }
  }
}
  
// lowerAl

  
  // for(int x = 0; x < phrase.length(); x++){
  //   if((isalpha(phrase[x]) != 0 ) && (phrase[x] >= finalWord[-1])){
  //     finalWord += phrase[x];
  //   }
  //   if((isalpha(phrase[x]) != 0) && (phrase[x] < finalWord[-1])){
  //     for(int i = 0; i < finalWord.length(); i++){
  //       if(phrase[x] >= finalWord[i] && phrase[x] < finalWord[i + 1]){
  //         finalWord[i] += phrase[x];
  //       }
  //     }
  //   }
  // }
//   for(int y = 0; y < phrase.length(); y++){
//     if(isalpha(phrase[y]) == 0){
//       finalWord += phrase[y];
//     }
//   }
// }
  // int finWordIndex[] = {};
  // int l = 0;
  // int stuck = 0;
  // for(int x = 0; x < phrase.length(); x++){
  //   if((isalpha(phrase[x]) != 0) && (lowerAl.find(phrase[x]) > lowerAl.find(finalWord[-1]))){
  //     finalWord += phrase[x];
  //   }
    
  //   if((isalpha(phrase[x]) != 0) && (lowerAl.find(phrase[x]) < lowerAl.find(finalWord[-1])))
  //     stuck = x;
  //     for(int i = 0; i < finalWord.length(); i++){
  //       finWordIndex[finalWord.length()] += lowerAl.find(finalWord[i]);
  //     }
  //   while(finWordIndex[l] < phrase[x]){
  //     l++;
  //   }
  //   finalWord += finalWord[l];
  //   finalWord[l] = phrase[x];
  // }
  // for(int y = 0; y  < phrase.length(); y++){
  //   if(isalpha(phrase[y]) == 0){
  //     finalWord += phrase[y];
  //   }
  // }


void AlphabeticalOrder::printwords(){
  cout << finalWord << endl;
}

int main() {
  string words;
  cout << "Please enter a word ";
  getline(cin,words);
  AlphabeticalOrder sorted(words);
  sorted.printwords();
}