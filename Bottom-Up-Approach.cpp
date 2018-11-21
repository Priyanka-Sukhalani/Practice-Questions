/*
	Dynamic Programming
*/

using namespace std;
#include <iostream>

int fibonacci (int fib[],int n) {

	if ( n == 0 )
		return 0;
	if ( n == 1 )
		return 1;
	
	fib[0] = 0;
	fib[1] = 1;

	for ( int i=2; i <= n; i++ ) {
		fib[i] = fib[i-1] + fib[i-2];
	}

	return fib[n];
}

int main() {

	int n;
	cout << "Enter no which fibonacci you want to find: ";
	cin >> n;
	int fib[n+1];
	int ans=fibonacci(fib,n);
	cout << "\n The fibonacci no at place " << n <<" is : "<< ans << endl;

	return 0;

}

/*
	Space Complexity: O(n)
	Time Complexity: O(n)

*/