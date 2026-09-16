class Solution {
public:
    bool isAlpha(char c)
    {
        if( (c>=65 && c<=90) || (c>=97 && c<=122) )
        {
            return true;
        }
        return false;
    }

    bool isNumeric(char c)
    {
        if(c>=48 && c<=57) 
        {
            return true;
        }

        return false;
    }
    bool isAlphaNumeric(char c)
    {
        if( isAlpha(c) || isNumeric(c) )
        {
            return true;
        }

        return false;
    }
    bool isPalindrome(string s) 
    {
        int i=0,j=s.length()-1;

        while(i<j)
        {
            cout<<"s[i]="<<s[i]<<" and s[j]-32="<<s[j]-32<<" i="<<i<<" j="<<j<<" s[j]="<<s[j]<<endl;

            if(!isAlphaNumeric(s[i]))
            {
                cout<<"111"<<endl;
                i++;
                continue;
            }

            if(!isAlphaNumeric(s[j]))
            {
                cout<<"222"<<endl;
                j--;
                continue;
            }

            if( !( ( isAlpha(s[i]) && isAlpha(s[j]) ) || ( isNumeric(s[i]) && isNumeric(s[j])  )) )
            {
                return false;
            }
            cout<<"333"<<endl;
            if(s[i]!=s[j] && s[i]!=(s[j]-32) && (s[i]-32)!=s[j])
            { 
                cout<<"444"<<endl;
                return false;
            }


            i++;
            j--;
        }

        return true;
    }
};
