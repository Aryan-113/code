//could'nt solve its much harder then i thought as in the ex the play1 chooses 1 such that in the next step he can choose 233 to win

//predict the winner
#include<iostream>
#include<vector>
using namespace std;
 
int main(){
   vector<int> nums={1,5,233,7};
        int play1_tot=0;
        int play2_tot=0;

        int s=0;
        int e=nums.size()-1;
        int cnt=0;

        while(s<e){
            if(cnt%2==0){
            //player 1 will chosse the first element as it is bigger
                if(nums[s]>nums[e]){
                    play1_tot+=nums[s];
                    s++;
                }
                else{
                    play1_tot+=nums[e];
                    e--;
                }
            }
            else{
                if(nums[s]>nums[e]){
                    play2_tot+=nums[s];
                    s++;
                }
                else{
                    play2_tot+=nums[e];
                    e--;
                }
            }
            cnt++;
        }
        cout<<"player 1 total:"<<play1_tot<<endl;
        cout<<"player 2 total:"<<play2_tot<<endl;
        if(play1_tot>=play2_tot){
            return true;
        }
        else{
            return false;
        }
   return 0;
}