#include <iostream>
using namespace std;

int equilibrium(int arr[],int suml, int sumr, int l, int h, int n ) {
	/*
    l: Lower Limit
    h: Upper Limit
    suml: left Sum
    sumr: Right Sum
    n: length/Size of array arr.
  */
	if ( l < n && h >= 0 )  {
		
		if ( l > h )
			return -1;
		
		if ( l == h && suml == sumr )
			return l+1;

		if ( l < h ) {
			if (  suml == sumr ) {
				suml += arr[l];
				sumr += arr[h];
				l++;
				h--;
			}

			else if ( suml < sumr ) {
				suml += arr[l];
				l++;
			}

			else {
				sumr += arr[h];
				h--;
			}

			return equilibrium(arr,suml,sumr,l,h,n);
		}
	}
	return -1;
}



int main() {
	//code
	int t;
	cin >> t;
	while( t-- ) {
	    int n;
	    cin >> n;
	    int arr[n];
	    for ( int i=0; i<n; i++ )
		    cin >> arr[i];
		cout << equilibrium(arr,0,0,0,n-1,n)<< "\n";
	}
		
	return 0;
}
