# Trabajo práctico número 2

## Desarrollo guiado por pruebas

En este trabajo se aplican técnicas TDD (Test Driven Development).

Se aplican al desarrollo de una API para controlar LEDs con los siguientes requerimientos:

* Maneja 16 leds de dos estados (encendido y apagado).
* Se puede cambiar el estado de un led sin afectar a los otros.
* Se puede cambiar el estado de todos los led’s en una sola operación.
* Se puede recuperar el estado actual de un led.
* Los led’s están mapeados en una palabra de 16 bits enmemoria en una dirección a determinar.
* Para encender el led se debe escribir un “1” en el bit y para apagarlo se debe escribir un “0”.
* El led 1 corresponde al LSB y el led 16 al MSB.
* El reset de hardware no define un estado conocido de los led’s, estos deben ser apagados por software.


Este repositorio utiliza [pre-commit] (http://pre-commit.com/) para validaciones de formato y [ceedling] (https://www.throwtheswitch.org/ceedling) para la comprobacion de los test.

Para trabajar con el mismo considere:

1. instalar [Pre-commit] (http://pre-commit.com/#install)
2. instalar `ceedling`:

```
sudo apt install ruby
sudo gem install ceedling
```

Después de clonar el repositorio usted debería ejecutar el siguiente comando:

```
pre-commit install
```

Para compilar el codigo y ejecutar los test:

```
ceedling
```


