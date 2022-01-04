class Solution {
public:
    int get_smaller(char a, char b)
    {
        switch(a)
        {
            case 'I':
                return (b == 'V' || b == 'X')? b == 'V'? 4:9:1;
            case 'X':
                return (b == 'L' || b == 'C')? b == 'L'? 40:90:10;
            case 'C':
                return (b == 'D' || b == 'M')? b == 'D'? 400:900:100;
            default:
                return 0;
        }
    }
    int romanToInt(string s) {
        int result = 0, temp;
        for(int i = 0; i < s.size(); i++)
        {
            if(i == s.size() - 1)
                temp = 0;
            else
                temp = s[i+1];
            switch(s[i])
            {
                case 'M':
                    result += 1000;
                    break;
                case 'D':
                    result += 500;
                    break;    
                case 'C':
                    temp = get_smaller(s[i], temp);
                    if(temp > 100)
                        i++;
                    result += temp;
                    break;
                case 'L':
                    result += 50;
                    break;    
                case 'X':
                    temp = get_smaller(s[i], temp);
                    if(temp > 10)
                        i++;
                    result += temp;
                    break;
                case 'V':
                    result += 5;
                    break;    
                case 'I':
                    temp = get_smaller(s[i], temp);
                    if(temp > 1)
                        i++;
                    result += temp;
                    break;
            }
        }
        return result;
    }
};