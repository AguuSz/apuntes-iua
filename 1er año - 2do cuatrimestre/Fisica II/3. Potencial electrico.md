# Potencial electrico

**Definicion**: El potencial electrico es el trabajo que debe realizar una fuerza externa para traer una carga positiva unitaria $q$ desde el punto de referencia hasta el punto considerado, en contra de la fuerza electrica y a velocidad constante.

# Diferencia de potencial electrico

**Definicion**: La diferencia de potencial electrico entre 2 puntos A y B, se define como el trabajo, por unidad de carga, necesario para llevar una carga de prueba desde A hasta B, en un campo electrico, manteniendola en equilibrio.
$$ V_B - V_A = ΔV = \frac{W_{ab}}{q_0} = - \displaystyle \int_A^B \overrightarrow{E} \cdot d\overrightarrow{l} = [V] $$

> Integral de linea del campo electrico.

La fuerza electrica es conservativa, por lo que la integral definida anteriormente, es independiente de la trayectoria seguida para conectar A y B, por lo que si elegimos bien la trayectoria podemos simplificar los calculos.

**Ejemplo**: Calcular la diferencia de potencial entre los puntos $a$ y $b$ debido a una carga puntual positiva $q$.
![](https://i.imgur.com/JdYocdl.png)

#### Tramo recto

![](https://i.imgur.com/cWYZxWj.png)
![](https://i.imgur.com/4HQOVMh.png)

#### Tramo circular

![](https://i.imgur.com/XStNXwX.png)

Por lo que nos queda de la siguiente manera:
![](https://i.imgur.com/t6YGk10.png)

# Energia potencial electrico

Al igual que cuando hablamos de la energía potencial gravitatoria estudiamos que un cuerpo que se encuentra a una determinada altura de la superficie de la Tierra adquiere una determinada cantidad de energía potencial provocada por la acción de la fuerza gravitatoria, un cuerpo cargado que sufre la acción de una fuerza eléctrica adquiere energía potencial eléctrica (Ep).

$$ ΔU_{AB} = -W_{AB} $$

> El trabajo realizado por la fuerza eléctrica para trasladar una carga desde un punto A a otro B se puede expresar de la siguiente forma:
> $$ W_{ab} = \displaystyle \int_A^B \overrightarrow{F} \cdot d\overrightarrow{l} $$ 

Nosotros sabemos que $\overrightarrow{F} = q_0 \cdot \overrightarrow{E}$, por lo que reemplazamos en la formula quedando:

$$ W_{ab} = \displaystyle q_0 \cdot \int_A^B \overrightarrow{E} \cdot d\overrightarrow{l} = q_0 \cdot(-ΔV_{ab}) $$

**$$ ΔU_{AB} = q_0 \cdot (V_B - V_A) = [J] $$**

# Potencial electrico en un punto

La expresion anterior nos sirve para calcular la diferencia de energia entre 2 puntos, sin embargo la energia potencial en un punto es siempre un valor relativo con respecto a otro. Entonces lo que se hace es usar como referencia un punto ubicado en el infinito. En esa distancia no existe fuerza electrica que atraiga o repela las cargas, por lo que **la energia potencial electrica alli es nula**. Por lo que si aplicamos esa consideracion, obtenemos que:

$$ V(r) = \displaystyle - \int_∞^A \overrightarrow{E} \cdot d\overrightarrow{l} $$ 

$$ \overrightarrow{E} \cdot d\overrightarrow{l} = E \cdot dl \cdot cos(180) $$

$$ dl = -dr $$

$$ V(r) = \displaystyle \int_∞^A E \cdot (-dl)\cdot (-1) $$ 

$$ V(r) = \displaystyle \int_∞^A \frac{k \cdot q}{r^2} \cdot dr $$ 

$$ V(r) = -k \cdot q \cdot {(\frac{-1}{r})}_∞^r $$

> **$$ V(r) = \frac{k \cdot q}{r} $$**
> Potencial electrico en un punto ubicado a una distancia r de una carga puntual.

# Potencial de un conjunto de cargas puntuales

$$ V(P) = V1(P) + V2(P) + ... + Vn(P) $$

$$ V(P) = \frac{k \cdot q_1}{r_1} + \frac{k \cdot q_2}{r_2} + ... + \frac{k \cdot q_n}{r_n} $$

**$$ V(P) = \displaystyle \sum_{i=1}^N \frac{k \cdot q_i}{r_i} $$**

> La formula anterior es una suma escalar, lo que nos indica que el potencial en si es **un escalar**.

Si reemplazamos nos queda:

**$$ V(P) = \displaystyle k \cdot \sum_{i=1}^N \frac{q_i}{|| \overrightarrow{r} - \overrightarrow{r_{qi}} ||} $$**

# Potencial electrico de distribuciones continuas de carga

Es posible calcular el potencial electrico en un punto P debido a una distribucion continua de cargas dividiendo al cuerpo en pequeños elementos de carga $dq$, que consideremos como cargas puntuales.

La contribucion al potencial de ese elemento de carga es:
$$ dv = k \cdot \frac{dq}{r} $$

Por lo que el potencial en P sera:

**$$ V(P) = \displaystyle k \cdot \int \frac{dq}{r} $$**
