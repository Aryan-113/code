// factorial trailling zeroes
#include <iostream>
#include <vector>
using namespace std;

long long factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    long long temp = factorial(7);
    int count = 0;
    while (temp > 0)
    {
        long long tp = temp % 10;
        if (tp == 0)
        {
            count++;
        }
        else{
            break;
        }
        temp = temp / 10;
    }
    cout<<count;
    return 0;
}