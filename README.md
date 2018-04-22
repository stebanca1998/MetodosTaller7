# MetodosTaller7
Steban Cadena Giraldo- Cód.1670129 
Julián Campiño- Cód.1226070
Nestor Cardona-Cód.1529933 

En este código se está realizandop una implementación del método de la potencia en un caso espécifico con la matriz
A={{6,5,-5}
   {2,6,-2}
   {2,5,-1}}
y con un vector inicial
x={1,2,3}

iterando 100 veces el resultado es que converge a 6, aunque alrededor de las iteraciones vemos que hay partes en las que parece que convergiera en varios puntos, como por ejemplo, entre las iteraciones 11 y 18 en que parece que convergiera a 4, también vemos que hay cambios muy bruscos, como en la iteración 50 en donde "r" está en -1.49717 y en la iteración 51 r da 26.0303. con esto podemos ver cierta inestabilidad de la matriz, la cual confirmamos al hallar su número de condicion el cual es 9.14288714272 el cual está alejado de 1.

adjunto está el archivo .cpp del cual se puede crear un archivo ejecutable y lanzará los 100 valores.
