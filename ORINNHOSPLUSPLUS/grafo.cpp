#include <iostream>
#include <list>
#include <algorithm> // função find

using namespace std;

class Grafo
{
	int V; // número de vértices
	list<int> *rotas; // ponteiro para um array contendo as listas de rotasacências

public:
	Grafo(int V); // construtor
	void adicionarAresta(int U, int V); // adiciona uma aresta no grafo

	// obtém o grau de saída de um dado vértice
	// grau de saída é o número de arcos que saem de "v"
	int obterGrauDeSaida(int v);

	bool existeVizinho(int U, int V); // verifica se V é vizinho de U
};

Grafo::Grafo(int V)
{
	this->V = V; // atribui o número de vértices
	rotas = new list<int>[V]; // cria as listas
}

void Grafo::adicionarAresta(int U, int V)
{
	// adiciona vértice V à lista de vértices rotasacentes de U
	rotas[U].push_back(V);
}

int Grafo::obterGrauDeSaida(int v)
{
	// basta retornar o tamanho da lista que é a quantidade de vizinhos
	return rotas[v].size();
}

bool Grafo::existeVizinho(int U, int V)
{
	if(find(rotas[U].begin(), rotas[U].end(), V) != rotas[U].end() || find(rotas[V].begin(), rotas[V].end(), U) != rotas[V].end())
    cout <<"emntrou na condição"<<endl;
		return true;
	return false;
}

int main()
{
	// criando um grafo de 4 vértices
     int ilhas, max_n;
    cin>>ilhas; cin>>max_n; 
    int routers = ilhas-1;
	Grafo grafo(routers);

	// adicionando as arestas
    for (size_t i = 0; i < routers; i++)
    {   int U, V, C;
        cin>>U; cin>>V; cin>>C;

        
        grafo.adicionarAresta(U, V);
        //grafo.adicionarAresta(U, V);
        //grafo.adicionarAresta(U, V);
        //grafo.adicionarAresta(U, V);
       // grafo.adicionarAresta(U, V);
      
    }
    
	
    int teste1 = 1;
    int teste2 =3;
	// mostrando os graus de saída
	cout << "Grau de saida do vertice "<< teste1<< " : " << grafo.obterGrauDeSaida(teste1);
	cout << "\nGrau de saida do vertice "<< teste2<< " : "<< grafo.obterGrauDeSaida(teste2);

	// verifica se existe vizinhos
    cout<< "# é vizinho de 2? "<< grafo.existeVizinho(3, 2)<<endl;

	if(grafo.existeVizinho(4, 2))
		cout << "\n\n1 eh vizinho de 0\n";
	else
		cout << "\n\n1 NAO eh vizinho de 0\n";

	if(grafo.existeVizinho(1, 2))
		cout << "2 eh vizinho de 0\n";
	else
		cout << "2 NAO eh vizinho de 0\n";

	return 0;
}