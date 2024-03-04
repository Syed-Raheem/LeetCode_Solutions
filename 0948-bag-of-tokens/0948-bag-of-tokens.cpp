class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int res=0,score=0;
        int i=0,j=tokens.size()-1;
        while(i<=j){
            if(tokens[i]<=power){
                power-=tokens[i];
                score++;
                i++;
                res=max(res,score);
            }
            else if(score>=1)
            {
                power+=tokens[j];cout<<power;
                score--;
                j--;
            }
            else{
                break;
            }
        }
        return res;
    }
};