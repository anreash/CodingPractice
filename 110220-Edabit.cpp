// --------------------------------------------------------------

/*
Create a function that returns the string "Burp" with the amount of "r's"
determined by the input parameters of the function.
longBurp(3) ➞ "Burrrp"
longBurp(5) ➞ "Burrrrrp"
longBurp(9) ➞ "Burrrrrrrrrp"
*/

std::string longBurp(int num) {
	std::string letter = "r";
	if (num >= 1){
	// initiating loop to 1,
	// representing the initial value of 'letter' variable
		for (int i = 1; i <= num; ++i)
			letter += letter;
	}
	std::cout << "Bu" << letter << "p";
}

/*
Better solutions from other people:
std::string longBurp(int num) {
  return "Bu" + std::string(num, 'r') + 'p';
}
1. I don't know that we can accept two different kinds of parameters for
string. Need to learn more about this.

std::string longBurp(int num) {
  longBurp;(3);
 }
 
I also don't know what this means. But seems like it works.
*/

// --------------------------------------------------------------

/*
Create a function which validates whether a bridge is safe to walk on (i.e. has no gaps in it to fall through).
isSafeBridge("####") ➞ true
isSafeBridge("## ####") ➞ false
isSafeBridge("#") ➞ true
*/

bool isSafeBridge(std::string s) {
	for (char x : s)
		if (x == ' ')
			return false;
}

/*
Seems that if we use range-for-loop to traverse a string,
we have to use a char data-type, instead of a string.
I don't know why, but it seems logical to use a character-type to analyze
a character from a string, rather than a string-type.

Better solutions from other people:
bool isSafeBridge(std::string s) {
  return std::count(s.begin(), s.end(), ' ') == 0;
}

This looks like that std::count accepts 3 parameters like a for-loop.
It seems like it works like a range-for-loop, but has different parameters.
*/

// --------------------------------------------------------------





// --------------------------------------------------------------






// --------------------------------------------------------------





// --------------------------------------------------------------






// --------------------------------------------------------------





// --------------------------------------------------------------






// --------------------------------------------------------------


