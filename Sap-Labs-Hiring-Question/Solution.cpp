using namespace std;
#include <iostream>

int no_of_subsets(int *arr, int n) {
    
    int count = 0;   
    for ( int i=0; i < n;  ) {
        int temp = arr[i];
        int j = i;
        while ( j < n && arr[j] == temp ) 
            j++;
        int k = i;
        int gap = j - k;
        int l = 0;
        while ( l < gap ) {
            count += j - k;
            k++; l++;
        }
        i = j;
    }
    
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int *arr = new int[N];
        
        for ( int i=0; i<N ; i++)
            cin >> arr[i];
        
        cout << no_of_subsets(arr,N) << endl;
    }
    
    return 0;
}

