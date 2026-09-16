class Solution
{
public:
    bool isAlpha(char c)
    {
        if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            return true;
        }

        return false;
    }

    bool isNumeric(char c)
    {
        if(c >= '0' && c <= '9')
        {
            return true;
        }

        return false;
    }

    bool isAlphaNumeric(char c)
    {
        if(isAlpha(c) || isNumeric(c))
        {
            return true;
        }

        return false;
    }

    bool isPalindrome(string s)
    {
        int i = 0;
        int j = s.length() - 1;

        while(i < j)
        {
            if(!isAlphaNumeric(s[i]))
            {
                i++;
                continue;
            }

            if(!isAlphaNumeric(s[j]))
            {
                j--;
                continue;
            }

            if(!((isAlpha(s[i]) && isAlpha(s[j])) ||
                 (isNumeric(s[i]) && isNumeric(s[j]))))
            {
                return false;
            }

            if(s[i] != s[j] &&
               s[i] != (s[j] - 32) &&
               (s[i] - 32) != s[j])
            {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};