## Cargas elétricas

### Ley de Coulomb

* $F$ : Fuerza electroestática [N]
* $K$ : cte. $=9x10^9$ $[\frac{N\cdot m^2}{C^2}]$
* $\epsilon_0 = 8, 85x10^-12$ (epsilon)
* $q$ : Carga eléctrica puntual [C]
* $r$ : Radio / Distancia entre cargas [m]

$||\overrightarrow{F}|| = F = \frac{K\cdot |q_1 \cdot q_2|}{r^2}$

$\overrightarrow{F} = \frac{K\cdot |q_1 \cdot q_2|}{r^2} \cdot \hat{r}$

$\overrightarrow{F_t} = \overrightarrow{F_1} + \overrightarrow{F_2} + ... +\overrightarrow{F_n} $

### Campo elétrico

* $\overrightarrow{E}$ : Campo eléctrico [N/C] ó [V/m]

$\overrightarrow{E} = \frac{\overrightarrow{F}}{q_0}$

#### Campo eléctrico de cargas puntuales con respecto a un punto p

$\overrightarrow{E}_{(r)} = \displaystyle\sum _{i=1}^n{\frac{K \cdot q_i}{||r_p - r_i||^3} \cdot (r_p - r_i)} $.

#### Campo eléctrico de distribuciones continuas de cargas

$\overrightarrow{E} = \int {\frac {K \cdot dq}{r^2} \cdot \hat{r}}$

| Cuerpo unidimensional          | Cuerpo bidimensional                | Cuerpo tridimensional               |
|--------------------------------|-------------------------------------|-------------------------------------|
| $λ$ : Densidad lineal de carga | $σ$ : Densidad superficial de carga | $ρ$ : Densidad volumétrica de carga |
| $$λ = \frac{Q}{L} $$           | $$σ = \frac{Q}{A} $$                | $$ρ = \frac{Q}{V} $$                |

##### Campo eléctrico en cuerpos especiales

* Varilla

$ E = E_x = \frac{K \cdot Q}{d \cdot \sqrt{d^2 + a^2}} $

> $a$ : Longitud de la varilla / 2
> $d$ : Distancia del punto a medir hacia la varilla

* Anillo

$E = E_x = \frac {K \cdot Q \cdot x}{(\sqrt{x^2 + a^2})^3} $

> $x$ : Distancia del punto a medir hasta el centro del anillo
> $a$ : Radio del anillo

* Disco

$ E = E_x = K \cdot x \cdot 2π \cdot σ \cdot (\frac{1}{x} - \frac {1}{\sqrt{x^2 + R^2}}) $

> $R$ : Radio del disco
> $x$ : distancia del punto al eje del disco

### Lineas de campo o flujo eléctrico

$Φ_E = \displaystyle\int_s  E \cdot cos (θ) \cdot d A$

> Para superficies cerradas

* $ε$ : Permitividad del vacio. $Cte = 8, 85x10^-12$

$Φ_E = \frac{Q_{enc}}{ε_0}$

#### Aplicacion de la ley de Gauss en cuerpos puntuales

* $R$ : Radio del cuerpo
* $r$ : Radio de la superficie gaussiana

##### Esfera conductora

* Dentro de la esfera

     $E = 0$

* Fuera de la esfera

    $E = \frac {Q}{ε_0 \cdot 4π \cdot r^2}$

##### Esfera no conductora

* Dentro de la esfera

    $E = \frac {Q}{ε_0 \cdot 4π \cdot R^3} \cdot r$

* Fuera de la esfera

    $E = \frac {Q}{ε_0 \cdot 4π \cdot r^2}$

##### Alambre recto e infinito

$E = \frac{λ}{ε_0 \cdot 2π \cdot r} $

##### Cilindro conductor

> $λ = σ \cdot 2π \cdot R $

| Dentro del cilindro | Fuera del cilindro                                                           |
|---------------------|------------------------------------------------------------------------------|
| $E = 0$             | $E = \frac{σ \cdot R}{ε_0 \cdot r} $ ó $E = \frac{λ}{ε_0 \cdot 2π \cdot r} $ |

Cilindro no conductor

| Dentro del cilindro                  | Fuera del cilindro                              |
|--------------------------------------|-------------------------------------------------|
| $E = \frac {ρ}{2 \cdot ε_0} \cdot r$ | $E = \frac {ρ \cdot R^2}{2 \cdot ε_0 \cdot r} $ |

##### Lámina infinita plana cargada (Medio capacitor)

$E = \frac{σ}{2 \cdot ε_0} $

> Si se ponen 2 placas de cargas opuestas enfrentadas, los campos se suman y queda dentro de ellas:

$E = \frac{σ}{ε_0} $

### Potencial eléctrico

* $V$ : Potencial electrico [V]
* $W$ : Trabajo para llevar la carga de A a B [J]
* $r$ : Distancia en linea recta hasta la carga [m]
* $U$ : Energia potencial eléctrica [U]
* $l$ : Distancia entre puntos

$F_{em} = q \cdot \overrightarrow E $

$F_{em} = -F_{ext}$

$W = \displaystyle\int_A^B F_{ext} \cdot \overrightarrow {dl}$

$V = \frac{W}{q} = - \displaystyle\int_A^B \overrightarrow E \cdot \overrightarrow {dl}$

$V_B - V_A = \frac{K \cdot q}{r_B} - \frac{K \cdot q}{r_A} $

