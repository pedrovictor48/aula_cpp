#include <bits/stdc++.h>
using namespace std;



int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> matriz(n + 1, vector<int>(n + 1, 0));
	for(int i = 0; i < m; i++) {
		int u, v; 
		cin >> u >> v;
		matriz[u][v] = 1;
		matriz[v][u] = 1;
	}

	//lido, agora printar
	
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
}
