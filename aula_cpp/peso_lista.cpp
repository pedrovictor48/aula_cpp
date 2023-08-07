#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m; cin >> n >> m;
	vector<vector<pair<int, int>>> adj(n);
	//n coloquei n + 1 pq eh 0-indexado
	for(int i = 0; i < m; i++) {
		int u, v, peso;
		cin >> u >> v >> peso;
		adj[u].push_back({peso, v});
		adj[v].push_back({peso, u});
	}

	//printando os pares
	for(int u = 0; u < n; u++) {
		cout << u << ": ";
		cout << '[';
		for(pair<int, int> par : adj[u]) {
			cout << '(' << par.first << ' ' << par.second << ')' << ' ';
		}
		cout << ']' << endl;
	}
}
