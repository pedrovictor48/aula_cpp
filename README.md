# introducao c++
repositorio criado para guardar alguns exemplos de codigos que usei para ministrar uma aula de introducao ao c++, para a disciplina de teoria dos grafos de uma turma de graduacao em ciencia da computacao, com algumas maneiras de representar grafos.

## comandos
1. `g++ codigo.cpp -o codigo` (compilar gerando um executavel)  
2. `./codigo < arquivo_entrada` (executar recebendo o arquivo como entrada)  
3. `g++ codigo.cpp -o codigo && ./codigo < arquivo_entrada` (os dois ao mesmo tempo)

## documentos
https://github.com/pedrovictor48/aula_cpp/blob/main/slide.pdf (slide)  
https://en.cppreference.com/w/cpp/header (documentacao STL)  
https://cp-algorithms.com/graph/breadth-first-search.html#description-of-the-algorithm (algoritmo bfs)  
https://cp-algorithms.com/graph/bipartite-check.html#algorithm (checar bipartite, se sobrou tempo na aula)  

## codigos
1. lista de adjacencia:  
  * https://github.com/pedrovictor48/aula_cpp/blob/main/aula_cpp/lista_adj.cpp (sem peso)  
  * https://github.com/pedrovictor48/aula_cpp/blob/main/aula_cpp/peso_lista.cpp (com peso)  
2. matriz de adjacencia:  
  * https://github.com/pedrovictor48/aula_cpp/blob/main/aula_cpp/matriz_adj.cpp (sem peso)  
  * https://github.com/pedrovictor48/aula_cpp/blob/main/aula_cpp/peso_matriz.cpp (com peso)  

## exemplos de entradas
grafo com peso (0-indexado): https://github.com/pedrovictor48/aula_cpp/blob/main/aula_cpp/grafo_peso  
grafo simples sem peso (1-indexado): https://github.com/pedrovictor48/aula_cpp/blob/main/aula_cpp/grafo  
