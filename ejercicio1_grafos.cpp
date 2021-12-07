/*

 Nombres y Apellidos:  Edson Bryan Béjar Román

*/
#include<iostream>
using namespace std;


int vertArr[20][20]; 
int contador  = 0;
void print_matriz(int v) {
   int i, j;
   for(i = 0; i < v; i++) {
      for(j = 0; j < v; j++) {
         cout << vertArr[i][j] << " ";
      }
      cout << endl;
   }
}
void add_edge(int u, int v) {       
   vertArr[u][v] = 1;
   vertArr[v][u] = 1;
}

void Floyd(int* M[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < n; k++)
            {
                if(M[i][j] || (M[i][j] && M[k][j])){
                    M[i][j] = 1;
                }
            }
        }
    }
}


void Floyd(int* M[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < n; k++)
            {
                if(M[i][j] || (M[i][j] && M[k][j])){
                    M[i][j] = 1;
                }
            }
        }
    }
}


void Warshall(int* M[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < n; k++)
            {
                M[i][j] = min(M[i][j] || (M[i][j] && M[k][j]));
            }
        }
    }
}

main(int argc, char* argv[]) {
   int v = 6;    
   add_edge(0, 4);
   add_edge(0, 3);
   add_edge(1, 2);
   add_edge(1, 4);
   add_edge(1, 5);
   add_edge(2, 3);
   add_edge(2, 5);
   add_edge(5, 3);
   add_edge(5, 4);
   print_matriz(v);
}
