class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<string>ans(numRows,"");
        int i = 0;
        int row = 0;
        while(i<s.length())
        {
            while(row<numRows)
            {                
                ans[row++].push_back(s[i++]);
                if(i>=s.length())
                {
                    break;
                }
            }
            if(i>=s.length())
                {
                    break;
                }
            row = row - 2;
            while(row>=0)
            {
                ans[row--].push_back(s[i++]);
                if(i>=s.length())
                {
                    break;
                }
            }
            row = row + 2;
        }
        string answer ="";
        for(int j=0;j<numRows;j++)
        {
            answer = answer + ans[j];
        }
        return answer;
    }
};