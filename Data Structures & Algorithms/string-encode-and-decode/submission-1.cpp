class Solution {
public:

    string encode(vector<string>& strs) 
    {
        string outString;

        for(string str : strs)
        {
            if(!str.empty())
            {
                outString+= to_string(str.size()) + "#" + str;
            }
            else
                outString+= to_string(0) + "#";
                
        }

        return outString;
    }

    vector<string> decode(string s) 
    {
        vector<string> outList;
        int i = 0;
        
        while(i<s.size())
        {  int j = i;
            while (s[j] != '#') {
                j++;
            }
            int length = stoi(s.substr(i, j - i));
            i = j + 1;
            j = i + length;
            if(length != 0)
            {
                outList.push_back(s.substr(i, length));
            }
            else 
                outList.push_back("");
            i = j;
        }

        return outList;
    }
};
