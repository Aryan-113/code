#include<iostream>
#include<vector>
using namespace std;
 
int prt(int row, int col) {
    int n = row - 1;
    int ans = 1;
    for (int i = 0; i < col; i++) {
        ans = ans * (n - i) / (i + 1);
    }
    return ans;
}
//brute force time is approx O(n^3)
//printing entie pascals triangle
vector<vector<int>> generate(int numrows){
    vector<vector<int>> temp;

    int r=0;
    for(int i=1;i<=numrows;i++){
        temp.push_back({});
        for(int j=0;j<i;j++){
            temp[r].push_back(prt(i,j));
        }
        r++;
    }

    return temp;
}

//optimal solution O(n2)

vector<vector<int>> opt(int numrows){
    vector<vector<int>> temp;

    for(int i=0;i<numrows;i++){
        vector<int> row(i+1);
        row[0]=1;
        for(int j=1;j<=i;j++){
            row[j]=(int)(long long)row[j-1]*(i-j+1)/j;
        }

        temp.push_back(row);
    }

    return temp;
}

int main(){
 
   return 0;
}