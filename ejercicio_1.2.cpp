/*  Se implementa la librería math.h para realizar la operación de potencia más adelante. Se eligen y declaran los tipos
de variables según lo requerido por la ecuación de interés compuesto. Se solicita si el interes se desea calcular mensual o anual
 y se realiza la operación. Finalmente se imprime por consola el resultado de la operación */

 #include <iostream>
 #include <math.h>
 using namespace std;
 
 int main(){
     
     // Se declaran las variables según lo requerido
     float A;    /* A y P son float por tratarse de datos grandes
                 y que pueden tener punto decimal*/
     float P;
                 // r es float porque el dato requiere decimales
     float r;
     int n;
     int t;
     char respuesta;
     
     cout<<"¿Desea referir el interés compuesto a meses o años (m/a)?: "; 
     cin>>respuesta;
 
     if ((respuesta=='m')|| (respuesta=='M')) //Si el usuario ingresó m o M, en referencia a meses
     // Se solicitan todos los datos y se almacenan en las variables dadas
         {    
         cout << "Ingresa la cantidad inicial invertida: ";
         cin >> P;
         cout << "Ingresa la tasa de interés mensual en porcentaje: ";
         cin >> r;
         cout << "Ingresa el número de meses: ";
         cin >> n;
         A = P*(pow(1+(r/100),n)); // Se realiza la operación, recordando que pow(numero a elevar, numero elevado).
         cout << "El interés compuesto es: " << A << endl;
         }
     else if ((respuesta=='a')|| (respuesta=='A'))//Si el usuario ingresó a o A, en referencia a Años
     // Se solicitan todos los datos y se almacenan en las variables dadas
     {
         cout << "Ingresa la cantidad inicial invertida: ";
         cin >> P;
         cout << "Ingresa la tasa de interés anual en porcentaje: ";
         cin >> r;
         cout << "Ingresa el número de veces que se aplica el interés al año: ";
         cin >> n;
         cout << "Ingresa el número de años: ";
         cin >> t;
         A = P*(pow(1+(r/(100*n)),n*t)); // Se realiza la operación, recordando que pow(numero a elevar, numero elevado).
         cout << "El interés compuesto es: " << A << endl;
     }
     else // si el usuario ingresa cualquer otro valor
     {
         cout<<"Entrada inválida, reinicie el programa"<< endl;
     }
     return 0;
 }