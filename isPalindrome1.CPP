class Solution
{
public:
    char lcase(char ch)
    {

        if (ch >= 'a' && ch <= 'z' || (ch >= 0 && ch <= 9))
            return ch;
        else
        {
            ch = ch - 'A' + 'a';
            return ch;
        }
    }

    bool isPalindrome(string s)
    {
        int start = 0, end = s.size() - 1;
        while (start <= end)
        {

            if (isalnum(s[start]) == 0)
                start++;
            else if (isalnum(s[end]) == 0)
                end--;
            else if (lcase(s[start]) != lcase(s[end]))
                return 0;
            else
            {
                start++;
                end--;
            }
        }
        return 1;
    }
};
