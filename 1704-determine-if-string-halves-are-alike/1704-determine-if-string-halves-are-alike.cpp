class Solution {
public:
    bool halvesAreAlike(string s) {
        int c1=0,c2=0;
        int i=0,n=s.size();
        while(i<s.size())
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' ||                s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                 if(i<n/2)
                 {
                     c1++;
                 }
                else
                {
                    c2++;
                }
            }
            i++;
        }
        if(c1==c2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};