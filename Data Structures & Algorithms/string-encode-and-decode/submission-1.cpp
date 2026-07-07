class Solution {
   public:
    string encode(vector<string>& strs) {
        string result;
        for (string& s : strs) {
            result += to_string(s.length()) + '#' + s;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while (i< s.length())
        {
            int hash_pos = s.find('#',i);

            int length = stoi(s.substr(i, hash_pos - i));

            i = hash_pos + 1;

            result.push_back(s.substr(i,length));

            i = i + length;

        }
        
        return result;
    }
};
