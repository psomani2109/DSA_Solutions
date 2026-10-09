class Solution {
  public:
    void rearrange(vector<int>& arr) {
        // Your code here
        sort(arr.begin(), arr.end());
        int min_idx=0, max_idx=arr.size()-1, M=arr[max_idx]+10;
        for(int i=0; i<arr.size(); i++)
        {
            if(i%2==0)
                arr[i]+=(arr[max_idx--]%M)*M;
            else
                arr[i]+=(arr[min_idx++]%M)*M;
        }
        for(int &i:arr)
        {
            i=i/M;
        }
    }
};
/*          **MODULAR ARITHMETIC ENCODING**

MATH ENCODING FORMULA (Storing 2 values in 1 array slot):

     Encoded Slot = Old_Value + (New_Value % M) * M

     PREREQUISITE:
     M must be strictly greater than the Maximum Element in the array (M > Max_Element).
     This prevents Old_Value from "bleeding" into the upper base slot.

     EXTRACTION:
     1. Get OLD Value  : arr[i] % M
        (Since (New_Value * M) % M == 0, only Old_Value remains)

     2. Get NEW Value  : arr[i] / M
        (Since Old_Value / M == 0 when Old_Value < M, only New_Value remains)
The multiplier $M$ defines the bucket size for your lower slot (the Old Value).
If $M$ is smaller than or equal to any number in your array, that number will 
spill over into the upper slot (the New Value) during addition.
By choosing $M >Max Element, you are building a bucket that is guaranteed to
be larger than every single number in the input. Because the bucket is larger 
than every element:No Old Value can ever fill the bucket completely, so it 
never spills over into the quotient Old/ M = 0. The remainder left in the 
bucket is always the exact Old Value Old(mod M) = Old
*/
