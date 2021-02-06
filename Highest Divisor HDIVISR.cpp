//Shubham yadav
//CodeChef Feburary Long Challange 2021 solutions
//Highest Divisor solution

#include<iostream>

using namespace std;
int main(){
    int N;  cin>>N;
    for(int i=10;i>=1;i--){
        if(N%i==0){
            cout<<i<<endl;
            break;
        }
    }
}
