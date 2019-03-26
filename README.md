# PA-P2-actividad_5

Programación Avanzada - Parcial 2: Actividad 5

# Compilación

Por cada archivo de C, haga:

```
gcc -o EJERCICIO.exe EJERCICIO.c
```

## NOTA IMPORTANTE

Los primeros dos ejercicios (```01.c``` y ```02.c```) fueron escritos para Windows,
siguiendo las instrucciones de escribir para nuestro entorno. Usan el header
```process.h``` para las llamadas a ```exec()``` (creo que deberían igual
funcionar en Linux simplemente cambiando ```process.h``` por ```unistd.h```).

Sin embargo, no pude encontrar como hacer ```fork()``` en Windows, por lo que
escribí ese programa en Linux (CentOS), haciendo uso del header ```unistd.h```,
y sólo correrá en un entorno que lo provea. He verificado que corre como
se esperaría.