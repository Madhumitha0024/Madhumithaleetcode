class Solution {
public:
    string toHex(int num) {
        string ans="";
        long long n=num;
        if(num==0)
            return "0";
        if(num<0)
            n+=4294967296;
        while(n)
        {
            int dif=n%16;
            if(dif<10)
            {
                ans=ans+to_string(dif);
            }
            else if(dif==10)
                ans.push_back('a');
            else if(dif==11)
                ans.push_back('b');
            else if(dif==12)
                ans.push_back('c');
            else if(dif==13)
                ans.push_back('d');
            else if(dif==14)
                ans.push_back('e');
            else if(dif==15)
                ans.push_back('f');
            n/=16;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};