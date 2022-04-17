#include <iostream>
using namespace std;

long long dp[91]={0,};

long long Fibo(long long n){
    dp[0] = 0; dp[1] = 1;
    for(int i = 2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
  return dp[n];
  }

int main() {
  long long num=0;
  cin>>num;
  cout<<Fibo(num);
    return 0;
}