class Solution {
  public:
    int secFrequent(vector<string> &arr) {
        // code here
        unordered_map <string, int> freq;
        if(arr.empty() || arr.size()==1)
            return -1;
        for(const string &s:arr)
        {
            freq[s]++;
        }
        
        int max_freq=0, sec_max=0;
       
        
        for(const auto &pair:freq)
        {
            if(pair.second>max_freq)
            {
                sec_max=max_freq;
                max_freq=pair.second;
            }
            else if(pair.second<max_freq && pair.second>sec_max)
                sec_max=pair.second;
        }
        return (sec_max==0)? -1:sec_max;
    }
};
/*In this problem (vector<string>):A std::string is not a primitive 4-byte type. It 
manages dynamic memory allocated on the heap.Every single time C++ copies a string, 
it must request heap memory, copy the array of characters, and deallocate that memory 
when the loop iteration ends.In a loop running $10^5$ times, for (string s : arr) 
causes $10^5$ heap memory allocations and destructions. That memory overhead is what 
caused GeeksforGeeks to flag your code with Time Limit Exceeded.  
int, char, float, boo  lfor (int x : vec) Primitive types are tiny; copying is practically free.
string, vector, pair, struct for (const auto &x : vec) Complex objects require memory allocation;
always pass by reference.   */