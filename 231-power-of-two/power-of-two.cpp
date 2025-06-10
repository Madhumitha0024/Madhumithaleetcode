class Solution {
public:
    bool isPowerOfTwo(int n) {
        int rem,count=0;
        while(n!=0){
        rem=n%2;
        if(rem==1)
        count++;
        n=n/2;
        }
        if(count==1)
        return true;
        else
        return false;
    }
};