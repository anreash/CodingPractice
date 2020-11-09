//-------------------------------------------------------------

/* 1. 8 KYU - FAILED ATTEMPT
Write a function which converts the input string to uppercase.
*/

#include <string>

std::string makeUpperCase (const std::string& input_str)
{
  std::string temp;
  int num;
  char ch;
  const int ascii_distance = 32;
  for (char x : input_str){
    num = x;
    num -= ascii_distance;
    ch = num;
    temp.push_back(ch);
  }
  return temp;
}

/*
OBSERVATIONS:
1. I don't know what std::toupper is.
2. My solution didn't work because it didn't consider non alphabet characters and whitespaces.
3. I really should learn more about how to not use push_back, and an alternative of that.
*/

//-------------------------------------------------------------

/* 2. 8 KYU - SUCCESS

Write function RemoveExclamationMarks which removes all exclamation marks from a given string.
*/

#include <string>

std::string removeExclamationMarks(std::string str){
  std::string new_string;
  for (char temp : str){
    if (temp != '!')
      new_string.push_back(temp);
    }
  return new_string;
}

// Better solutions

std::string removeExclamationMarks(std::string str){
  str.erase(std::remove(str.begin(), str.end(), '!'), str.end());
  return str;
}

/*
OBSERVATIONS:
1. str.erase, str.begin, str.end = seems like member functions of the std::string group.
2. This makes it easier to traverse the string because it knows the start and end elements of the string.
*/

//-------------------------------------------------------------

/* 3. 8 KYU - FAILED ATTEMPT
Write function bmi that calculates body mass index (bmi = weight / height ^ 2).
if bmi <= 18.5 return "Underweight"
if bmi <= 25.0 return "Normal"
if bmi <= 30.0 return "Overweight"
if bmi > 30 return "Obese"
*/

#include <cmath>

std::string bmi(double w, double h) 
{
  double result = w / h / h;
  if (result <= 18.5) return "Underweight";
  if (result <= 25.0) return "Normal";
  if (result <= 30.0) return "Overweight";
  else return "Obese";
  
  //TODO: Implement this function
  throw std::logic_error("Method or operation is not implemented");
}

//-------------------------------------------------------------

/* 4. 8 KYU - SUCCESS
SUMMATION
Write a program that finds the summation of every number from 1 to num.
The number will always be a positive integer greater than 0.
For example:
summation(2) -> 3
1 + 2
summation(8) -> 36
1 + 2 + 3 + 4 + 5 + 6 + 7 + 8
*/

int summation(int num){
 int sum = 0;
  for (int loop = 1; loop <= num; ++loop)
   sum += loop; 
  return sum;
}

//BETTER SOLUTION

unsigned summation(unsigned num) {
  return num * (num + 1) / 2;
}

//-------------------------------------------------------------

/* 5. 8 KYU - SUCCESS
Code as fast as you can! You need to double the integer and return it.
*/

#include <cstdint>

int32_t double_integer(int32_t n)
{
  return n*2;
}

/*
INTERESTING/CLEVER SOLUTION by other people
#include <cstdint>

int32_t double_integer(int32_t n) {
  return n << 1;
}

Explanation:
<< is left shift operator.
The left-shift operator causes the bits in shift-expression
to be shifted to the left by the number of positions specified 
by additive-expression.n << 1 shifting the bits to the left by 1.
If n is 4 in binary 0100, then n << 1 is 1000 which is 8.
*/
//-------------------------------------------------------------

/* 6. 8 KYU - SUCCESS
In this simple assignment you are given a number and have to make it negative.
But maybe the number is already negative?
Example:
makeNegative(1); // return -1
makeNegative(-5); // return -5
makeNegative(0); // return 0
Notes:
The number can be negative already, in which case no change is required.
Zero (0) is not checked for any specific sign.
Negative zeros make no mathematical sense.
*/

int makeNegative(int num)
{
  if (num < 0)
    return num;
  else 
    return -num;
}

/*
NOTES:
1. Do placing a negative sign before any number automatically turns
it into a negative number (mathematically speaking)?
What if the result is only influenced by how it looks like,
but it's not a negative number,
just a dash and a number?
2. There's no way to check that, since the test only calls for the -num result.
*/

//Better Solutions:
int makeNegative(int num)
{
  return -abs(num);
}

// Same as my solution -num. voted most clever

int makeNegative(int num) {
  return num > 0 ? -num : num;
}

//ternary operation is a best practice. voted best practice

//-------------------------------------------------------------

/* 7. 8 KYU - SUCCESS
Complete the method that takes a boolean value and 
return a "Yes" string for true, or a "No" string for false.
*/

using namespace std;

string bool_to_word(bool value) {
  return (value == true) ? "Yes" : "No";
}

/*
Translation:
If value is true, return "Yes", otherwise, return "No".

Also called an 'arithmetic if' or an 'conditional expression'.
*/

// Better Solution

using namespace std;

string bool_to_word(bool value)
{
  return value ? "Yes" : "No";
}

/* 
Same use but since it's a boolean,
default value is true,
otherwise it's false.
*/

//-------------------------------------------------------------
