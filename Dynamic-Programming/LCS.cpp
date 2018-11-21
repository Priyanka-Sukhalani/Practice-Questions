
using namespace std;
#include <iostream>
#include <string>

string find_subsequence(int **LCS, int m, int n,  string X, string Y ) {

	string str="";

	int i=m-1, j=n-1;

	while ( i > 0 && j > 0 ) {
		if ( X[i] == Y[j] ) {
			str = X[i] + str;
			i--;
			j--;
		}
		else {
			int temp1 = LCS[i-1][j];
			int temp2 = LCS[i][j-1];

			if ( temp2 > temp1 )
				j--;
			else
				i--;
		}		

	}

	return str;
}

int length_of_LCS(int **LCS, int m, int n, string X, string Y ) {

	for ( int i=0 ; i<m ; i++ ) 
		LCS[i][0] = 0;

	for ( int j=0 ; j<n ; j++ )
		LCS[0][j] = 0;

	for (int i=1; i<m ; i++ ) {
		for ( int j=1; j<n ; j++) {
			if ( X[i] == Y[j] ) 
				LCS[i][j] = LCS[i-1][j-1] + 1;
			else {
				int temp1 = LCS[i-1][j];
				int temp2 = LCS[i][j-1];
				if ( temp1 > temp2 )
					LCS[i][j] = temp1;
				else
					LCS[i][j] = temp2;
			}
		}
	}

	return LCS[m-1][n-1];
}


int main() {

	string X,Y;

	cout << "\n Enter first String  : ";
	getline(cin,X);
	X = " " + X;

	cout << "\n Enter Second String : ";
	getline(cin,Y);
	Y = " " + Y;

	int m = X.length();
	int n = Y.length();


	int **LCS;
	LCS = new int *[m];
	for ( int i=0; i<m ; i++ )
		LCS[i] = new int[n];


	int length = length_of_LCS(LCS,m,n,X,Y);

	cout << "\n The length of Longest Common Subsequence is : " << length;

	string subsequence = find_subsequence(LCS,m,n,X,Y);
	cout << "\n The Longest Common subsequence is : " << subsequence; 

	cout << endl;
	return 0;

}