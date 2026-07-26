#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> strs = {"hii", "yo", "gadbiuvi"};
    int mini = strs[0].size();
    string minstr = strs[0];
    for (int i = 1; i < strs.size(); i++)
    {
        if (strs[i].size() < mini)
        {
            mini = strs[i].size();
            minstr = strs[i];
        }
    }

    cout<<mini<<endl;
    cout<<minstr<<endl;
    return 0;
}