//---------------------------------------------------------------------

/* 1. EASY
Create a function that takes two numbers as arguments (num, length) and 
returns an array of multiples of num until the array length reaches length.
arrayOfMultiples(7, 5) ➞ [7, 14, 21, 28, 35]
arrayOfMultiples(12, 10) ➞ [12, 24, 36, 48, 60, 72, 84, 96, 108, 120]
arrayOfMultiples(17, 6) ➞ [17, 34, 51, 68, 85, 102]
NOTE: Notice that num is also included in the returned array.
*/

#include <vector>

std::vector<int> arrayOfMultiples(int num, int length) {
	std::vector<int> multiples;
	int temp = 0;
	for (int i = 1; i <= length; ++i){
		temp = num * i;
		multiples.push_back(temp);
	}
	return multiples;
}

/*
Better solutions:
1.#include <vector>

std::vector<int> arrayOfMultiples(int num, int length) {
	std::vector<int> res;
	for (int i=1; i<=length; i++) {
		res.push_back(i*num);
	}
	return res;
}

- I can actually put the evaluation inside the push_back member function,
instead of putting it in a temporary storage (int temp).
- I realized the I can return a full vector even in a vector function.

2.#include <numeric>

std::vector<int> arrayOfMultiples(int num, int length)
{
	std::vector<int> mul(length, num);
	std::partial_sum(mul.begin(), mul.end(), mul.begin());
	return mul;
}

- I'd have to know what the function partial_sum does.
- I'm also seeing member functions such as .begin and .end.
I have to learn how it's made.
- I'm also curious why there are two parameters that a vector also accepts.
- I didn't even know that vectors can accept parameters. (like Tokens)

*/


//---------------------------------------------------------------------



//---------------------------------------------------------------------





//---------------------------------------------------------------------





//---------------------------------------------------------------------





//---------------------------------------------------------------------
