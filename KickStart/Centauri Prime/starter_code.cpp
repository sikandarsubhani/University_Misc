#include <iostream>
#include <string>

using namespace std;

string GetRuler(const string& kingdom) {
  // TODO: implement this method to determine the ruler name, given the kingdom.
  string ruler;
  if(kingdom.back()=='a'||kingdom.back()=='e'||kingdom.back()=='i'||kingdom.back()=='o'||kingdom.back()=='I'||kingdom.back()=='E'||kingdom.back()=='A'||kingdom.back()=='u'||kingdom.back()=='O'||kingdom.back()=='U')
  ruler ="Alice";
  else if(kingdom.back()=='y'||kingdom.back()=='Y')
  ruler="nobody";
  else
  ruler="Bob";

  return ruler;
}

int main() {
  int testcases;
  cin >> testcases;
  string kingdom;

  for (int t = 1; t <= testcases; ++t) {
   cin>>kingdom;
    cout << "Case #" << t << ": " << kingdom << " is ruled by "<< GetRuler(kingdom) << ".\n";
  }
  return 0;
}
