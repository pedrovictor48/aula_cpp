#include <bits/stdc++.h>

using namespace std;

bool bfs(int origem, int n, vector<vector<int>> &adj, vector<int> &cor, vector<int> &visitado) {
	//cor[u] representa a cor do vertice u
	//visittado[u] diz se o foi visitado ou nao
	queue<int> fila;
	fila.push(origem);
	visitado[origem] = true;	
	cor[origem] = 0;

	while(!fila.empty()) {
		int no_atual = fila.front();
		cout << "O no " << no_atual << " foi visitado" << endl;

		for(int vizinho : adj[no_atual]) {
			int cor_do_atual = cor[no_atual];
			if(visitado[vizinho]) {
				if(cor[vizinho] == cor_do_atual) {
					cout << "Nao" << endl;
					return false;
				}
			}
			else {
				cor[vizinho] = !cor_do_atual;
				fila.push(vizinho);
				visitado[vizinho] = true;
			}
		}
		fila.pop();
	}
	return true;
}

int main() {
	int n, m; cin >> n >> m;
	vector<vector<int>> adj(n + 1);
	for(int i = 0; i < m; i++) {
		int u, v; cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vector<int> cor(n + 1, -1);
	vector<int> visitado(n + 1, false);
	for(int i = 1; i <= n; i++) {
		int origem = i;
		if(!visitado[origem]) {
			bool flag = bfs(origem, n, adj, cor, visitado);
			if(!flag) {
				cout << "Nao" << endl;
				return 0;
			}
		}
	}
	cout << "Sim" << endl;
}
