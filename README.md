# Bidirectional data to Radiomaster TX16s UART port
<img src="./images/tx16s.jpg" align="right" width="20%">

La mayoría de las guías que hay sobre instalar módulos bluetooth o usar el puerto UART solo muestran como mandar telemetría hacia fuera, después de buscar por todo internet no he encontrado ninguna que explique como poder darle instrucciones desde UART o con algún módulo externo. En esta guía se explica como realizarlo y algunos métodos para poder depurar el código.

He escogido realizar el proyecto sobre la TX16s, ya que esta soporta más de 40 protocolos y me permitirá operar cualquier aparato RC de manera programática, aunque también debería funcionar en cualquier otra emisora que soporte EdgeTX y UART (Jumpter, Taranis, Eachine, SPektrum...)

El proyecto todavía está en fase de desarrollo, pero la versión mínima viable de enviar/recibir un dato funciona.

## Requisitos
* **EdgeTX 2.6.0 or above** (todavía no ha sido probado en otras versiones o en OpenTX)
* **Pines TX y RX** en la emisora, pueden ser internos o externos
* Módulo **Bluetooth HC-05** o cualquier módulo **FTDI UART to USB** en mi caso tengo FT232RL (Recomiendo utilizar el FTDI para más fiabilidad. OTROS: No es estrictamente necesario utilizar estos módulos, cualquier otro sistema que le permita una comunicación UART bidireccional con el pc es válida)
* Programa lectura/escritura de serial data en mi caso OpenSerialPort github.com/whitestone-no/open-serial-port-monitor/releases
## Guia
### **1. Conectar FTDI con emisora**
Conectar el pin **TX al RX** y el pin **RX al pin TX**
Los pines VCC y GND se utilizarán más adelante.
Es recomendable conectarlo en una placa de desarrollo, ya que más adelante facilitará depurar el código.

<img src="./images/tx16s_uart.jpg" width="25%">   
<img src="./images/tx16s_tx_rx.jpg" width="49%">

### **2. Open Serial Monitor**

Descargar el prog
