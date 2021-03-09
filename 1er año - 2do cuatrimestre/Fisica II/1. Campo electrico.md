# Campo electrico

La presencia de carga electrica en una region del espacio, modifica las caracteristicas de dicho espacio dando lugar a un campo electrico. Podemos considerar entonces, un campo electrico a una region del espacio cuyas propiedades han sido modificados por la presencia de una carga electrica, y si colocamos otra carga electrica en este mismo, esta experimentara una fuerza.

El campo electrico en una posicion indica la fuerza que actuaria sobre una carga puntual positiva unitaria si estuviera en esa posicion.
El campo electrico se relaciona con la fuerza electrica que actua sobre una carga arbitraria $q$ con la expresion:
$$ \overrightarrow{E} = \frac{\overrightarrow {F}}{q} $$

# Ley de Coulomb

Esta ley describe las fuerzas que actuan a la distancia entre 2 cargas. Podemos separar el problema en 2 pasos distintos

1. Piensa que una de las cargas genera un campo electrico en todo el espacio.
1. La fuerza que actua sobre una carga introducida en el campo electrico de la primera es provocada por el campo electrico en la posicion de la carga introducida.

# Campo electrico cerca de una carga puntual aislada

El campo electrico alrededor de una sola carga puntual aislada, $q_i$ esta dado por:
$$ \overrightarrow{E} = \frac{\overrightarrow{F_0}}{q_0} = k \cdot \frac{q_i}{r^2} \cdot \hat{r_i} = [\frac{N}{C}]$$
$$ k = \frac{1}{4 \pi \epsilon_0}; \epsilon_0 = 8, 85\cdot10^{-12} \frac{C^2}{Nm^2}  $$

$k$ se la conoce como **"Constante de Coulumb"**. Y $\epsilon_0$ se lo conoce como **"permitividad del vacio"**.

La direccion del campop electrico apunta hacia afuera para una carga ountual positiva y hacia adentro para una carga puntual negativa. La magnitud del campo electrico decae como $1/r^2$ conforme nos alejamos de la carga.

![](https://i.imgur.com/uojsgS3.png)

# Campo electrico cerca de muchas cargas puntuales

Si tenemos muchas cargas puntuales esparcidas, expresamos el campo electrico como la suma de los campos de cada carga individual $q_i$; es decir:
$$ \overrightarrow{E} = k \cdot \sum_i{ \frac{q_i}{r^2} \cdot \hat{r_i}} $$

Cabe recalcar que esta es una **suma vectorial**.

Formula del apunte de la profe:
$$ \overrightarrow{E} = \frac{k \cdot q_i}{|| \overrightarrow{r}-\overrightarrow{r_i} ||^3} \cdot (\overrightarrow{r}-\overrightarrow{r_i}) $$

# Campo electrico cerca de una carga distribuida

Si las cargas estan embarradas en una distribucion continua, la sumatoria se transforma en una integral.
$$ \overrightarrow{E} = \int{ \frac{k \cdot dq}{r^2} \cdot \hat{r_i}} $$

Donde $r$ es la distancia entre $dq$ y la posicion de interes, mientras que $\hat{r}$ nos recuerda que la fuerza va en direccion de la recta que une $dq$ con la posicion de interes.

Dado que esta es una integral muy dificil porque hay 2 variables($r$ y $\hat{r}$) nosotros vamos a tener en cuenta la forma del cuerpo para trabajar esta integral.

## Cuerpo unidimensional

Ejemplo: varilla, anillo.
$$ \lambda = \frac{Q}{L} = \frac{dq}{dl} = [\frac{C}{m}]$$
Siendo $\lambda$ la **densidad lineal de carga**.

## Cuerpo bidimensional

Ejemplo: disco, plano.
$$ \sigma = \frac{Q}{A} = \frac{dq}{dA} = [\frac{C}{m^2}]$$
Siendo $\sigma$ la **densidad superficial de carga**.

## Cuerpo tridimensional

Ejemplo: esfera, elipse.
$$ \gamma = \frac{Q}{V} = \frac{dq}{dV} = [\frac{C}{m^3}]$$
Siendo $\gamma$ la **densidad volumetrica de carga**.
