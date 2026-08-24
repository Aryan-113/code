#include <iostream>
#include <vector>
#include <list>
#include<string>
#include<algorithm>
using namespace std;

vector<vector<string>> groupanagrams(vector<string> &strs)
{
    list<string> taken;
    vector<vector<string>>ans;
    for (int i = 0; i < strs.size(); i++)
    {
        if(find(taken.begin(), taken.end(), strs[i])!=taken.end()){
            continue;
        }
        
        vector<string>temp;
        temp.push_back(strs[i]);
        
        bool anagram = false;
        
        for (int j = i + 1; j < strs.size(); j++)
        {
            vector<int> fir(26);
            if (strs[i].size() != strs[j].size())
            {
                continue;
            }
            for (char ch : strs[i])
            {
                fir[ch - 'a']++;
            }
            for (char ch : strs[j])
            {
                fir[ch - 'a']--;
            }

            for (int l = 0; l < fir.size(); l++)
            {
                if (fir[l] != 0||fir[l]<0){
                    anagram=false;
                    break;
                }
                else anagram=true;
            }
            if(anagram){
                temp.push_back(strs[j]);
                taken.push_back(strs[j]);
            }
        }
        ans.push_back(temp);
    }

    return ans;
}

int main()
{
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>>ans=groupanagrams(strs);
    for (const auto& row : ans) {
        // Inner loop accesses each string in that row
        for (const std::string& element : row) {
            std::cout << element << " ";
        }
        std::cout << "\n"; // Newline after completing a row
    }

    return 0;
}