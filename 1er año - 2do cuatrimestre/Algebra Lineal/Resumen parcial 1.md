# Comprobar linealidad de una transformacion

Para comprobar que una transformacion sea lineal, se tiene que cumplir lo siguiente: 

* T(u + v) = T(u) + T(v)
* T(c U) = c . T(u)

Al anunciar estas 2 propiedades, podemos comprobar si la transformacion es o no lineal.

### Ejemplos:

![](https://i.imgur.com/kmuniIp.jpeg)
![](https://i.imgur.com/nUojcW2.jpg)

# Nucleo

Sea $T$:$R^n \rightarrow R^m$, se denomina "nucleo de T", y se denota Nu(T) a conjunto de $x \in R^n$ tales que T(x) = 0.

$$ Nu(T) = { x \in R^n / T(x) = 0 } $$

Basicamente, es el conjunto de valores dados a las variables, que hacen que la matriz tenga como resultado 0.

# Imagen

La imagen son las condiciones que se tienen que cumplir para que la matriz tenga solucion.

* Cuando la matriz resultante no se le cancele ninguna fila, decimos que la imagen es todo el conjunto de llegada.
* Cuando la matriz resultante queda de manera parametrica, decimos entonces que la imagen es todo el conjunto de llegada.
* Cuando te queda la ultima fila todo cero, exceptuando lo de la derecha, entonces decimos que la imagen va a ser igual a los valores que hagan que esa ecuacion sea igual a 0, de esa manera se va a cancelar la fila completa, quedando una matriz parametrica.

# Suryectividad e inyectividad

Si la imagen resulta ser todo el conjunto de llegada (basicamente no se anula ninguna fila), entonces **es suryectiva**. Caso contrario no lo seria.
En el caso de que el nucleo sea el vector 0, (basicamente que el nucleo de la transformacion sea (0, 0, 0)), entonces **es inyectiva**. Caso contrario no lo es.

Para ver si es invertible lo que tenemos que hacer es ver si el determinante es distinto de 0.

* Si $Det \neq 0 \longrightarrow $ es invertible.
* Si $Det = 0 \longrightarrow $ no es invertible.

# Espacios vectoriales

> Sean V un espacio vectorial, U un vector en V y K un escalar, entonces:
> 1. $ 0 \bigodot u = 0 $
> 1. $ k \bigodot 0 = 0 $
> 1. $ -1 \bigodot u = -u $
> 1. Si $ K \bigodot u = 0 $, entonces $k = 0$ o $u=0$

**Si no se cumple alguno de los 10 axiomas, entonces no es considerado un espacio vectorial.**

## Axiomas

1. Si $\overline{U}$ y $\overline{V}$ son objetos en V, entonces $ U \oplus V $ esta en V.
1. Si $\overline{U} \bigoplus \overline{V} = \overline{V} \bigoplus \overline{U} $
1. $ \overline{U} \bigoplus (\overline{V} \bigoplus \overline{W}) =  (\overline{U} \bigoplus \overline{V}) \bigoplus \overline{W} $
1. Existe un objeto $\overline0$ en V, denominado vector cero de V, tal que $\overline{0} \bigoplus \overline{u} = \overline{u}$
1. Para todo u existe un objeto -u en V, denominado opuesto de u, tal que $ u \bigoplus (-u) = (-u) \bigoplus u = \overline{0}$
1. Si K es un producto escalar y U es cualquier objeto en V, entonces $ K \oplus U $ esta en V.
1. $ k \bigodot (u \bigoplus v) = k \bigodot u \bigoplus k \bigodot v $
1. $ (k + L) \bigodot u = k\bigodot u \bigoplus L \bigodot u$
1. $ k \bigodot (L \bigodot u) = (k \cdot L) \bigodot u $
1. $ 1 \bigodot u = u $ 

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
| {0}                           | {0}                            |
| Rectas que pasan por origen   | Rectas que pasan por origen    |
| $R^2$                         | Planos que pasan por el origen |
|                               | $R^3$                         |

Para comprobar si es un subespacio vectorial de $R^n$ tenemos que verificar si se cumple el axioma 1 y axioma 6.

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

### Resumen

* Espacio fila: Reducis la matriz y son las filas que no sean nulas.
    - **BRA**(Base renglon de A) = {c1, c2, cn}

c1, c2 y cn son los coeficientes de los renglones 1, 2, n.

* Espacio columna: Reducis la matriz y chequeas las columnas donde haya 1 principales. Esos vectores se extraen de la matriz original(no reducida).

 * **BCRedA**(Base columna de la Reducida de A) = {r1', r2', rn'}, por lo tanto:
 **BCA**(Base columna de A) = {r1, r2, rn}. 

* Espacio nulo: Reducis la matriz y la igualas a 0.
    - Se despejan los 1 principales, y se les da valores parametricos a las variables que no tengan pivotes.
    - Se plantea nulidad: Nu(A) = {x1, x2, xn} y se reemplaza x1, x2, xn por los valores despejados antes. Por ejemplo Nu(A) = {2-s, 3t, -25}.
* **Rango**: cantidad de 1 principales en la reducida de A.

![](https://i.imgur.com/cqg3JGT.png)

* **Nulidad**: Cantidad de parametros que se usaron para calcular el Espacio Nulo.

![](https://i.imgur.com/CpAU40Z.png)

* **Teorema**: Rango(A) + Nulidad(A) = n, siendo n la cantidad de columnas de la matriz A. Sirve para justificar.

## Ecuacion caracteristica y autovectores

* Se calcula det(A-$\lambda$I). Es decir, te quedan todos los valores de A iguales excepto los de la diagonal principal que se transforman en A11-lamda, A22-Lamda, etc. La ecuacion del det(A-lamdaI) es la ecuacion caracteristica.
* Autovalores: Raices de la ecuacion caracteristica.
* Autovectores: Se reemplazan los autovalores en el lugar de lamda en la matriz A-LamdaI y se la reduce. La solucion del sist homogeneo (A-lamdaI)x=0 son los autovectores.

$$ proy_{\overrightarrow{V}} \overrightarrow{u}  = \frac{\overrightarrow{u} \cdot \overrightarrow{V}}{|| \overrightarrow{V}^2 ||} \cdot \overrightarrow{V}$$
