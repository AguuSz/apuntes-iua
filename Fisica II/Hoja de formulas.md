# Formulas Física II

## Ondas

* $V$ : velocidad [m/s]
* $λ$ : longitud de onda [m]
* $K$ : número de onda 
* $T$ : período [s]
* $t$ : tiempo [s]
* $f$ : frecuencia [1/s] ó [Hz]
* $w$ : velocidad angular [rad/s] ó [1/s]
* $ϕ$ : Angulo de desfasaje [rad]

$ y = A \cdot sen(Kx + wt + ϕ)$

$ λ = \frac{2 π}{k} $

$T = \frac{2π}{w}$

$ f = \frac{1}{T} $

$K \cdot V = w$

$V = \frac{λ}{T}$

$λ \cdot f = V$

$V_y = -A \cdot w \cdot cos(Kx - wt)$

$A_y=-A \cdot w^2 \cdot sen(Kx - wt)$

### Ondas en cuerdas

$μ$ : Densidad lineal [Kg/m]
$L$ : Longitud de la cuerda [m]
$m$ : masa [Kg]
$A$ : Area [m^2]

$V = \sqrt\frac{T}{μ}$

$μ = \frac{m}{L}$

$Pot = V \cdot μ \cdot A^2 \cdot w^2 \cdot cos(Kx - wt) $

$\overrightarrow{Pot} = \frac{1}{2} \cdot μ \cdot w^2 \cdot A^2 \cdot V$

### Superposicion de ondas

Fase inicial de la suma $= \frac{A_2 \cdot sen(ϕ)}{A_1 + A_2 \cdot cos(ϕ)}$

Amplitud resultante $= \sqrt{(A_1 + A_2 \cdot cos(ϕ)^2)+(A_2 \cdot sen(ϕ))^2}$

#### Onda estacionaria

$Y_r = 2 \cdot A \cdot sen(Kx) \cdot cos (wt)$

##### Nodo para ambos extremos atados

* $X_n$ : Distancia entre nodos
* $n$ : Número de nodo

$X_n = n \cdot \frac{λ}{2}$

$λ = \frac{2 \cdot L}{n}$

##### Nodo para un solo extremo atado
>Con n impar

$λ_n = \frac{4 \cdot L}{n}$

$f_n = \frac{n}{4 \cdot L} \cdot V $

$f_n = \frac{n}{4 \cdot L} \cdot \sqrt{\frac{T}{μ}} $

### Ondas de sonido

* $ρ$ : Densidad del medio [Kg/$m^3$]
* $β$ : Nivel sonoro [dB]
* $I_o$ : Límite inferior = $10^{-12} \frac{W}{m^2}$ ó $0 dB$ 
* $P$ : Presión [Pa]
* $S$ : Amplitud [m]
* $I$ : intensidad del sonido [W/$m^2$] ó [dB]
* $r$ : Radio / Distancia hasta el emisor [m]

$V = \sqrt{\frac{β}{ρ}} $

$ΔP = ΔP_max \cdot sen (Kx - wt) $

$ΔP_max = ρ \cdot V \cdot w \cdot S_max $

$Pot = \frac{1}{2} \cdot ρ \cdot A \cdot V \cdot (w \cdot S_max)^2 $

$I = \frac{(ΔP_max)^2}{2 \cdot ρ \ cdot V} $

$β = 10 log(\frac{I}{I_0}) $

$I = \frac{Pot}{4π \cdot r^2} $

$\frac{I_1}{I_2} = (\frac{r_2}{r_1})^2 $

#### Emisor y receptor en movimiento

* $V_s$ : Velocidad del sonido [m/s]
* $V_o$ : Velocidad del observador [m/s]
* $V_f$ : Velocidad de la fuente [m/s]

$ f´ = \frac{V_s ± V_o}{V_s ± V_f} \cdot f $

