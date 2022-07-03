/*

Given a string (sequence of characters) of length n, generate all of its permutations. 

Example
	
	Input : inp[] = "abc"
	Output: ["abc", "acb", "bac", "bca", "cba", "cab"]

*/

#include<iostream>
#include<cstring>
#include<set>

using namespace std;

void generatePermutations(char* inp, int i, set<string>& s) {

	// base case
	if(inp[i] == '\0') {
		string str(inp);
		s.insert(str);
		// cout << inp << endl;
		return;
	}

	// recursive case

	// You are standing at the ith position, and you've to decide
	// which character is assigned to the ith position

	for(int j=i; j<strlen(inp); j++) {
		swap(inp[i], inp[j]);
		generatePermutations(inp, i+1, s); // ask your friend for i+1
		swap(inp[i], inp[j]); // backtracking
	}
}

int main() {

	char inp[] = "abc";
	set<string> s;

	generatePermutations(inp, 0, s);

	for(auto x : s) {
		cout << x << endl;
	}

	return 0;
}
