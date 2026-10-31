class Solution {
public:
    bool isPalindrome(string s) {
        int debut=0;
        int fin = s.size() - 1;
        bool w=true;
        while(debut<fin){
            if (!isalnum(s[debut])) {
                debut++;
            } else if (!isalnum(s[fin])) {
                fin--;
            } else if (tolower(s[debut]) != tolower(s[fin])) {
                return false;
            } else {
                debut++;
                fin--;
            }
        }
        return w;
    }
};
