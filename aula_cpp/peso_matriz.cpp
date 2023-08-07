#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m; cin >> n >> m;
	vector<vector<int>> matriz(n, vector<int>(n));
	vector<vector<int>> p(n, vector<int>(n));
	//outro jeito de inicializar(explicar);
	
	for(int i = 0; i < m; i++) {
		int u, v, peso;
		cin >> u >> v >> peso;
		matriz[u][v] = matriz[v][u] = 1;
		p[u][v] = p[v][u] = peso;
	}

	//printando a matriz de adj.
	cout << "Matriz:" << endl;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) 
			cout << matriz[i][j] << " ";
		cout << endl;
	}
	cout << "Pesos:" << endl;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(matriz[i][j]) { //se a aresta existe printa o peso
				cout << p[i][j] << " ";
			}
			else cout << "* "; //* representa nada (pra nao botar 0)
		}
		cout << endl;
	}
}
