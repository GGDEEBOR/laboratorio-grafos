/ *
   Nombres y Apellidos: Edson Bryan Béjar Román
* /

#include <iostream>
#include <list>
#include <ostream>
#include <stack>
#include <queue>
using namespace std;
 
template<class V,class E>
class Vertex;

template<class V,class E>
class Edge
{
public:
    E                   m_Dato;
    Vertex<V,E> *       m_pVertes;
public:
    Edge(E d,  Vertex<V,E> * p=0)
    {
        m_Dato = d;
        m_pVertes =p;
    }
    
    Edge(){};
    
};

template<class V,class E>
class Vertex
{
public:
    V                   m_Dato;
    list< Edge <V,E> >  m_Aristas;
public:
    Vertex(V d)
    {
        m_Dato = d;
        
    }
    Vertex(){};
    
};

 
 
 template<class V, class E>
 class Grafo
 {
    private:
        list<Vertex<V,E>> m_grafo;
    public:
            Grafo(){};
            Vertex<V,E> *  find_Vertex(V v)
            {
                Vertex<V,E> * p;
                
                return p;
            }
            void Insert_Vertex(V dato)
            {
                    m_grafo.push_back(Vertex<V,E>(dato));
            }
            void Insert_Arista(V v1, V v2, E Ar)
            {
                    Vertex<V,E> * p = find_Vertex(v1);
                    Vertex<V,E> * q = find_Vertex(v2);
                    
                    if( p && q)
                        p -> m_Aristas.push_back(Edge<V,E>(Ar,q));
                    
                }

            
            // busqueda a profundidad
            void DFS(Edge<V, E>* p){
                stack <Edge<V, E>* > pila;
                pila.push(p);

                p = pila.top();

                cout << p -> m_Dato;
                pila.pop();


                int s = 0;
                while(p -> m_pVertes){
                    if(s -> Visit == false){
                        s -> Visit = true;
                        pila.push(s);
                    }
                }
            }

            // busqueda por amplitud
            void BFS(Edge<V, E>* p)
            {
                queue <Edge<V, E>*> cola;
                cola.push(p);

                while(!cola.isEmpty()){
                    p = cola.top();
                    cout << p -> m_Dato;
                    cola.pop();
                    int s = 0;
                    while(p -> m_pVertes){
                        if(s -> Visit == false){
                            s -> Visit = true;
                            cola.push(s);
                        }
                    }
                }
            }
            
          
          
 };
 
 

int main()
{
    Grafo<string, int> G;
    G.Insert_Vertex("Arequipa");
    G.Insert_Vertex("Lima");
    G.Insert_Vertex("Cuzco");
    G.Insert_Vertex("Puno");
    G.Insert_Vertex("Ica");
    
    G.Insert_Arista("Arequipa","Cuzco",250);
    G.Insert_Arista("Arequipa","Puno",200);
    G.Insert_Arista("Lima","Ica",100);
    G.Insert_Arista("Lima","Arequipa",160);
    
    return 1;
 }
