# Angular Sensor using Gray Code

[À COMPLÉTER : 1-2 badges optionnels, ex. build status, license — voir shields.io]

## Overview

This project implements a sensor that measures absolute angular position using a Gray-coded disk and 4 phototransistors. It was developed as the second semester's project of the BUT Mesures Physiques program at IUT Le Creusot, France, with a team of 3 students over 6 months. The system achieves an angular resolution of 22.5° using a 4-bit Gray code.

## Table of Contents

- [How It Works](#how-it-works)
- [Hardware](#hardware)
- [Repository Structure](#repository-structure)
- [Installation & Usage](#installation--usage)
- [Results](#results)
- [Limitations & Future Improvements](#limitations--future-improvements)
- [Team](#team)

## How It Works

1. A disk with a 4-bit Gray code pattern is mounted on a rotating shaft.
2. 5 phototransistors, positioned at fixed points below the disk, detect the presence or absence of light through the printed pattern. (One of the 5 phototransistors purpose is to define a light threshold when the system starts so it adapts to the ambient light.)
3. Each phototransistor's analog reading is compared against the calibrated threshold (`ValueCal + margin(25)`) to produce a binary bit.
4. The 4 bits are combined into an index used to look up the corresponding angle in a lookup table.
5. The resulting angle is displayed on a LCD16X2I2C LCD screen.

### Circuit Diagram / Schematic

[À COMPLÉTER : insère une image du schéma électronique ou du montage
![schematic](path/to/schematic.png)]

## Hardware

[À COMPLÉTER : tableau des composants avec références exactes — c'est LE point qui manque le plus dans les READMEs étudiants et qui fait la différence côté recruteur]

| Component | Reference | Quantity | Notes |
|---|---|---|---|
| Microcontroller | Arduino Uno R3 | 1 | |
| Phototransistor | [référence exacte] | [N] | |
| Gray-coded disk | [matériau / résolution] | 1 | [N]-bit |
| LCD display | [référence exacte, ex: 16x2 HD44780] | 1 | [I2C / parallel] |
| [autres composants] | | | |

## Repository Structure

[À COMPLÉTER : adapte selon l'arborescence réelle du repo]

```
.
├── Photos/            # Pictures of the end result
├── Pièces3D/           # Files of the 3D pieces
├── Projet_Arduino_Code.ino          # Full C++ code used to run the system
├── Rapport projet S2.pdf       # Report
└── README.md
```

## Mechanical conception


## Results

[À COMPLÉTER : ce que le capteur permet concrètement, avec des chiffres si possible
Exemple : "The sensor achieves an angular resolution of [X]° across [N] discrete positions, with a response time of [X] ms."]

[À COMPLÉTER : ajoute une photo du montage final et/ou une capture du simulateur HTML]

## Limitations & Future Improvements

[The result we achieved is functioning but lack multiple things in order to be usable correctly. First, the size of the sensor is too large to fit any real scenario usage. Moreover, it is not strong enough to resist any real application. The resolution is also very high, which leads to bad precision.
We could improve the sensor by adding a few more bits in order to improve the resolution by a lot. We could also add functions like a measurement of the rotating speed of the disk or a "relative angle" function.
Obviously, system we made is for education only, so it is far from an industry like sensor.]

## Team

[This projet we realised entirely with the collaboration of :]

- [Romane _________]
- [Jean-Baptiste ________]

[We all equally contributed to every aspect of this project from coding to 3D design]

Project completed as part of the **BUT Mesures Physiques** program at [IUT Le Creusot], [2026].
