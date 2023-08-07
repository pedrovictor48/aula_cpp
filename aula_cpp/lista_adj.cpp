#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m; cin >> n >> m;
	vector<vector<int>> adj(n + 1);
	//n + 1 pois 1-indexed
	for(int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	//printando os pares
	for(int u = 1; u <= n; u++) {
		cout << u << ": ";
		for(int v : adj[u]) {
			cout << v << ", ";
		}
		cout << endl;
	}
}
