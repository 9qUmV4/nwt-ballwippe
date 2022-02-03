# Projektdokumentation

## Datenblätter

- [Lichtsensor](https://www.farnell.com/datasheets/1657845.pdf)
- [Ultraschallsensor](https://www.mikrocontroller.net/attachment/218122/HC-SR04_ultraschallmodul_beschreibung_3.pdf)

## Aufgaben
- [ ] Zeichen von Bauteilen
  - [x] Grundplatte
  - [x] Laufschinen
  - [x] Standbeine
  - [x] Ball
  - [x] Fuß
  - [ ] Motorhalter
  - [ ] Achse
  - [ ] Lager
  - [ ] Endstück links
  - [ ] Endstück rechts
  - [ ] Schrauben 
- [ ] Zusammensetzen


## Zeitplan

### Stunde 3 (11.01.2022)
    1. Testen von den verschiedenen Abstandssensoren
    2. Arduino macht Probleme beim Hochladen (Hochladen nicht möglich) 
        - Problem war, dass der Lichtsensor auf dem Digitalport 1 angeschlossen war (Inteferentz mit Serieller Kommunikation)
    3. Problem behoben
    4. Testreihe aufgenommen

### Stunde 4 (2022-01-12)
    1. Zeichnen von Bauteilen
       - [x] Grundplatte
       - [x] Laufschinen
       - [x] Standbeine
       - [x] Ball
       - [x] Fuß
       - [ ] Motorhalter
       - [ ] Achse
       - [ ] Lager
       - [ ] Endstück links
       - [ ] Endstück rechts
       - [ ] Schrauben 

    2. Zusammensetzen begonnen

### Stunde 5 (2022-01-18)
    Info: Nur eine Stunde wegen GFS
     
    1. Zeichen von Bauteilen
    2. Zusammensetzen von Teilen

### Stunde 6 (2022-02-01)
    Info: Nur Jan anwesend (Krankheit)

    Weiterzeichen an `Lager` und Gesamtkonstruktionn


## Testing

### Sensor Tests

Lichtsensor steht 1,3 cm über, dass heißt, 1,3 cm müssen auf die gemessen Werte addiert werden.  Werte in cm.

**Mit Brett**

| Abstand (Brett) | Schallsensor | Lichtsensor |
--- | --- | --- |
| 5 | 5 | 8|
| 10 | 11 | 10 |
| 15 | 16 | 15 |
| 20 | 20 | 21 |
| 25 | 26 | 27 |
| 30 | 30 | 34 |
| 35 | 34 | 39 |

**Mit Ball (3,9 cm Durchmesser / kleiner Ball)**

| Abstand (Ball) | Schallsensor | Lichtsensor |
--- | --- | --- |
| 5 | 5| 9
| 10 | 15| 9
| 15 | 176 | 15
| 20 | 176| 21
| 25 | 176| 27
| 30 | 177| 33
| 35 | 177| 39

**Ergebnis**
Wir verwenden den Lichtsensor, da der Schallsensor ab 15 Zentimetern den Ball nicht mehr erkennt, erkennbar an dem deutlichen Sprung zu 177 cm.