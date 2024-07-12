class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
         while(n!=0){ //while doing right shift
            if(n&1){ //checking if last bit is 1
                count++;
            }
            n=n>>1;
         }
         return count;
    }
};