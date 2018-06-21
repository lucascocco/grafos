#include <iostream>
#include <list>
#include <string>

using namespace std;

struct vertice {
  string id;
  list<struct aresta> arestas;
};

struct aresta {
  string id;
  int value;
  struct vertice destino;
};

int main(){
  list<struct vertice> graph;
  struct aresta atemp;
  struct vertice vtemp;
  struct vertice vtemp2;
  atemp.id = "aresta1";
  atemp.value = 1;
  vtemp.id = "vertice1";
  atemp.destino = vtemp2;
  vtemp.arestas.push_front(atemp);
  struct vertice temp;
  list<struct vertice>::iterator it;
  for (it = graph.begin(); it != graph.end(); ++it)
     cout << it->id << endl;

  return 0;
}
