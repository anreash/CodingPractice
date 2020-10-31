//------------------------------------------------------------------------

/* 1. VERY EASY level
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

/* 2. VERY EASY level
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

/* 3. EASY level
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

/* 4. VERY EASY level
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

/* 5. VERY EASY level
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

/* 6. VERY EASY level
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

/* 7. VERY EASY level
Create a function that takes a name and returns a greeting in the form of a string.
helloName("Gerald") ➞ "Hello Gerald!"
helloName("Tiffany") ➞ "Hello Tiffany!"
helloName("Ed") ➞ "Hello Ed!"
*/

std::string helloName(std::string name) {
	std::cout << "Hello " << name << "!";
}

//------------------------------------------------------------------------

/* 8. EASY level
A salesman has a number of cities to visit. 
He want to calculate the total number of possible paths he could take, visiting each city once before returning home.
Return the total number of possible paths a salesman can travel, given n cities.

If we have cities A, B and C, possible paths would be:
A -> B -> C
A -> C -> B
B -> A -> C
B -> C -> A
C -> B -> A
C -> A -> B
which gives us 6 as the possible number of paths.
ex.
paths(4) ➞ 24
paths(1) ➞ 1
paths(9) ➞ 362880

NOTES:
Inspired by a video from Dr. Peter Uelkes. - https://youtu.be/2iBR8v2i0pM
This challenge is describing a factorial. - https://www.mathsisfun.com/numbers/factorial.html
*/

long int paths(int n){
	int factorial = 1;
	for (int i = 1; i <= n; ++i){
		factorial *= i;
	}
	return factorial;
}

/*
1. added = equal sign to condition
meaning, keep loop if i is less than or equal to n
*/

//------------------------------------------------------------------------

/* 9. EASY level
Create a function that counts the number of syllables a word has.
Each syllable is separated with a dash -.
numberSyllables("buf-fet") ➞ 2
numberSyllables("beau-ti-ful") ➞ 3
numberSyllables("mon-u-men-tal") ➞ 4
numberSyllables("on-o-mat-o-poe-ia") ➞ 6
*/

int numberSyllables(std::string word) {
	// first syllable is automatically counted
	int syllable_count{1};
	for (char x : word){
		if (x == '-')
			++syllable_count;
	}
	return syllable_count;
}

/*
1. range-for-loop can also be used on std::string.
counting from the first character to the next.
*/

//------------------------------------------------------------------------

/* 10. EASY level
This Triangular Number Sequence is generated from a pattern of dots that form a triangle.
The first 5 numbers of the sequence, or dots, are:
1, 3, 6, 10, 15
This means that the first triangle has just one dot,
the second one has three dots, 
the third one has 6 dots and so on.

Write a function that gives the number of dots with its corresponding triangle number of the sequence.
triangle(1) ➞ 1
triangle(6) ➞ 21
triangle(215) ➞ 23220

RESOURCES: https://www.mathsisfun.com/algebra/triangular-numbers.html
*/

int triangle(int n) {
	int total_dots{0};
	if (n > 0){
		for (int i = 0; i <= n; ++i){
			total_dots += i;
		}
	}
	return total_dots;
}

/*
1. Added a condition to avoid bad input, which might be a negative number.
2. Might also consider using abs() function to make the triangle function
always return a value, regardless of the sign of the input.
*/

//------------------------------------------------------------------------
