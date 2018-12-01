#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <math.h>


using namespace std;




int main()
{
    int auxmoda=0;
    float nota=1;
    char cadena[128]; //char auxiliar
    double  cantidad=0; // total de numeros
    double  numero,suma=0,promedio,auxdesviacion=0,desviacion=0; // calculos
    double  moda[128][128],modafinal=0;

  /*for(int i=0;nota<7;i++)  // se llena la matriz moda para realizar comparacion
  {
      moda[i][0]=nota;
      nota=nota+0.1;
      auxmoda++;
      //cout << auxmoda << endl;
      //cout<<moda[i][0]<<endl;
  }

  for(int i=0;i<auxmoda;i++)  // se rellena con 0 para futuro uso
  {
      moda[i][1]=0;


  }*/


  ifstream texto("numeros.txt");
  while (!texto.eof()) {
    texto >> cadena;
    cadena[1]='.'; //se reemplaza la coma por un punto

    suma=suma+atof(cadena);
    cantidad=cantidad+1;


  }
   //cout << aux << endl;

   /* for(int j=0;j<auxmoda;j++)
    {
      if ( numero == moda[j][0])
      {


        moda[j][1]=moda[j][1] +1;
        cout<<"moda final: "<< moda[j][1] << endl;

      }
    }
*/
  promedio=suma/cantidad;//calculo promedio

//-- Calculando la desviacion estandar


  ifstream texto2("numeros.txt");

while (!texto2.eof())
    {
    texto2 >> cadena;
    cadena[1]='.'; //se reemplaza la coma por un punto

    auxdesviacion= pow(atof(cadena)-promedio,2)+auxdesviacion;
  //cout<<"La desviacion estandar es: "<< desviacion << endl;

    }
    desviacion=sqrt(auxdesviacion/cantidad);
  cout<<"La suma es: "<< suma << endl;
  cout<<"La cantidad de datos es: "<< cantidad << endl;
  cout<<"El promedio es: "<< promedio << endl;
  cout<<"La desviacion estandar es: "<< desviacion << endl;


   /* for(int i=0;i<auxmoda;i++)
    {

      if (moda[i][1]<=modafinal)
        {
            modafinal=moda[i][1];
           cout<<modafinal<<endl;


        }
    }
*/
   /* cout<<"moda final? "<<modafinal<<endl;
    for(int i=0;i<auxmoda;i++)
    {
        cout<<moda[i][1]<<endl;
     if(modafinal==moda[i][1])
            cout<<"La moda es: "<<moda[i][0]<<endl;

    }
*/

/* for(int i=0;i<auxmoda;i++)
 for(int j=1;j<2;j++)
    {


      cout<<"moda final: "<<"( "<<i<<")"<<"("<<j<<")"<< moda[i][j] << endl;

      }
*/
  texto.close();
  texto2.close();

  system("pause");
    return 0;
}






