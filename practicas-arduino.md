---
layout: default
title: Prácticas Arduino
nav_order: 4
---

# Prácticas de Arduino Uno

<div class="terminal-box">
  <span>></span> ARDUINO LAB // 14 PRACTICAS // CODIGO + EVIDENCIAS
</div>

Esta sección reúne 14 prácticas de ejemplo para Arduino Uno. Cada código está disponible como archivo `.ino` para descargar y abrir en Arduino IDE. **Los circuitos son propuestas de práctica:** verifica las conexiones y componentes que te pidió tu profesor antes de montarlos.

> **Importante:** los videos que se adjuntaron al chat todavía necesitan subirse a la carpeta `assets/videos/` del repositorio para que puedan reproducirse en esta página. Las fotos originales de las prácticas tampoco aparecen adjuntas en este mensaje; se pueden agregar en `assets/img/` cuando estén disponibles.

## Catálogo de prácticas

<div class="practice-grid">
  <div class="practice-card">
    <span class="practice-number">01 / LED</span>
    <h2>LED parpadeante</h2>
    <p>Enciende y apaga el LED integrado del pin 13 cada segundo.</p>
    <a href="{{ site.baseurl }}/arduino/practica-01-led-parpadeante.ino">VER / DESCARGAR CÓDIGO →</a>
  </div>
  <div class="practice-card">
    <span class="practice-number">02 / LEDS</span>
    <h2>Dos LEDs alternados</h2>
    <p>Alterna dos LEDs conectados a los pines 8 y 9.</p>
    <a href="{{ site.baseurl }}/arduino/practica-02-dos-leds.ino">VER / DESCARGAR CÓDIGO →</a>
  </div>
  <div class="practice-card">
    <span class="practice-number">03 / INPUT</span>
    <h2>Botón y LED</h2>
    <p>Controla un LED con un pulsador usando INPUT_PULLUP.</p>
    <a href="{{ site.baseurl }}/arduino/practica-03-boton-led.ino">VER / DESCARGAR CÓDIGO →</a>
  </div>
  <div class="practice-card">
    <span class="practice-number">04 / CONTROL</span>
    <h2>Semáforo</h2>
    <p>Secuencia de LEDs rojo, verde y amarillo.</p>
    <a href="{{ site.baseurl }}/arduino/practica-04-semaforo.ino">VER / DESCARGAR CÓDIGO →</a>
  </div>
  <div class="practice-card">
    <span class="practice-number">05 / ANALOG</span>
    <h2>Potenciómetro</h2>
    <p>Lee una entrada analógica y muestra el valor en el monitor serial.</p>
    <a href="{{ site.baseurl }}/arduino/practica-05-potenciometro.ino">VER / DESCARGAR CÓDIGO →</a>
  </div>
  <div class="practice-card">
    <span class="practice-number">06 / SENSOR</span>
    <h2>Fotoresistencia (LDR)</h2>
    <p>Lee la intensidad de luz y regula el brillo de un LED.</p>
    <a href="{{ site.baseurl }}/arduino/practica-06-fotorresistencia.ino">VER / DESCARGAR CÓDIGO →</a>
  </div>
  <div class="practice-card">
    <span class="practice-number">07 / AUDIO</span>
    <h2>Zumbador</h2>
    <p>Genera tonos de distinta frecuencia con un zumbador pasivo.</p>
    <a href="{{ site.baseurl }}/arduino/practica-07-zumbador.ino">VER / DESCARGAR CÓDIGO →</a>
  </div>
  <div class="practice-card">
    <span class="practice-number">08 / SERVO</span>
    <h2>Servomotor</h2>
    <p>Mueve un servo de 0 a 180 grados y de regreso.</p>
    <a href="{{ site.baseurl }}/arduino/practica-08-servo.ino">VER / DESCARGAR CÓDIGO →</a>
  </div>
  <div class="practice-card">
    <span class="practice-number">09 / DISTANCE</span>
    <h2>Sensor ultrasónico</h2>
    <p>Mide distancia con un sensor HC-SR04.</p>
    <a href="{{ site.baseurl }}/arduino/practica-09-sensor-ultrasonico.ino">VER / DESCARGAR CÓDIGO →</a>
  </div>
  <div class="practice-card">
    <span class="practice-number">10 / TEMPERATURE</span>
    <h2>Temperatura LM35</h2>
    <p>Calcula una lectura de temperatura y la muestra por serial.</p>
    <a href="{{ site.baseurl }}/arduino/practica-10-temperatura-lm35.ino">VER / DESCARGAR CÓDIGO →</a>
  </div>
  <div class="practice-card">
    <span class="practice-number">11 / MOTOR</span>
    <h2>Motor DC</h2>
    <p>Controla la velocidad con PWM usando un driver o transistor adecuado.</p>
    <a href="{{ site.baseurl }}/arduino/practica-11-motor-dc.ino">VER / DESCARGAR CÓDIGO →</a>
  </div>
  <div class="practice-card">
    <span class="practice-number">12 / MOTORS</span>
    <h2>Dos motores DC</h2>
    <p>Activa dos salidas PWM para motores conectados mediante un driver.</p>
    <a href="{{ site.baseurl }}/arduino/practica-12-dos-motores.ino">VER / DESCARGAR CÓDIGO →</a>
  </div>
  <div class="practice-card">
    <span class="practice-number">13 / ALARM</span>
    <h2>Alarma por oscuridad</h2>
    <p>Activa el zumbador cuando la lectura de luz cae bajo un umbral.</p>
    <a href="{{ site.baseurl }}/arduino/practica-13-ldr-alarma.ino">VER / DESCARGAR CÓDIGO →</a>
  </div>
  <div class="practice-card">
    <span class="practice-number">14 / SEQUENCE</span>
    <h2>Secuencia de LEDs</h2>
    <p>Ejecuta una secuencia de luces de ida y vuelta.</p>
    <a href="{{ site.baseurl }}/arduino/practica-14-secuencia-leds.ino">VER / DESCARGAR CÓDIGO →</a>
  </div>
</div>

## Evidencias: fotos y videos

Las evidencias visuales se mostrarán aquí al agregarlas al repositorio. Para mantener el sitio ordenado, usa:
- `assets/img/` para fotografías de cada montaje.
- `assets/videos/` para videos MP4.
- Nombres sugeridos: `arduino-practica-01.jpg`, `arduino-practica-01.mp4`, etc.

## Antes de conectar

- Usa una resistencia adecuada en serie con cada LED.
- No conectes motores DC directamente a los pines del Arduino; usa un driver/transistor y una fuente apropiada.
- Comprueba el voltaje y el pinout de cada sensor antes de alimentar el circuito.
- Estos ejemplos son una base inicial y deben ajustarse a las prácticas reales de clase.
