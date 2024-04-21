// problem link
// https://leetcode.com/contest/weekly-contest-394/problems/count-the-number-of-special-characters-i/

class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char> lower, upper;
        for(char i : word){
            if(i >= 97 && i <= 112){
                lower.insert(i);
            }else{
                upper.insert(i);
            }
        }
        int count = 0;

        for(char i : upper){
            if(lower.contains(tolower(i))){
                count++;
            }
        }

        return count;

    }
};
