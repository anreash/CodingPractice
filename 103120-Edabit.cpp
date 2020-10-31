//------------------------------------------------------------------------
/*
Fix the code in the code tab to pass this challenge (only syntax errors). 
Look at the examples below to get an idea of what the function should do.
cube(3) ➞ 27
cube(5) ➞ 125
cube(10) ➞ 1000

bool cubes(int a) {
	retunr s * s * s
}
*/

int cube(int a) 
{
	return a * a * a;
}

//------------------------------------------------------------------------

/*
Write a function that returns the string "something" joined with a space " " and the given argument a.
giveMeSomething("is better than nothing") ➞ "something is better than nothing"
giveMeSomething("Bob Jane") ➞ "something Bob Jane"
giveMeSomething("something") ➞ "something something"
*/

#include <string>

std::string giveMeSomething(std::string a) {
	return "something " + a;
}

//------------------------------------------------------------------------
/*
Take an array of integers (positive or negative or both) and return the sum of the absolute value of each element.
getAbsSum([2, -1, 4, 8, 10]) ➞ 25
getAbsSum([-3, -4, -10, -2, -3]) ➞ 22
getAbsSum([2, 4, 6, 8, 10]) ➞ 30
getAbsSum([-1]) ➞ 1
*/

int getAbsSum(std::vector<int> arr) {
	int sum{0};
	for (int x: arr){
		int temp = abs(x);
		sum += temp;
	}
	return sum;
}

//------------------------------------------------------------------------




//------------------------------------------------------------------------




//------------------------------------------------------------------------



//------------------------------------------------------------------------



//------------------------------------------------------------------------



//------------------------------------------------------------------------
