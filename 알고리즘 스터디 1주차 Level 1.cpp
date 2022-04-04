#include <iostream>
#include <string>
using namespace std;


double scoreprint(string score){
  double answer=0.0;
  if(score[0]=='A') answer=4.0;
  else if(score[0]=='B') answer=3.0;
  else if(score[0]=='C') answer=2.0;
  else if(score[0]=='D') answer=1.0;
  else if(score=="F") answer=0.0;
  if(score[1]=='+') answer+=0.3;
  else if(score[1]=='-') answer-=0.3;
  
  return answer;
}


int main()
{
    string score;
    cin>>score;
    cout<<scoreprint(score);
    return 0;
}
