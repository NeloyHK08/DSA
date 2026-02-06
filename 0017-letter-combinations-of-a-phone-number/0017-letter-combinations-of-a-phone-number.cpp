class Solution {
private:
    vector<string> answer;
    string digits;

    string getLetters(char digit){
        switch(digit){
            case '2':
            return "abc";
            case '3':
            return "def";
            case '4':
            return "ghi";
            case '5':
            return "jkl";
            case '6':
            return "mno";
            case '7':
            return "pqrs";
            case '8':
            return "tuv";
            case '9':
            return "wxyz";
        }
        return "";
    }
    
    void generateString(int i, string &current){
        if(i == digits.length()){
            answer.push_back(current);
            return;
        }
        //place all posiible char at ith place
        string letters = getLetters(digits[i]);
        for(int j=0; j<letters.length(); j++){
            current.push_back(letters[j]);
            generateString(i+1,current);
            current.pop_back();
        }
    }


public:
    vector<string> letterCombinations(string digits) {
        //set the digits
        this->digits = digits;

        //clear the answer vector
        answer.clear();

        //generate strings
        string current = "";
        generateString(0, current);

        return answer;
    }
};