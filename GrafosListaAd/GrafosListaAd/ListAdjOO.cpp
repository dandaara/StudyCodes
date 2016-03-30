//
//  main.cpp
//  GrafosListaAd
//
//  Created by Dandara Aranha on 30/03/16.
//  Copyright © 2016 Dandara Aranha. All rights reserved.
//

#include <iostream>
#include <list>
#include <algorithm>

using namespace std;


class Grafo{


    int V; // NUMERO DE VERTICES
    list<int> *adj; //  ponteiro para um array contendo as listas de adjacencia
    
    
public:
    Grafo(int V);
    void adicionarAresta(int v1, int v2);
    
    int obterGrauDeSaida(int v);
    bool existeVizinhho(int v1, int v2);



};


Grafo::Grafo(int V){
    this->V = V;
    
    adj = new list<int>[V]; // cria as listas
    


}

void Grafo :: adicionarAresta(int v1, int v2){
    adj[v1].push_back(v2);


}

int Grafo :: obterGrauDeSaida (int v){
    return adj[v].size();
    
}


bool Grafo :: existeVizinhho (int v1,int v2){
    if (find(adj[v1].begin(), adj[v1].end(), v2) != adj[v1].end())
        return true;
    
    return false;
    
}






int main(int argc, const char * argv[]) {
    
    
    Grafo grafo(4);
    
    
    grafo.adicionarAresta(0, 1);
     grafo.adicionarAresta(0, 3);
     grafo.adicionarAresta(1, 2);
     grafo.adicionarAresta(3, 1);
     grafo.adicionarAresta(3, 2);
    
    
    cout << "Grau de saida vert 1 : " << grafo.obterGrauDeSaida(1) << endl;
    cout << "Grau de saida vert 3 : " << grafo.obterGrauDeSaida(3) << endl;
    
    if(grafo.existeVizinhho(0, 2))
        cout << "2 e vizinho de 0";
    else
        cout << "2 nao e vizinho de 0";
    
    
    
    return 0;
}
