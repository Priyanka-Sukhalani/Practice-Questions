/*
	Dynamic Programming
*/

using namespace std;
#include <iostream>

int fibonacci (int n) {

	
	if ( n == 0)
		return 0;
	if ( n == 1 )
		return 1;

	int a=0,b=1,sum;
	for (int i=2; i <= n; i++ ) {
		sum = a + b;
		a = b;
		b = sum;
	}	

	return sum;
}

int main() {
	int n;
	cout << "Enter no which fibonacci you want to find: ";
	cin >> n;
	int ans=fibonacci(n);
	cout << "\n The fibonacci no at place " << n <<" is : "<< ans << endl;

	return 0;
}

/*
	Space Complexity: O(1)
	Time Complexity: O(n)

*/
