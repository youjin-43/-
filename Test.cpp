#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int ret= 0;
    for(int i=1;i<=n;i++){
        ret+=i;
    }
    cout<<ret<<endl;
    cout<<ret*ret<<endl;


    ret= 0;
    for(int i=1;i<=n;i++){
        ret+=i*i*i;
    }
    cout<<ret;
}