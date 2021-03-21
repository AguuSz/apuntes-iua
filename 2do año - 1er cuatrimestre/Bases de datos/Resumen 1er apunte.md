# 1. Concepto y origen de las BD y de los SGBD

En los 60´s se usaban los ficheron. Cuando comenzo la comunicacion entre sistemas se hicieron *on-line*, pasando a ser conjunto de ficheros interrelacionados, o mejor conocidos como $Base$ $de$ $Datos$ $(BD)$

## Ficheros vs BD

1) Entidades tipos:
•   Ficheros: tienen registros de una sola entidad tipo.
•   BD: tienen datos de varias entidades tipo.

2) Interrelaciones:
•   Ficheros: el sistema no interrelaciona ficheros.
•   BD: el sistema tiene previstas herramientas para interrelacionar entidades.

3) Redundancia:
•   Ficheros: se crean ficheros a la medida de cada aplicación, con todos los datos necesariosaunque algunos sean redundantes respecto de otros ficheros.
•   BD: todas las aplicaciones trabajan con la misma BD y la integración de los datos es básica,de modo que se evita la redundancia.

4) Usuarios
•   Ficheros: sirven para un solo usuario o una sola aplicación. Dan una sola visión del mundoreal.
•   BD: es compartida por muchos usuarios de distintos tipos. Ofrece varias visiones delmundo real

En los 70´s aparecen los $SGBD$, supone un avance importante para facilitar la programación de aplicaciones con BD y para conseguirque los programas sean independientes de los aspectos físicos de la BD.

En los 80´s hacen el boom con los ordenadores personales y la creacion de SQL en el 86.

En los 90´s se comienzan a usar las $BD$ $distribuidas$. La necesidad de tener una visión global de la empresa y de interrelacio-nar diferentes aplicaciones que utilizan BD diferentes, junto con la facilidad que dan las redes para la intercomunicación entre ordenadores,ha conducido a los SGBD actuales, que permiten que un programa pue-da trabajar con diferentes BD como si se tratase de una sola.

## Razones para la distribucion

1) Disponibilidad
• Si queda fuera de servicio uno de los sistemas, los demás seguirán funcionando.
2) Costo
• Pueden estar distribuidos por distintas y lejanas áreas geográficas

Se comienza a usar el entorno Cliente/Servidor $(C/S)$. El motivo fundamental ha sido la flexibilidad para construir y hacer crecerla configuración informática global de la empresa, así como de hacer modificaciones en ella, mediante hardware y software muy estándar y barato.

Hoy  día,  los  SGBD  relacionales  están  en  plena  transformación  paraadaptarse a tres tecnologías de éxito reciente, fuertemente relacionadas:la multimedia, la de orientación a objetos (OO) e Internet y la web.
Durante estos últimos años se ha empezado a extender un tipo de aplicaciónde  las  BD  denominado  $Data$  $Warehouse$,  o  *almacén  de  datos*.
Los SGBD se adaptan a este tipo de aplicación, incorporando:
* La creación y el mantenimiento de réplicas, con una cierta elaboración delos datos.
* La consolidación de datos de orígenes diferentes.
* La  creación  de  estructuras  físicas  que  soporten  eficientemente  el  análisismultidimensional

# Objetos y servicios de los SGBD

* *El objetivo fundamental de los SGBD es permitir que se hagan consultas nopredefinidas (ad hoc) y complejas.* 

* Flexibilidad a los cambios
* Independencia fisica de los datos
* Eliiminacion de la redundancia (teniendo en cuenta actualizaciones)
* Fijas reglas de integridad (Reglas de integridad modelo).
* Restauracion de los datos ante un fallo
* Acceso simultaneo a la BD
* Transacciones completas e impedir las parciales o interferencias (posibles fallos)
* Garantizar seguridad de confidencialidad, dar autorizaciones y derechos de acceso.

## Objetivosa futuro

* Servir eficientemente al Dara Warehouse
* Adaptarse a POO
* Incorporar el tiempo como un elemento de caracterización de la información
* Adaptarse al mundo de Internet

# Arquitectura de los SGBD

## Separacion entre niveles (esquemas)

1. *Externo*: Se sitúan las diferentes visiones lógicas que los procesosusuarios.
2. *Conseptual*: se describiren las entidades tipo, sus atributos, las interrelaciones y las restricciones o reglas de integridad.
3. *Interno*: Contiene la descripción de la organización física de la BD

![](https://i.imgur.com/DJStYwE.png)

# Flujo de datos y de control

![](https://www.dataprix.com/files/uploads/2/UOCBBDD/IntroBBDD/UOC_OpenSource_Introduccion_a_las_bases_de_datos_html_7.png)

1. El usuario realiza la peticion al SGBD.
1. Basandose en el esquema externo y el conceptual el SGBD verifica la peticion, las autorizaciones, etc.
1. El SGBD consulta con el esquema interno el/los "camino/s" para responder a dicha peticion.
1. El SGBD se fija si la pagina pedida se encuentra en los buffers (memoria cache).
1. En caso de que no lo esté (paso anterior), con ayuda del SO, va hacia la base de datos y carga en los buffers la pagina.
1. Con el apoyo del esquema interno, coloca en el area de trabajo la informacion pedida.
1. Finalmente el SGBD declara finalizada la operacion y devuelve el control al usuario.

# Modelos de BD