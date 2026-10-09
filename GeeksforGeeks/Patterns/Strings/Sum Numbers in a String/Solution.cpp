class Solution {
  public:
    int findSum(string& s) {
        // code here
        int temp=0, sum=0;
        for(int i=0; i<s.size(); i++)
        {
            if(i!=0 && isdigit(s[i]) && isdigit(s[i-1]))
                temp=temp*10 + s[i]-'0';
            else if(isdigit(s[i]))
                temp+=s[i]-'0';
            else if(islower(s[i]) || isupper(s[i]))
            {
                sum+=temp;
                temp=0;
            }
        }
        sum+=temp;
        return sum;
    }
};