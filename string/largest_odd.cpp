

#include <iostream>
#include <vector>
#include<algorithm>
#include<string>
using namespace std;

string largestOddNumber(string num)
{
    int ans = stoi(num);

    for (int i = 0; i < num.length(); i++)
    {
        if (ans % 2 != 0)
        {
            return to_string(ans);
        }
        else
        {
            ans = ans / 10;
        }
    }
    return {};
}

string opt(string num){
    int last_digit;

    for(int i=num.length()-1;i>=0;i--){
        last_digit=num[i];

        if(last_digit%2!=0){
            return num;
        }
        else{
            num.pop_back();
        }
    }
    return {};
}

int main()
{
    std::string str = "2222";

    // Convert string to int
    //int num = std::stoi(str);

    //std::cout << "Integer value: " << num << "\n";

    // string s=largestOddNumber(str);
    // cout<<s;

    //cout<<stoi(str[0]);
    // int lt;
    // lt=str[0];
    // cout<<lt;

    string temp=opt(str);
    cout<<temp;
    return 0;
}