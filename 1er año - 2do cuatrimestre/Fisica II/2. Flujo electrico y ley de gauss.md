# Flujo electrico y ley de gauss

Lineas de campo: son las curvas integrales del campo electrico. Por lo tanto:

1. El campo $\overrightarrow{E}$ es tangente a las lineas de campo en cada punto.
1. La direccion de la linea es la misma que la del campo.
1. La densisdad de lineas es proporcional a la magnitud del campo; Donde el campo es fuerte, las lineas de campo estan cerca entre ellas, mientras que donde el campo es debil las lineas estan alejadas entre si.

Ejemplos: 
![](https://i.imgur.com/0DHZMB9.png)

# Flujo electrico ($\displaystyle \phi E$)

Dado un campo electrico $\overrightarrow{E}$ definido sobre una superficie S, el flujo electrico sobre S eesta dado por:

$$ \displaystyle \phi_E = \int_S \overrightarrow{E} \cdot d\overrightarrow{A} $$

> Donde:
> - $d\overrightarrow{A} =  \hat{n} \cdot dA$
> - $\hat{n}$ es el vector unitario normal a la superficie S.

Por lo tanto, el flujo electrico se puede expresar como:

**$$ \displaystyle \phi_E = \int_S E \cdot cos(\theta) \cdot dA $$**

**NOTA**: Existe una ambiguedad con respecto a la orientacion de la normal $\hat{n}$ (hay dos orientaciones posibles), lo que se traduce en un cambio de signo en el flujo. Por **convencion** se utiliza la **normal saliente**.

> **$$ \displaystyle \phi_E = \oint_S E \cdot cos(\theta) \cdot dA $$**
> El simbolo **$\oint$** denota que la integral se hace sobre una superficie cerrada.

## Aclaraciones importantes

* Cuando el flujo electrico queda independiente del radio de la superficie (que ahora llamaremos **"superficie gaussiana"**) podemos decir que $\phi_e$ es el mismo para cualquier tamaño de esfera.
* **Interpretacion geometrica del flujo**: $\phi_e$ es proporcional al numero de lineas de campo que atraviezan la superficie. En consecuencia, el flujo electrico a traves de cualquier superficie cerrada que rodea a una carga puntual q es $\frac{q}{\epsilon_0}$, y es independiente d ela forma y tamaño de la superficie gaussiana.

![](https://i.imgur.com/JGl4JKT.png)

# Ley de gauss

El flujo electrico atraves de cualquier superficie cerrada S es:
$$ \displaystyle \phi_E = \oint_S \overrightarrow{E} \cdot d\overrightarrow{A} = \frac{q_{enc}}{\epsilon_0} $$

Donde:

* **$q_{enc}$** es la carga neta encerrada por la superficie gaussiana S.

**Notas**:

* Si $q_{enc} > 0 \Longrightarrow \phi_e > 0 \Longrightarrow$ **flujo saliente** (las lineas de campo salen de S).
* Si $q_{enc} < 0 \Longrightarrow \phi_e < 0 \Longrightarrow$ **flujo entrante** (las lineas de campo entran a S).
* Si $q_{enc} = 0 \Longrightarrow \phi_e = 0$

# Conductores

Cuando un conductor **solido** tiene una carga neta en reposo (caso **electrostatico**), dicha carga neta se deposita en su totalidad en la suerficie del conductor (y **no** en su interior). Ademas, el campo electrostatico dentro de un conductor siempre es cero.

**Caracteristicas**:

* En un conductor $\Longrightarrow$ las cargas se mueven "libremente".
* $\overrightarrow{E} = 0$ en el caso electrostatico (si $\overrightarrow{E} \neq 0 \Longrightarrow$ las cargas se moverian).
* Por Gauss: $ \displaystyle \oint_S \overrightarrow{E} \cdot d\overrightarrow{A} = \frac{q_{enc}}{\epsilon_0} = 0 \Longrightarrow q_{enc} = 0 $

#### Que pasa si el conductor no es solido? Si tiene una cavidad por ejemplo?

Supongamos un conductor de forma arbitraria que porta una carga neta $q_c$.
Acabamos de ver que si el conductor es solido, $q_c$ se deposita en la superficie.

Si el conductor tiene una cavidad, pero la misma esta vacia $\Rightarrow q_c$ tambien se deposita en la superficie exterior del conductor.

Pero si colocamos una carga q (positiva) en la vadidad $\rightarrow$ se induce una carga -q en las paredes de la cavidad, y en la superficie exterior se deposita una carga $q_c + q$.
![](https://i.imgur.com/fxZ7DMn.png)

**Demostracion**:
Si llamamos $q_{int}$ a la carga inducida en la pared de la cavidad , y tomamos una superficie gaussiana **dentro** del conductor:

Por ser conductor $\overrightarrow{E}$ es igual a 0.

$$ \displaystyle \oint \overrightarrow{E} \cdot d\overrightarrow{A} = \frac{q_{enc}}{\epsilon_0} \Longrightarrow 0 = \frac{q_{enc}}{\epsilon_0} = \frac{q + q_{int}}{\epsilon_0} $$
$$ \Longrightarrow q_{int} = -q $$

Por conservacion de la carga: $q_{ext} + q_{int} = q_{c} \Longrightarrow q_{ext} = q_{c} + q$

# Para ver aplicaciones de la Ley de Gauss mirar el pdf de la clase 29-10