> Si ponemos A en el infinito e igual a 0:

> $V= \frac{K \cdot q}{r} $

$U = q \cdot V$

#### Potencial eléctrico desde cuerpos puntuales

##### Anillo

* $a$ : Radio del anillo
* $x$ : Distancia desde el punto a medir hasta el centro del anillo

$V = \frac{K \cdot Q}{\sqrt{a^2 + x^2}} $

##### Disco

* $R$ : Radio del disco
* $x$ : Distancia desde el punto a medir hasta el eje del disco

$V = K \cdot 2π \cdot σ \cdot (\sqrt{R^2+x^2} - |x|) $

#### Potencial en conductores

$V_B = V_A$

#### Potencial eléctrico de cuerpos puntuales

##### Esfera conductora

* Fuera de la esfera

    $V = \frac{q}{ε_0 \cdot 4π \cdot r} $

* Dentro de la esfera (Es cte.)

    $V = \frac{q}{ε_0 \cdot 4π \cdot R} $

##### Esfera no conductora

* Fuera de la esfera

    $V = \frac{q}{ε_0 \cdot 4π \cdot r} $

* Dentro de la esfera (Es cte.)

    $V = \frac{q}{ε_0 \cdot 8π \cdot R} - (3 - \frac{r^2}{R^2}) $

##### Alambre infinito

* $r_0$ : Distancia a arbitraria para elegir v = 0
* $r$ : Radio de la superficie Gaussiana

$V = \frac{λ}{2π \cdot ε_0} \cdot ln(\frac{r_0}{r}) $

##### Cilindro conductor de largo infinito

> V va a ser 0 en los bordes del cilindro (R)

* Dentro del cilindro

    $V = 0$

* Fuera del cilindro

    $V = \frac{λ}{2π \cdot ε_0} \cdot ln(\frac{R}{r}) $

### Capacitores de vacío 

* $C$ : Capacidad [F]
* $U$ : Energia almacenada por el capacitor
* $u$ : Densidad de energia

$C = \frac{|Q|}{|ΔV|}$

#### Capacitor de placas paralelas

> $d$ : Distancia entre placas

$C = \frac {A \cdot ε_0}{d} $

#### Capacitor de placas esféricas

* Capacidad del capacitor completo

    $C = \frac{2π \cdot ε_0} {\frac{1}{r_a}-\frac{1}{r_b}}$

* Cada esfera (aunque no funciona con una sola):

    $C = 4π \cdot ε_0 \cdot R$

#### Capacitor cilíndrico

* $l$ : Altura del capacitor
* $a$ : Radio del cilindro interior
* $b$ : Radio del cilindro exterior

$C = \frac{2π \cdot ε_0 \cdot l} {ln (\frac{b}{a})} $

#### Energía almacenada 

$ U = \frac{Q^2}{2C} = \frac{1}{2} \cdot C \cdot (ΔV)^2 $

#### Densidad de energia

$u = \frac{energia}{volumen}$

$u = \frac{1}{2} \cdot  ε_0 \cdot E^2$

#### Energia de un capacitor

$$ U = \frac{Q^2}{2C} = \frac{1}{2}\cdot C(ΔV)^2 $$


## Resumen Parcial:

* Vector campo electrico: $E=\frac{K.q}{(rp-ri)^3}*r$
    * Tambien se puede calcular como $\frac{\sigma}{\epsilon_0}$
    * Donde $\sigma = \frac{Q}{A}$

* Potencial Electrico en un punto: 
    * $V=\frac{K.q}{r}$ porque suponemos V=0 en el infinito, se calcula una vez para cada r y despues se suman V1+V2+VN.
    * Diferencia de potencial entre A y B es $\Delta V = - \int_{a}^{b}Edl.cos(\alpha)$ (Con $\alpha$ siendo el angulo entre E y $\mathscr{L}$)
    Aplicando la formula de arriba:
    $\Delta V = - \int_a^b \frac{\sigma}{\epsilon_0}.dl$
    $\Delta V = - \frac{\sigma}{\epsilon_0}\int_a^b dl$
    $\int_a^b dl = l$ (La distancia entre las placas)
    $\Delta V = - \frac{\sigma.d}{\epsilon_0}$
    Aplicando la definicion de $\sigma$
    $\Delta V = - \frac{Q.d}{\epsilon_0.A}$



* Capacitancia o Capacidad: $C=\frac{|Q|}{|\Delta V|}$
    * Placa A= Placa positiva
    * Placa B = placa negativa

    $C = \frac{|Q|}{|\Delta V|}$
    $C = \frac{|Q|}{|- \frac{Q.d}{\epsilon_0.A}|}$
    $C = \frac{|Q|}{\frac{|Q|.d}{\epsilon_0.A}}$
    $C = \frac{|Q|\epsilon_0.A}{|Q|.d}$
    $C = \frac{\epsilon_0.A}{d}$

    * Capacitancia de una esfera: $C = 4\pi\epsilon_0.r$
    * capacitancia de una figura en general: $C=A.\epsilon_0$

    * Capacitancia de placas cilindricas: 
        * $\Delta V = \frac{Q}{2\pi\epsilon_0l}.Ln(\frac{b}{a})$
        * $C = \frac{Q}{\Delta V} = \frac{2\pi\epsilon_0.l}{Ln(\frac{b}{a})}$