# Algoritmia
Repositorio general del grupo de Algoritmia de la Universidad Nacional del Oeste.

## Objetivos

La idea principal del repositorio es tener en un lugar únificado las soluciones/respuestas que se van dando en el grupo de AlgoritmiaUNO de Telegram (https://t.me/algoritmiaUNO).

## Metodología de Trabajo

Periódicamente se propondrá un problema de algoritmia en el grupo de Telegram y los distintos participantes (y gente que quiera sumarse) deberán resolverlo en el lenguaje que más cómodo les resulte. Luego de determinado lapso de tiempo se compararán las soluciones y se determinarán que tan bien cumplen con su objetivo, si son eficaces y eficientes. 

Cada problema tendrá su carpeta de soluciones en este repositorio, y dentro de la misma habrá una carpeta con el nombre del usuario y la solución propuesta por el mismo. Recuerden agregar un conjunto de casos de prueba en cada solucion propuesta, los mismos deben estar hardcodeados dentro de la misma solución. Por ejemplo:

```
bool esPar(){
    ....
}
void main(){
    /* Casos de Prueba */
    a = 1;
    b = 0;
    c = 4;

    esPar(a);
    esPar(b);
    esPar(c);
}
```

## ¿Cómo compartir mi solución?

1- El primer paso es hacer un FORK de este repositorio. Este paso lo que hace es crear una copia de este proyecto en tu perfíl de Github. Para ello tendrán que hacer click en el botón FORK de este repositorio (arriba a la derecha), y les preguntará en qué perfil quieren forkear este proyecto (Esto último quizás no aparezca).

2- Una vez que hayan forkeado el proyecto, van a su perfil de Github y allí encontrarán que tienen un repositorio nuevo llamado `algoritmia`. Lo que deben hacer es clonar el proyecto desde allí, para poder comenzar a trabajar. Para ello desde su computadora ejecutan el comando `git clone https://github.com/TU_PERFIL_DE_GITHUB/algoritmia.git`

3- Una vez que tengan el proyecto en su computadora, lo que deben hacer es crear una nueva branch para empezar a trabajar en su solución al desafio propuesto, para realizar esto se deben situar en la raiz del proyecto y ejecutar el comando `git checkout -b mi_solucion`. Este último paso creara la branch `mi_solucion` y los situara en la misma. Ahora si ya están listos para trabajar en su solución!

4- Para comenzar a trabajar, lo primero que se debe hacer es ingresar en la carpeta del desafío al que quieran proponer una solución y crear una carpeta con su nombre de usuario de Github, por ejemplo: `algoritmia/1-OrdenarImpares/TU_PERFIL_DE_GITHUB`. Y allí adentro crear el archivo con su solución en el lenguaje de su preferencia.

5- Una vez realizado el/los commit/s necesario/s se debe hacer un push de la branch en cuestión al repositorio remoto en Github, con el comando `git push origin mi_solucion`. Esto hará que en la página del repositorio en su perfil de Github aparezca un botón nuevo que diga **COMPARE && PULL REQUEST**, que iniciará un pequeño paso a paso de cómo completar el pull request con su solución! 

## Importante

* Solo se aceptaran los Pull Request que **SOLAMENTE** agreguen la carpeta del usuario en cuestión con la solución propuesta ó modificaciones a otras soluciones propuestas del mismo usuario. Cualquier PR que contenga una modificación por fuera de esto, **será rechazado**.
* No malas palabras
* No apodos ofensivos
* Nos reservamos el derecho de aprobar todos los cambios, pero de todas maneras, si hay algo que si o sí queres publicar, podes clonar este repo siempre respetando el mencionarnos. [LICENCIA](https://github.com/gnuno/algoritmia/blob/main/LICENSE)