|                      |Se acerca|Se aleja
|----------------------|---------|-------|
|Numerador (Observador)|    +    |   -   |
|Denominador (Fuente)  |    -    |   +   |

## Termodinámica

### Expansión volumétrica

* $V$ : Volumen [$m^3$]
* $L$ : Longitud [m]
* $α$ : Coeficiente de expansión lineal [1/K]
* $β$ : Coeficiente de expansión volumétrica [1/K]

$ΔV = β \cdot V_0 \cdot ΔT $
 
$ΔL = α \cdot L_0 \cdot ΔT $

$β = 3α $ 

### Transferencia de calor

#### Por conducción

* $Q$ : Calor [cal] ó [J]
* $C$ : Capacidad calorífica [$\frac{J}{K.Kg}$]
* $L$ : Calor latente de cambio de estado [J/Kg]
* $H$ : Corriente de calor ó tasa de flujo de calor [W]
* $K$ : Conductividad térmica del material [$\frac{W}{m \cdot K}$]
* $A$ : Área de contacto [$m^2$]
* $T$ : Temperatura [K]

$Q = C \cdot m \cdot ΔT $

$Q = m \cdot L$

$H = \frac{K \cdot A \cdot (T_h - T_c)}{L} $

#### Por radiación

* $e$ : Emisividad del objeto [0;1]
* $σ$ : cte. $5,627 x 10^{-8} [\frac{W}{m^2 \cdot K^4}]$

$Pot = σ \cdot A \cdot T^4 $

### Gases ideales

#### Trabajo

* $P$ : Presión [Pa]
* $V$ : Volumen [$m^3$]
* $f$ : Libertad de movimiento en el espacio
    * monoatómico = 3
    * Diatómico = 5
    * Poliatómico = 6
* $R$ : cte. $=8,31$

$W = \displaystyle\int_{V_i}^{V_f}{P \cdot dV} $

$ΔU = Q - W $

$P \cdot V = n \cdot R \cdot T $

$U = \frac{f}{2} \cdot n \cdot R \cdot T $

|Proceso|Q|W|ΔU|
|-|-|-|-|
|Isocórico|$C_v \cdot n \cdot ΔT$|0|$C_v \cdot n \cdot ΔT $|
|Isobárico|$C_p \cdot n \cdot ΔT$|$P \cdot ΔV$|$C_v \cdot n \cdot ΔT$|
|Isotérmico|$n\cdot R \cdot T \cdot ln(\frac{V_f}{V_i})$|$n\cdot R \cdot T \cdot ln(\frac{V_f}{V_i})$|0|

* $C_v = \frac{f}{2} \cdot R$
* $C_p = C_v + R$

##### Proceso adiabático

* $γ$ : cte.* $=\frac{C_p}{C_v}$
    * Monoatómico = $\frac{5}{3}$
    * Diatómico = $\frac{7}{5}$
    * Poliatómico = $\frac{4}{3}$ 

$Q = 0$

$ΔU = -W$

$T_f \cdot V_f^{γ-1} = T_i \cdot V_i^{γ-1}$

$P_i \cdot V_i^γ = P_f \cdot V_f^γ$

#### Eficiencia

>$e = \frac{Útil}{Entregado}$

$W = |Q_c| - |Q_f|$

##### Máquina térmica

$e = \frac{|W|}{|Q_c|}$

###### Ciclo de carnot

$e = 1- \frac{T_f}{T_c} $

###### Ciclo de Otto (Irrelevante)

$e = 1-\frac{1}{r^{γ-1}}$

$r = \frac{V_1}{V_2}$

###### Ciclo diesel (Irrelevante)

$e=1-\frac{1}{γ \cdot r^{γ-1}} \cdot \frac{α^γ - 1}{α - 1} $

#### Refrigerador

$e = \frac{Q_f}{W}$

##### De carnot

$e = \frac {T_f}{T_c-T_f} $

#### Bomba de calor

$e = \frac{Q_c}{W}$

##### De carnot

