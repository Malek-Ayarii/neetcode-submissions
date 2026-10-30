class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for (string& s:strs){
            res+=to_string(s.size());
            res+='#';
            res+=s;
        }
        return res;
    }

    vector<string> decode(string s) {
    vector<string> res;
    int i = 0;
    while (i < s.size()) {
        int j = s.find('#', i);          // position du '#'
        int len = stoi(s.substr(i, j - i));
        res.push_back(s.substr(j + 1, len));
        i = j + 1 + len;                 // saute le '#' et le contenu
    }
    return res;
}
};
