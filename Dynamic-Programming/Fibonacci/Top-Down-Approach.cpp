/*
	Dynamic Programming
*/

using namespace std;
#include <iostream>

int fibonacci (int fib[],int n) {

	if  (n >= 0) {
		if ( n==0 )
			return 0;
		if ( n == 1 )
			return 1;
		if ( fib[n] != -1 )
			return fib[n];
		return fib[n] = fibonacci(fib,n-1) + fibonacci(fib,n-2);
	}
	
	return -1;
}

int main() {

	int n;
	cout << "Enter no which fibonacci you want to find: ";
	cin >> n;
	int fib[n+1];
	for ( int i=0; i<=n; i++)
		fib[i] = -1;
	int ans=fibonacci(fib,n);
	cout << "\n The fibonacci no at place " << n <<" is : "<< ans << endl;

	return 0;

}

/*
	Space Complexity: O(n)
	Time Complexity: O(n)

*/
