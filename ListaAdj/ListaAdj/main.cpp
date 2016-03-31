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
#include <vector>

using namespace std;


int main(int argc, const char * argv[]) {
    
    
    int v =4;
    
    vector <list<int>> adj;
    
    //for (int i =1; i<=v; ++i) ERRO!!!!!
        //adj[i]= list<int>();
    
    
    adj.assign(v+1, list<int>());
    
    
    
   // adj.assign(4+1, list<int>(0));
    
    adj[0].push_back(1);
    adj[0].push_back(3);
    adj[1].push_back(2);
    adj[3].push_back(1);
    adj[3].push_back(2);
    
    cout << "Amigos de 0 : ";
    list<int>::iterator i;
    for( i = adj[0].begin(); i != adj[0].end(); ++i)
        cout << *i << " ";
    cout <<	endl;
    
    cout << "Amigos de 1 : ";
    //list<int>::iterator i;
    for( i = adj[1].begin(); i != adj[1].end(); ++i)
        cout << *i << " ";
    cout <<	endl;
    
    
    cout << "Grafo criado com sucesso!!" << endl; 
    
    return 0;
}
