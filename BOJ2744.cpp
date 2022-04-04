#include <iostream>
#include <string>
using namespace std;


int main()
{
  string input;
  cin>>input;
  for(int i=0;i<input.size();i++)
  {
    if(input[i]>='a'&&input[i]<='z')
      input[i]=toupper(input[i]);
    else if(input[i]>='A'&&input[i]<='Z')
      input[i]=tolower(input[i]);
  }
  cout<<input;
  return 0;
}

