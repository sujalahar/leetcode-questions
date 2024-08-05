class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        while(s[i]==' ' && i<s.length()){
            i++;
        }

        int sign = 1;
        if((s[i]=='-' || s[i]=='+') && (i<s.length()))
        {
                if(s[i]=='-')
                {
                    sign = (-1);
                }
                i++;
        }
        int number = 0;
        while(isdigit(s[i]) && i<s.length())
        {
            if(number>(INT_MAX/10) )
            {
                if(sign==1){
                return INT_MAX;
                }
                else{
                    return  INT_MIN; 
                }
            }
            else if(number==214748364 && ((s[i]=='8') || (s[i]=='9')) && (sign == 1))
            {
                return INT_MAX;
            }
            else if(number==214748364 && ((s[i]=='9')) && (sign == -1))
            {
                return INT_MIN;
            }
            else if(number==214748364 && ((s[i]=='8')) && (sign == -1))
            {
                return INT_MIN;
            }
            number = number*10 + (s[i]-'0');
            i++;
        }
        number = sign*number;
        return number;
    }
};