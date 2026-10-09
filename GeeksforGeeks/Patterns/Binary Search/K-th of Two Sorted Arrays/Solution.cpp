class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        int count=0, i=0, j=0, x;
        while(i<a.size() || j<b.size())
        {
            
            if(i>=a.size())
            {
                x=b[j];
                j++;
            }
            else if(j>=b.size())
            {
                x=a[i];
                i++;
            }
            else
            {
                x=min(a[i], b[j]);
                (a[i]<=b[j])? i++:j++;
            }
            count++;
            if(count==k)
                return x;
                
            
            
        }
    }
};