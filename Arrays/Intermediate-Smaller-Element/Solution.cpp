#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while ( t-- ) {
        int N;
	    cin >> N;
	    int arr[N];
	    for ( int i=0; i < N; i++ ) {
	        cin >> arr[i];
	    }
	 
	    for ( int i=1; i < N; i++) {
	        if ( arr[i-1] > arr[i] )
	            cout << arr[i] << " ";
	        else
	            cout << -1 << " ";
	    }
	    cout << -1 << "\n";
	}
	return 0;
}
