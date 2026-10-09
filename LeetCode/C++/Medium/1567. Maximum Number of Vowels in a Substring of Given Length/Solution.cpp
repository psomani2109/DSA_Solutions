class Solution {
public:
    bool isVowel(char ch)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            return true;
        else
            return false;
    }
    int maxVowels(string s, int k) {
        int count=0, max_count=0;
        for(int i=0; i<k; i++)
        {
            if(isVowel(s[i]))
                count++;
        }
        max_count=count;
        for(int i=1; i+k<=s.size(); i++)
        {
            if(isVowel(s[i-1]))
                count--;
            if(isVowel(s[i+k-1]))
                count++;
            max_count=max(count, max_count);
        }
        return max_count;
    }
};