class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        int i = 0;
        int j = 0;
        bool flag = true;
        
        while (i < word1.length() && j < word2.length()) {
            if (flag) {
                result += word1[i];
                i++;
            } else {
                result += word2[j];
                j++;
            }
            flag = !flag;
        }
        
        while (i < word1.length()) {
            result += word1[i];
            i++;
        }
        
        while (j < word2.length()) {
            result += word2[j];
            j++;
        }
        
        return result;
    }
};