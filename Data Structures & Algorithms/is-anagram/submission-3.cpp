class Solution {
public:
    bool isAnagram(string s, string t) 
{
if(s.length() != t.length())
{
    return false;
}
unordered_map<char,int>Sword;
unordered_map<char,int>Tword;
for(int i = 0; i < s.length(); i++)
{
    Sword[s[i]]++;
    Tword[t[i]]++;
}
return Sword == Tword;
}
};
