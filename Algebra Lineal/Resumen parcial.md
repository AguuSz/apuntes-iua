# Espacios vectoriales

> Sean V un espacio vectorial, U un vector en V y K un escalar, entonces:
> 1. $ 0 \bigodot u = 0 $
> 1. $ k \bigodot 0 = 0 $
> 1. $ -1 \bigodot u = -u $
> 1. Si $ K \bigodot u = 0 $, entonces $k = 0$ o $u=0$

**Si no se cumple alguno de los 10 axiomas, entonces no es considerado un espacio vectorial.**

# Subespacios vectoriales

Definicion: 

> Un subconjunto W de un espacio vectorial V se denomina subespacio de V si W es un espacio vectorial bajo la adicion y la multiplicacion escalar definidas sobre V.

Teorema: 

> Si W es un conjunto formado por uno o mas vectores de un espacio vectorial V, entonces W es un subespacio de V si y solo si se cumplen las siguientes condiciones:
> 1. Axioma 1.
> 1. Axioma 6.

## Subespacios caracteristicos

| Subespacios en $R^2$          | Subespacios en $R^3$           |
|-------------------------------|--------------------------------|
| - {0}                         | {0}                            |
| - Rectas que pasan por origen | Rectas que pasan por origen    |
| - $R^2$                       | Planos que pasan por el origen |
|                               | - $R3$                         |

Para comprobar si es un subespacio vectorial de $R^n$ tenemos que verificar si se cumple el axioma 1 y axioma 6.

### Axiomas

1) **Axioma 1** $\rightarrow$ Si $\overline{U}$ y $\overline{V}$ son objetos en V, entonces $ U \oplus V $ esta en V.
6) **Axioma 6** $\rightarrow$ Si K es un producto escalar y U es cualquier objeto en V, entonces $ K \oplus U $ esta en V.

[Link de ejercicio](https://www.youtube.com/watch?v=J1e7LnxkqPw&ab_channel=unicoos)

# Combinacion lineal

Una combinacion lineal de dos o mas vectores es el vector que se obtiene al smar esos vectrores multipliocados por algunos escalares.. Es decir, una combinacion lineal es una expresion de la forma:

**$$ \overrightarrow{v} = k1\overrightarrow{v1} + k2\overrightarrow{v2} + ... + k_n\overrightarrow{v_n} $$**

**Van a existir tantas combinaciones lineales como dimensiones tengamos.**

![](https://i.imgur.com/naqBH7S.png)

# Espacio generado

Si $v_1$, $v_2$, $...$, $v_r$ son vectores en un espacio vectorial V, entonces en general **algunos** vectores en V **pueden** ser combinaciones lineales de $v_1$, $v_2$, ..., $v_r$ y **otros no**. El siguiente teorema muestra que si se construye un conjunto W que consta de todos los vectores que es posible expresar como combinaciones lineales de $v_1$, $v_2$, ..., $v_r$, entonces W forma un subespacio de V.

> Si $v_1$, $v_2$, $...$, $v_r$ son vectores en un espacio vectorial V, entonces:
> 1. El conjunto W de todas las combinaciones lineales de $v_1$, $v_2$, $...$, $v_r$ es un subespacio de V.
> 1. W es el menor subespacio de V que contiene a $v_1$, $v_2$, $...$, $v_r$ en el sentido de que cualquier otro subespacio de V que contenga a $v_1$, $v_2$, $...$, $v_r$ debe contener a W.

Practica encontrada en la carpeta.

Lo que se resume para hacer en ejercicios de este tipo es basicamente plantear la ecuacion de combinacion lineal. Y en base a esta reemplazar los valores de los vectores. 
Tecnicamente habria que plantear un Gauss y hacer que no surja condicion alguna sobre los W. Para que esto suceda, hacemos que el determinante tenga que dar distinto de 0 y comprobamos. **Si da**, entonces genera todo $R^n$, **caso contrario** hay que ver que genera (se hace Gauss en la ampliada).

# Independencia lineal

> Si $ S = $ {$v_1$, $v_2$, $...$, $v_r$} es un conjunto no vacio de vectores, entonces la ecuacion vectorial
> $$ k_1 \cdot v_1 + k_2 \cdot v_2 + ... + k_r \cdot v_r = 0 $$
> Tiene por lo menos una solucion, a saber, 
> $$ k_1 = 0, k_2 = 0, k_r = 0 $$
> Si esta es la unica solucion, entonces S se denomina conjunto **linealmente independiente**. Si existen otras soluciones, entonces S se denomina conjunto **linealmente dependiente**.

Basicamente planteamos Gauss en los vectores que nos den para comprobar si son linealmente independientes y los igualamos a 0 para luego hacer la reducida con **Gauss-Jordan**.

* Si tiene **solucion unica** $\rightarrow$ es linealmente *independiente* (L. I).
* Si tiene **solucion parametrica** $\rightarrow$ es linealmente **dependiente** (L. D).

# Base

> Si V es cualquier espacio vectorial y $ S = $ {$v_1$, $v_2$, $...$, $v_r$} es un conjunto de vectores en V, entonces S se llama **base** de V **si se cumplen** las siguientes 2 condiciones:
> 1. S es linealmente independiente.
> 1. S genera a V.

En estos ejercicios basicamente lo que hay que hacer es plantear la determinante del conjunto de vectores que te den para analizar. Al plantear la determinante distinta a 0, entas pidiendo que tenga solucion unica, y que de esa manera se cumplan los 2 requisitos necesarios.

## Base estandar para $R^n$

![](https://i.imgur.com/IpFp8NY.png)

# Vectores renglon y vectores columna

Los vectores renglones son aquellos que se forman tomando como vector toda una fila.
Los vectores columna es lo mismo, pero aplicado con columnas.

![](https://i.imgur.com/znO2TL0.png)
![](https://i.imgur.com/Gu5wvXC.png)

# Espacio renglon, espacio columna y espacio nulo

> Si A es una matriz m x n, entonces el subespacio de $R^n$ generado por los vectores renglon de A se denomina **espacio renglon** de A, y el subespacio de $R^m$ generado por los vectores columna de A se denomina **espacio columna** de A. El espacio solucion del sistema de ecuaciones homogeneo $Ax = 0$, que es un subespacio de $R^n$, se denomina **espacio nulo**.

**Teorema importante**:

> Si A es cualquier matriz, entonces el espacio renglon y el espacio columna de A tienen la misma dimension.

# Rango y nulidad

La dimension comun del espacio renglon y del espacio columna de  una matriz A se denomina **rango** de A y se denota por rango(A); la dimension del espacio nulo de A se denomina **nulidad** de A y se denota por Nu(A).

Para encontrar la nulidad de A es necesario determinar la dimension del espacio solucion del sistema lineal $Ax = 0$. Este sistema se puede resolver expresando la matriz aumentada en la forma escalonada reducida.

> Si A es cualquier matriz, entonces $Ran(A) = Ran(A^T)$.

Teorema de la dimension:

> Si A es una matriz con **n** columnas, entonces:
> $$ rango(A) + nulidad(A) = n $$

Otro teorema importante:

> Si A es una matriz n x n, entonces:
> 1. Rango(A) $\rightarrow$ Numero de variables principales que hay en la solucion de $Ax = 0$.
> 1. Nulidad(A) $\rightarrow$ Numero de parametros que hay en la solucion de $Ax = 0$ 

# Ortonormalidad y ortogonalidad

Se pueden encontrar en los pdfs de la carpeta.

# Autovalores y Autovectores

Se pueden encontrar en los pdfs de la carpeta.
