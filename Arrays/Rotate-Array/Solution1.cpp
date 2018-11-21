#include <iostream>
using namespace std;
/*
    Space Complexity: O(d)
    Time Complexity: O(n)
*/


int main() {
	int t;
	cin >> t;
	
	while ( t-- ) {
	    int N;
	    cin >> N;
	    int arr[N];
	    for ( int i = 0; i < N; i++ ) 
	        cin >> arr[i];
	    int d, j = 0;
	    cin >> d;
	    int *temp = new int[N];
	    for ( int i = 0; i < d; i++ ) 
	        temp[i] = arr[i];
	   
	    for ( int i = 0; i < N; i++) {
	        if ( i+d >= N ) {
	            arr[i] = temp[j];
	            j++;
	        }
	        else
	            arr[i] = arr[i+d];
	    }
	    delete temp;
	    
	    for ( int i = 0; i < N; i++ ){
	        cout << arr[i] << " ";
	    }
	  
	     cout << "\n";
	   
	}
	
	return 0;
}
