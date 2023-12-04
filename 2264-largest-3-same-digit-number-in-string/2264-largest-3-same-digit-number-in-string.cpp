class Solution {
public:
    string largestGoodInteger(string num) {
        string temp="";
        string mp="";
        for(int i=0;i<num.size()-1;i++)
        {
            if(num[i]==num[i+1])
            {
                temp=temp+num[i];
            }
            if(temp.size()>=2)
            {
                temp=temp+num[i];
                if(temp>mp)
                {
                    mp=temp;
                }
                temp="";
            }
            if(num[i]!=num[i+1])
            {
                temp="";
            }
        }
        return mp;
    }
};