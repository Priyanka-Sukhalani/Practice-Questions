#include <iostream>
#include <stack>
using namespace std;

void find_all_leaders(int arr[], int N) {
    
    stack<int> st;
    st.push(arr[N-1]);
    int max = arr[N-1];
    
    for ( int i = N-2; i >= 0; i-- ) {
        if ( arr[i] >= max ) {
            st.push(arr[i]);
            max = arr[i];
        }
    }
    
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}

int main() {

	//code
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for ( int i=0; i<N; i++ )
            cin >> arr[i];
        
        find_all_leaders(arr,N);
        cout << endl;
    }
	return 0;
}

/*
  Time Complexity: T(n) = O(n)
*/
