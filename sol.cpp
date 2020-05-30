#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int cnt = 0, t = 0;
	if(n%2 == 0){
		while(t != n){
			t += 2;
			cnt++;
		}
		cout << cnt << "\n";
		while(cnt--){
			cout << 2 << " " ;
		}
	} else{
		while(t != n-1){
			t += 2;
			cnt++;
		}
		cout << cnt << "\n";
		cnt--;
		while(cnt--){
			cout << 2 << " ";
			
		}
		cout << 3;
	}
	cout << "\n";
	return 0;
}
