#include <bits/stdc++.h> 
using namespace std;
int countDistinctWays(int nStairs) {
    //  Write your code here.
    if(nStairs < 0){
        return 0;
    }
    if(nStairs == 0){
        return 1;
    }
    int ans = countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);
    return ans;
}
int main(){ 
    int n;
    cout<<"\nEnter No. of stairs: ";
    cin>>n;
    cout<<"\nNo. of ways to reach "<<n<<" stairs are: "<<countDistinctWays(n)<<endl<<endl;
}
