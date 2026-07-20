#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    int countWords(string sentence){
        bool isWord = false;
        bool firstWord = true;
        int sentenceWords =0;
        for(char c : sentence){
            // cout<<c;
            if(c != (' ') && firstWord){sentenceWords++; firstWord=false;}
            if(c == (' ') && isWord){
            sentenceWords++;
            isWord = false;
            }
            else{
                isWord = true;
            }
        }
        return sentenceWords;
    }
    int mostWordsFound(vector<string>& sentences) {
        int j=sentences.size()-1;
        int nthSentenceWithMaxChars=0;
        for(int i=0; i< sentences.size(); ++i){
            int tempMax =0;
            if(j>=i){
            tempMax = max(countWords(sentences[i]),countWords(sentences[j]));
            // cout<<"Here: "<< countWords(sentences[i])<<" "<<countWords(sentences[j])<<"\n\n";
            }
            if(tempMax >nthSentenceWithMaxChars) nthSentenceWithMaxChars=tempMax;
            j--;
        }
        return nthSentenceWithMaxChars;
    }
};
int main(){
    vector<string> vect = {"This is string one.","Another is also here.", "Followed by the 3rd string.","This string Contains maximum number of words amid all these 12 words."};
    Solution s;
    cout<<s.mostWordsFound(vect);
    return 0;
}