# Objektinis programavimas
2022/2023 metų 2 (pavasario) semestro objektinio programavimo dalyko atsiskaitomasis darbas. Šis darbas yra sudarytas iš keletos versijų, kurios, pagal dėstytojo duotus nurodymus, yra vis tobulinamos.

# Kaip sukompiliuoti šią programą?
## Linux
Ši programa naudojasi C++11 (c++0x) programavimo kalba, tad norit ją sukompiliuoti būtina per atsisiųsti reikalingus įrankius kaip g++ ir make (makefile'ui). Šiuos įrankius lengviausiai įmanoma įsidiegti naudojant šią komandą (Ubuntu):

```bash
sudo apt install build-essential  
```

Vėliau pagrindinėje direktorijoje pakanka paleisti `make` komandą ir atsiras output failas, kuris ir yra pagrindinis šios programos failas.

SVARBU: Makefile failas naudoja c++0x, tačiau tai kuriose operacinėse sistemose naudojamas c++11 užrašymas, tad jei kompiliatorius meta klaidą dėl makefile, galimas daiktas, kad reikia pakesiti makefile eilutes kur naudojamas c++0x. Pavyzdžiui:

```bash
g++ -std=c++0x -c main.cpp
```

į:

```bash
g++ -std=c++11 -c main.cpp
```

# Windows
Labai patariu suinstaliuoti MinGW paketų tvarkyklę, kuri leis greitai ir patogiai atsisiųsti tiek make, tiek kompiliatoriui reikalingus failus. Makefile atsisiųsti ir įsidiegti galima pagal šitą [nuorodą](https://linuxhint.com/run-makefile-windows/). Norint sukompiliuoti kodą eiliškumas yra labai panašus į make atsisiuntimą, daugiau apie tai galima rasti [čia](https://www.ics.uci.edu/~pattis/common/handouts/mingweclipse/mingw.html).

Vėliau pagrindinėje direktorijoje pakanka paleisti `make` komandą ir atsiras output failas, kuris ir yra pagrindinis šios programos failas.

PATARIMAS: Jeigu įmanoma, patariu susikurti [Windows Ubuntu WSL](https://learn.microsoft.com/en-us/windows/wsl/install)

# Testai
Visi testai atlikti naudojant:
- CPU: AMD EPYC™ 7702
- RAM: 16 GB DDR4 RAM (ECC)
- SSD

## Programos spartos analizė
_Visur yra sugeneruojami 15 namų darbų pažymiai ir vienas egzamino pažymys_

1.000 įrašų:
![image](https://github.com/augustinavicius-vu/obj-prog/assets/101087475/f3d670c9-fba4-4da2-8ef7-f5d20fc5d704)

10.000 įrašų:
![image](https://github.com/augustinavicius-vu/obj-prog/assets/101087475/13b7fee6-0c14-431e-b34b-1177358e115e)

100.000 įrašų:
![image](https://github.com/augustinavicius-vu/obj-prog/assets/101087475/797aadc0-89ec-4e50-a847-43453dbcd21e)

1.000.000 įrašų:
![image](https://github.com/augustinavicius-vu/obj-prog/assets/101087475/adf7df7f-5acf-4789-abd1-dd7a490ee43d)

## Konteinerių spartos analizė
1.000
![image](https://github.com/augustinavicius-vu/obj-prog/assets/101087475/95df444a-3114-4eb0-b215-c43721eb941b)
10.000
![image](https://github.com/augustinavicius-vu/obj-prog/assets/101087475/bc792437-6d09-423c-bcfc-bcc7a3724417)
100.000
![image](https://github.com/augustinavicius-vu/obj-prog/assets/101087475/68c6c380-760d-40a6-a837-6c5d8e204ae9)
1.000.000
![image](https://github.com/augustinavicius-vu/obj-prog/assets/101087475/f56abda7-3595-4a9b-8174-4485d45bea26)

# Versijos
Čia nurodyti trumpi versijų aprašymai, daugiau informacijos [releases](https://github.com/augustinavicius-vu/obj-prog/releases) puslapyje.
## Versija 0.5
- Sukurtas naujas meniu punktas „Konteinerių veikimo greičio analizė“
- NaujasStudentas, RikiuotiStudentus, RusiuotiStudentusBalas funkcijos dabar naudoja `template` ir jų dizainas pritaikytas palaikyti vector, list ir deque konteinerius
- Atliktas konteinerių greičio išmatavimas

## Versija 0.4
- Sukurtas naujas meniu punktas „Programos spartos analizė“
- Atskiras meniu punktas su visomis atskiromis funkcijomis sukurti, nuskaityti, surūšiuoti ir išvesti į failą įrašus
- Atliktas bendras ir skirtingų programos etapų spartos išmatavimas

## Versija 0.3
- Reorganizuotas kodas į skirtingus failus

## Versija 0.2
- Programa gali nuskaityti duomenis iš failo
- Studentų išvestis dabar viename puslapyje gali pateikti vidurkį ir medianą

## Versija 0.1
- Studentų satruktūros
- Bazinis meniu naudotojui
- Vidurkio, medianos skaičiavimo funkcijos
- Kodas gali realizuoti masyvus ir vektoriaus konteinerį

# Autorius
- [@augustinavicius-vu](https://www.github.com/augustinavicius-vu)
