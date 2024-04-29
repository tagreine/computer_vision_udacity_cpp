// Example program
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int first = 0;
        int last = s.length() - 1;
        
        while ( first <= last) 
        {
            if ( s[first] != s[last] ) {
                    return false;
                }
            first++;
            last--;    
        } 
        return true;
}
};


int main()
{
  Solution s;
  bool test;
  int inp_int;
  cout << "Input an integer: " << endl;
  cin >> inp_int;

  test = s.isPalindrome(inp_int);
  cout << boolalpha; // returning false/true instead of 0/1
  
  if (test == false){
      cout << "Not a palindrome!" << endl;
  } else {
      cout << "Yay, this is a palindrome!" << endl;
  }
    
}