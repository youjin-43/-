#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

int n,m;
vector<int> nums;
int check[8]={0,};
deque<int> dq;

void find(int num){
    //base step
    if(dq.size()==m){
        for(int i=0;i<dq.size();i++){
            cout<<dq[i]<<' ';
        }cout<<'\n';
        return;
    }

    //recursive step
    for(int i=0;i<n;i++){
        if(check[i]) continue;

        dq.push_back(nums[i]);
        check[i]=1;
        find(i);
        check[i]=0;
        dq.pop_back();
    }
}


int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    
    cin>>n>>m;
    for(int i=0,tmp;i<n;i++){
        cin>>tmp;
        nums.push_back(tmp);
    }

    sort(nums.begin(),nums.end());

    for(int i=0;i<n;i++){
        dq.push_back(nums[i]);
        check[i]=1;
        find(i);
        check[i]=0;
        dq.pop_back();
    }

}