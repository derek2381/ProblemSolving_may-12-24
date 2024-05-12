// problem link
// https://www.codechef.com/problems/POWPM


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> arr(n);

	    for(int i = 0;i < n;i++){
	        cin >> arr[i];
	    }

	    long long int count = 0;
	    int valid_j = min(30, n);

	    for(int i = 0;i < n;i++){
	       if(arr[i] == 1){
	           count += n;
	       }else{
	           for(int j = 1;j <= valid_j;j++){
	               long long int val = pow(arr[i], j);
	               if(val <= arr[j-1]){
	                   count++;
	               }

	               if(val > 1e9){
	                   break;
	               }
	           }
	       }
	    }

	    cout << count << endl;
	}

}
