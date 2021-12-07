/*
   Nombres y Apellidos: Edson Bryan Béjar Román

*/

#include <iostream>
#include <list>
#include <ostream>
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
                     p->m_Aristas.push_back(Edge<V,E>(Ar,q));
                 
            }


        bool buscar(Vertex<V, E>* tmp, V d){
            list <Vertex<string, int>> :: iterator it = m_grafo.begin();
            for(; it != m_grafo.end(); it++)
            {
                if((*it) -> m_Dato == d){
                    return true;
                }

            }
            return false;
        }

        void buscar(V d)
        {
            buscar(m_pVertes, d);
        }


        void print(Vertex<V, E>* tmp){
            list<Vertex<string, int> >  :: iterator it = m_grafo.begin();
            list<Edge<string, int>> :: iterator it2 = tmp -> m_Aristas.begin();
            for(; it != m_grafo.end(); it++)
            {
                for(; it2 != tmp -> m_Aristas.end(); it2++){
                    cout << tmp ->  m_Dato << "-" << endl;
                }
            }
            cout << endl;
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
