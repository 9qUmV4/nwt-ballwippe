# Projektdokumentation

## Datenblätter

- [Lichtsensor](https://www.farnell.com/datasheets/1657845.pdf)
- [Ultraschallsensor](https://www.mikrocontroller.net/attachment/218122/HC-SR04_ultraschallmodul_beschreibung_3.pdf)

## Aufgaben
- [ ] Zeichen von Bauteilen
  - [x] [Grundplatte](../cad-files/Grundplatte.FCStd)
  - [x] [Laufschinen](../cad-files/Laufschinen.FCStd)
  - [x] [Standbeine](../cad-files/Standbeine.FCStd)
  - [x] [Ball](../cad-files/Ball_klein.FCStd)
  - [x] [Fuß](../cad-files/Fuss.FCStd)
  - [ ] Motorhalter
  - [ ] Achse
  - [ ] Lager
  - [x] [Endstück](../cad-files/Endplatte.FCStd) (links/rechts)
  - [ ] Schrauben
- [ ] Zusammensetzen
- [ ] Berechnung und Argumentation Motorbestimmung


## Projektverlauf

### Stunde 3 (11.01.2022)
1. Testen der verschiedenen Abstandssensoren
2. Arduino macht Probleme beim Hochladen (Hochladen nicht möglich)
    - Problem war, dass der Lichtsensor auf dem Digitalport 1 angeschlossen war (Inteferentz mit Serieller Kommunikation)
3. Problem behoben
4. [Testreihe](#sensor-tests) aufgenommen

### Stunde 4 (2022-01-12)
1. Zeichnen von Bauteilen
   - [Grundplatte](../cad-files/Grundplatte.FCStd)
   - [Laufschinen](../cad-files/Laufschinen.FCStd)
   - [Standbeine](../cad-files/Standbeine.FCStd)
   - [Ball](../cad-files/Ball_klein.FCStd)
   - [Fuß](../cad-files/Fuss.FCStd)

2. Zusammensetzen begonnen

### Stunde 5 (2022-01-18)
Info: Nur eine Stunde wegen GFS

1. Zeichen von Bauteilen
2. Zusammensetzen von Teilen

### Stunde 6 (2022-02-01)
Info: Nur Jan anwesend (Krankheit)

Weiterzeichen an [Lager](../cad-files/Lager.FCStd) und [Gesamtkonstruktion](../cad-files/Wippe_gesamt.FCStd)

### Stunde 7 (2022-02-08)
Beim Einfügen von [Endplatte](../cad-files/Endplatte.FCStd) und [Lager](../cad-files/Lager.FCStd) zur [Gesamtkonstruktion](../cad-files/Wippe_gesamt.FCStd) fallen nicht
übereinstimmende Maße auf ⇒ [Endplatte](../cad-files/Endplatte.FCStd) muss neu gezeichnet werden, da FreeCAD
durcheinanderkommt.


## Tests

### Sensor Tests

Um wie gefordert zu funktionieren benötigt die Wippe eine Möglichkeit, die Position des Balls einigermaßen genau zu beobachten. Dafür sind spezielle Sensoren vonnöten. Da auch die Forderung besteht, möglichst mit vorhandenen Bauteilen zu arbeiten, kam für uns zunächst der Ultraschallsensor in Betracht. Da aber Zweifel bezüglich der Genauigkeit bei einem kleinen Ball bestanden, haben wir uns für eine Testreihe entschieden, die die Entscheidung Ultraschall- und Licht(Infrarot-)sensor fällen sollte.

Für die beiden folgenden Tests wurden die Messwerte der beiden Sensoren mit [diesem Skript](../testing/sensor-testing/compare-sensors/compare-sensors.ino) erfasst.

<img src="images/testing_setup.jpg" alt="Testaufbau" style="width:300px;"/>

#### **Mit Brett**

Zunächst wurde die generelle Genauigkeit getestet, indem ein großes Styroporbrett vor die Sensoren gehalten, und die Messwerte der Sensoren mit dem Abstand des Bretts notiert wurden.

Der Lichtsensor steht 1,3 cm über, dass heißt, 1,3 cm müssen auf die gemessen Werte addiert werden.  Werte in cm.

<img src="images/testing_with_wall.jpg" alt="Testaufbau mit Styroporbrett" style="width:300px;"/>

| Abstand (Brett) | Schallsensor | Lichtsensor |
--- | --- | --- |
| 5 | 5 | 8|
| 10 | 11 | 10 |
| 15 | 16 | 15 |
| 20 | 20 | 21 |
| 25 | 26 | 27 |
| 30 | 30 | 34 |
| 35 | 34 | 39 |

Hier ist der Schallsensor etwas genauer als der Lichtsensor.

#### **Mit Ball (3,9 cm Durchmesser / kleiner Ball)**

Um die Genauigkeit im eigentlichen Anwendungsfall zu ermitteln wurde eine weitere Messreihe, diesmal mit einem kleinen Styroporball aufgenommen.

<img src="images/testing_with_ball.jpg" alt="Testaufbau mit Ball" style="width:300px;"/>

| Abstand (Ball) | Schallsensor | Lichtsensor |
--- | --- | --- |
| 5 | 5| 9
| 10 | 15| 9
| 15 | 176 | 15
| 20 | 176| 21
| 25 | 176| 27
| 30 | 177| 33
| 35 | 177| 39


#### **Ergebnis**

Wir verwenden den Lichtsensor, da der Schallsensor ab 15 Zentimetern den Ball nicht mehr erkennt, erkennbar an dem deutlichen Sprung zu 177 cm.