$e = \frac {T_c}{T_c-T_f}$

### Entropía

$ΔS = \displaystyle\int_i^f{\frac {dQ}{T}}$

$ΔS = C_v \cdot n \cdot ln(\frac{T_f}{T_i})+n \cdot R \cdot ln(\frac{V_f}{V_i})$

#### Isotérmico 

$ΔS = \frac{Q}{T}$

#### Adiabático reversible

$ΔS = 0$

#### Isocórico

$ΔS = C_v \cdot n \cdot ln(\frac{T_f}{T_i})$

## Cargas elétricas

### Ley de Coulomb

* $F$ : Fuerza electroestática [N]
* $K$ : cte. $=9x10^9$ $[\frac{N\cdot m^2}{C^2}]$
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

* Cuerpo unidimensional
    * $λ$ : Densidad lineal de carga
$λ = \frac{Q}{L} $

* Cuerpo bidimensional
    * $σ$ : Densidad superficial de carga
$σ = \frac{Q}{A} $

* Cuerpo tridimensional
    * $ρ$ : Densidad volumétrica de carga
    $ρ = \frac{Q}{V} $

### Lineas de campo o flujo eléctrico

$Φ_E = \displaystyle\int_s  E \cdot cos (θ) \cdot d A$

>Para superficies cerradas

* $ε$ : Permitividad del vacio. $Cte = 8,85x10^-12$

$Φ_E = \frac{Q_{enc}}{ε_0}$

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
    $V_= \frac{K \cdot q}{r} $

$U = q \cdot V$

### Capacitores de vacío 

* $C$ : Capacidad [F]
* $U$ : Energia almacenada por el capacitor
* $u$ : Densidad de energia

$C = \frac{|Q|}{|ΔV|}$

#### Capacitor de placas paralelas

>$d$ : Distancia entre placas

$C = \frac {A \cdot ε_0}{d} $

#### Capacitor de placas esféricas

* Capacidad del capacitor completo
    $C = \frac{2π \cdot ε_0} {\frac{1}{r_a}-\frac{1}{r_b}}$

* Cada esfera (aunque no funciona con una sola):
    $C = $4π \cdot ε_0 \cdot R$

#### Capacitor cilíndrico

* $l$ : Altura del capacitor
* $a$ : Radio del cilindro interior
* $b$ : Radio del cilindro exterior

$C = \frac{2π \cdot ε_0 \cdot l} {ln (\frac{b}{a})} $

#### Energía almacenada 

$ U = \frac{Q^2}{2C} = \frac{1}{2} \cdot C \cdot (ΔV)^2 $

#### Densidad de energia

$u = \frac{1}{2} \cdot  ε_0 \cdot E^2$


>Hasta aca llega el segundo parcial 

### Corriente eléctrica

* $I$ : Intesidad de corriente
* $Q$ : Carga eléctrica [C]
* $t$ : Tiempo [s]
* $n$ : Densidad de portadores [$1/m^3$]
* $A$ : Area transversal del conductor [m]
* $V_d$ : Velocidad de deriva, velocidad a la que se mueven las cargas en el medio [m/s]

$I = \frac{Q}{t} $

$I = n \cdot Q \cdot A \cdot V_d $

### Ley de Ohm

* $j$ : Densidad de corriente [$A/m^2$]
* $I$ : Intensidad de corriente [A]
* $A$ : Area transversal del conductor [$m^2$]
* $ρ$ : Resistividad del material (tabla) [$Ω \cdot m$]
* $L$ : Longitud del conductor [m]
* $R$ : Resistencia [Ω]
* $V$ : Potencial eléctrico [V]

$j = \frac{I}{A} = n \cdot Q \cdot V_d$

**$E = ρ \cdot j$**

$E = \frac{V}{L}$

$R = \frac{ρ \cdot L}{A}$

**$V = R \cdot I$**

### Potencia eléctrica

* $W$ : Potencia

$W = V \cdot I$