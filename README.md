# Sistema de Señalética Inteligente para Reciclaje – Campus UAI

## Información del equipo

**Integrantes:**
- Moira Oñate
- Javiera Rivera
- Antonia Torres

**ODS seleccionado:** ODS 12 – Producción y consumo responsables.

---

## Problema a resolver

En las estaciones de contenedores diferenciados del campus UAI, los residuos pueden ser depositados de manera incorrecta debido a que la señalética existente entrega información principalmente visual y no genera una retroalimentación inmediata al usuario.

El proyecto busca mejorar esta interacción mediante un prototipo que entregue una señal visual y sonora cuando detecta la presencia de un objeto metálico.

---

## Descripción del proyecto

El proyecto consiste en un sistema de señalética y retroalimentación para estaciones de reciclaje.

El prototipo utiliza un **Arduino Uno** y un **sensor inductivo LJ12A3** para detectar la presencia de objetos metálicos.

Cuando el sensor detecta un objeto:

- Se enciende un LED indicador.
- Se enciende un segundo LED instalado en la tapa del prototipo.
- Se activa un buzzer como señal sonora.

La estructura física del prototipo fue diseñada mediante **Fusion 360** y fabricada utilizando componentes electrónicos y piezas modeladas en 3D.

> **Nota técnica:** el sensor inductivo utilizado detecta la presencia de metales. Por sí solo no permite identificar de forma exclusiva si un objeto corresponde específicamente a aluminio.

---

## Funcionamiento

El sistema funciona de la siguiente manera:

1. El sensor inductivo monitorea la zona de detección.
2. Cuando un objeto metálico se aproxima al sensor, la señal es enviada al Arduino Uno.
3. El Arduino procesa la señal.
4. Se activan simultáneamente:
   - LED principal.
   - LED externo de la tapa.
   - Buzzer.
5. Cuando el objeto se retira, los indicadores se apagan.

---

## Hardware utilizado

Los principales componentes son:

- Arduino Uno.
- Sensor inductivo LJ12A3.
- Protoboard.
- 2 LEDs.
- Resistencias de 220 Ω.
- Resistencia de 10 kΩ.
- Buzzer.
- Cables Dupont.
- Fuente de alimentación de 9 V.
- Cable USB.
- Estructura/modelo 3D.

La lista detallada de materiales se encuentra en:

`hardware/BOM.md`

---

## Conexiones principales

| Componente | Pin Arduino |
|---|---|
| Sensor inductivo | D2 |
| LED principal | D7 |
| LED de la tapa | D8 |
| Buzzer | D10 |

El sistema utiliza GND común para los componentes conectados.

---

## Software

El programa fue desarrollado utilizando **Arduino IDE**.

El código principal se encuentra en:

`software/Arduino/sistema_reciclaje.ino`

No se requieren librerías externas adicionales para el funcionamiento actual del prototipo.

---

## Diseño 3D

El diseño físico del prototipo fue desarrollado utilizando **Fusion 360**.

Los archivos correspondientes al modelo 3D y sus representaciones se encuentran en:

`diseño_3d/`

---

## Pruebas del prototipo

Se realizaron pruebas para verificar:

- Detección de objetos metálicos.
- Activación del LED principal.
- Activación del LED externo.
- Funcionamiento del buzzer.
- Funcionamiento del sistema sin conexión USB al computador, utilizando alimentación externa.

Las evidencias se encuentran en:

`pruebas/fotos/`

y

`pruebas/videos/`

---

## Iteraciones

El desarrollo se realizó de manera progresiva:

### Iteración 1
Montaje inicial del Arduino, sensor inductivo y LED.

### Iteración 2
Incorporación del buzzer como retroalimentación sonora.

### Iteración 3
Incorporación de un segundo LED externo para instalarlo en la tapa del prototipo.

### Versión final
Integración del circuito electrónico, sistema de señalización y estructura física diseñada en 3D.

La descripción detallada del proceso se encuentra en:

`iteraciones/README.md`

---

## Estructura del repositorio

```text
Proyecto_taller_TEI201/
│
├── hardware/
│   ├── fotos/
│   └── BOM.md
│
├── software/
│   └── Arduino/
│       └── sistema_reciclaje.ino
│
├── diseño_3d/
│
├── pruebas/
│   ├── fotos/
│   └── videos/
│
├── iteraciones/
│   └── README.md
│
└── README.md
```

---

## Requisitos

Para modificar o cargar nuevamente el programa:

- Arduino IDE 2.x.
- Arduino Uno.
- Cable USB.

Para modificar el modelo 3D:

- Autodesk Fusion 360.

---

## Estado del proyecto

**Versión actual:** v1.0  
**Última actualización:** Octubre 2026  
**Estado:** Prototipo funcional.
