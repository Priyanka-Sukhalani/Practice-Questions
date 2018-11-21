#include <iostream>
using namespace std;

int main() {
	//code
	
	int t;
	cin >> t;
	while ( t-- ) {
	    int N;
	    cin >> N;
	    int arr[N];
	    for ( int i = 0; i < N; i++ ) {
	        cin >> arr[i];
	    }
	    
	    int count[3];
	    for ( int i=0 ; i < 3; i++ )
	        count[i] = 0;
	   
	    for ( int i=0; i < N; i++ ) 
	        count[arr[i]]++;
	   
	   int j = 0;
	   for ( int i=0; i < N; ) {
	       if (count[j] > 0 && j < 3 ) {
	           arr[i] = j;
	           count[j]--;
	           i++;
	       }
	       else
	            j++;
	   }
	   
	   for ( int i=0; i<N; i++ )
	        cout << arr[i] << " ";
	   cout << "\n";
    }
	    
	
	return 0;
}
