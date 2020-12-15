class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int len = digits.size();
       for(int i=len-1;i>=0;i--){
           if (digits[i]<9){
               digits[i]++;
               return digits;
           }
            digits[i]=0;

       }
       vector<int> dig(len+1);
    dig[0]=1;
    return dig;
    }
};