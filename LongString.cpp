#include <bits/stdc++.h>
#define ll long long 
using namespace std;

string LongToString(ll);
ll StringToLong(string);

string LongToString(ll long_num)
{
    stack<char> stringStack;
    string signValue = "";
  
    // if long number is negative store the negative sign to
    // the signValue variable
    if (long_num < 0) {
        signValue = "-";
        long_num = -long_num;
    }
  
    // while number is greate than 0, get last digit from it
    // and convert it to character by adding '0' to it, and
    // push to the stack.
    while (long_num > 0) {
        char convertedDigit = long_num % 10 + '0';
        stringStack.push(convertedDigit);
        long_num /= 10;
    }
  
    string long_to_string = "";
  
    // while stack is not empty pop the character one by one
    // and append to the resultant string.
    while (!stringStack.empty()) {
        long_to_string += stringStack.top();
        stringStack.pop();
    }
  
    // return the resulatant string value by appending
    // singValue to it.
    return signValue + long_to_string;
}

ll StringToLong(string ss)
{
	ll long_num=0;
	
	for(int i=0;i<ss.length();i++)
		long_num = long_num*10 + ss[i] - '0';
	
	return long_num;
}
