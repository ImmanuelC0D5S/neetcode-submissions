class Solution {
public:
    bool isPalindrome(string str) 
    {
        //Remove Spaces and Symbols
        string s;

        for(char c : str)
        {
            if (isalnum(c))
            {
                s+=tolower(c);
            }
        }

        cout<<s<<endl;

       char left = 0;
       char right = s.size() - 1 ;

       if (s.empty()) return true;
       for(int i = 0; i < s.length() ; i++)
       {
        if (s[left] == s[right])
        {
            left++;
            right--;
        }
        else
        {
            return false;
        }
       } 
       return true;
    }
};
