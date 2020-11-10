//---------------------------------------------------------------

/* 1. EASY
Create a function that validates whether three given integers form a Pythagorean triplet.
The sum of the squares of the two smallest integers must equal the square of the largest number to be validated.
Examples
isTriplet(3, 4, 5) ➞ true
// 3² + 4² = 25
// 5² = 25
isTriplet(13, 5, 12) ➞ true
// 5² + 12² = 169
// 13² = 169
isTriplet(1, 2, 3) ➞ false
// 1² + 2² = 5
// 3² = 9
NOTE: Numbers may not be given in a sorted order.
*/

#include <cmath>

bool isTriplet(int n1, int n2, int n3) {
	int sumSmall = 0;
	int sqrLarge = 0;
	std::vector<int> numbers;
	numbers.push_back(n1);
	numbers.push_back(n2);
	numbers.push_back(n3);
	std::sort(numbers.begin(), numbers.end());
	n1 = pow(numbers[0], 2);
	n2 = pow(numbers[1], 2);
	sumSmall = n1 + n2;
	n3 = pow(numbers[2], 2);
	sqrLarge = n3;
	if (sumSmall == sqrLarge)
		return true;
	else
		return false;
}

/*
NOTES:
1. I know my solution is too long

Cleaner Solution, same concept:
#include <cmath>
bool isTriplet(int n1, int n2, int n3) {
	std::vector<int> a = {n1,n2,n3};
    std::sort(a.begin(),a.end());
  return (pow(a[0],2) + pow(a[1],2) == pow(a[2],2));
}
*/
