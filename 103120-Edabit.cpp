//------------------------------------------------------------------------

/* VERY EASY level
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

/* VERY EASY level
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

/* EASY level
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

/*
1. To get absolute value, use function abs(variable)
2. better solution:
int getAbsSum(std::vector<int> arr) {
	int sum{0};
	for (int x: arr){
		sum += abs(x);
	}
	return sum;
} 
*/

//------------------------------------------------------------------------

/* EASY level
Create a function that returns the number of frames shown in a given number of minutes for a certain FPS.
frames(1, 1) ➞ 60
frames(10, 1) ➞ 600
frames(10, 25) ➞ 15000
*/

int frames(int minutes, int fps) {
	const int default_frame = 60;
	return (fps * default_frame) * minutes;
}

/*
1. 'default' is a C++ keyword.
2. Best practice to use constant variables; avoid magic constants.
*/

//------------------------------------------------------------------------

/*
Create a function that takes the age and return the age in days.
Use 365 days as the length of a year for this challenge.
Ignore leap years and days between last birthday and now.
Expect only positive integer inputs.
calc_age(65) ➞ 23725
calc_age(0) ➞ 0
calc_age(20) ➞ 7300
*/

int calc_age(int age) {
	const int days_in_year = 365;
	return days_in_year * abs(age);
}

/*
1. Made sure that input will be turned into absolute value, to prevent bad input.
ex. age = -34
bad input result 
= 365 * -34 
= -12410
abs result 
= 365 * |-34|
= 365 * 34
= 12140 days old
*/

//------------------------------------------------------------------------

/*
Write a function that takes the base and height of a triangle and return its area.
triArea(3, 2) ➞ 3
triArea(7, 4) ➞ 14
triArea(10, 10) ➞ 50
*/

int triArea(int base, int height) {
	const int half_of_parallelogram = 2;
	return (base * height)/half_of_parallelogram;
}

//------------------------------------------------------------------------

/*

*/

//------------------------------------------------------------------------



//------------------------------------------------------------------------


//------------------------------------------------------------------------
