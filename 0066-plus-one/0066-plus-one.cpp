class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>digit;
        digit.push_back(0);
        for(int i=0;i<digits.size();i++)
        {
            digit.push_back(digits[i]);
        }
        int j=digits.size();
        while(j>0)
        {
            if(digit[j]==10)
            {
                digit[j-1]=digit[j-1]+1;
                digit[j]=0;
                if(digit[j-1]!=10)
                {
                    break;
                }
            }
            else if(digit[j]!=9)
            {
                digit[j]=digit[j]+1;
                break;
            }
            else if(digit[j]==9)
            {
                digit[j-1]=digit[j-1] +1;
                digit[j]=0;
                if(digit[j-1]!=10)
                {
                    break;
                }
            }
            j--;
        }
        if(digit[0]==0)
        {
            for(int i=0;i<digits.size();i++)
            {
                digit[i]=digit[i+1];
            }
            digit.pop_back();
        }
        return digit;
    }
};