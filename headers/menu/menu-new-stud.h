#include <iostream>
#include <vector>

// #include "../tools/clearcin.h"
#include "../tools/newstud.h"

void PasirinkimasNaujasStudentas(int &studentoIndeksas, VStudentas &studentai)
{
    system("cls");
    std::string tempVardas;
    std::cout << "Įveskite studento VARDĄ" << std::endl;
    std::cin >> tempVardas;

    system("cls");
    std::string tempPavarde;
    std::cout << "Įveskite studento PAVARDĘ" << std::endl;
    std::cin >> tempPavarde;

    system("cls");
    std::cout << "Ar norite studento rezultatus įvesti RANKINIU būdu ar sugeneruoti ATSITIKTINIU (1-2):" << std::endl;
    std::cout << "1. Rankiniu" << std::endl;
    std::cout << "2. Atsitiktiniu" << std::endl;

    int pasirinkimas;
    while (true)
    {
        std::cin >> pasirinkimas;
        if (!(std::cin) || (pasirinkimas != 1 && pasirinkimas != 2))
        {
            system("cls");
            std::cout << "Blogas pasirinkimas! Galimi pasirinkimai (1-2):" << std::endl;
            std::cout << "1. Rankiniu" << std::endl;
            std::cout << "2. Atsitiktiniu" << std::endl;

            ValytiIvesti();
            continue;
        }

        break;
    }

    if (pasirinkimas == 1)
    {
        system("cls");
        std::cout << "Įveskite studento EGZAMINO rezultatą" << std::endl;

        int tempEgzaminasRez;
        while (true)
        {
            std::cin >> tempEgzaminasRez;
            if (!(std::cin) || (tempEgzaminasRez < 0 || tempEgzaminasRez > 10))
            {
                std::cout << "Bloga reikšmė! EGZAMINO rezultato galimos reikšmės yra NUO 0 IKI 10 IMTINAI" << std::endl;

                ValytiIvesti();
                continue;
            }

            break;
        }

        system("cls");
        std::cout << "Įveskite studento NAMŲ DARBŲ rezultatus. Norint baigti rezultatų įvedimą, įveskite „-1“" << std::endl;

        std::vector<int> tempNamuDarbaiRez;
        int tempNamuDarbasRez;
        while (true)
        {
            std::cin >> tempNamuDarbasRez;

            if (tempNamuDarbasRez == -1)
                break;

            if (!(std::cin) || (tempNamuDarbasRez < 0 || tempNamuDarbasRez > 10))
            {
                std::cout << "Bloga reikšmė! NAMŲ DARBO rezultato galimos reikšmės yra NUO 0 IKI 10 IMTINAI, norint įvedimą baigti, įveskite „-1“" << std::endl;

                ValytiIvesti();
                continue;
            }

            tempNamuDarbaiRez.push_back(tempNamuDarbasRez);
        }

        try
        {
            NaujasStudentas(studentoIndeksas, studentai, tempVardas, tempPavarde, tempEgzaminasRez, tempNamuDarbaiRez);
            studentoIndeksas++;
        }
        catch (const std::exception &e)
        {
            system("cls");
            std::cout << "Naujo studento įrašymo operacija nepavyko! Klaidos pranešimas:" << std::endl;
            std::cerr << e.what() << '\n';
        }
    }

    if (pasirinkimas == 2)
    {
    }
}