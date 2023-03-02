#include <iostream>
#include <iomanip>

#include "../tools/calcmedi.h"

void PasirinkimasSkaiciuotiMediana(VStudentas &studentai)
{
    system("cls");
    std::cout << std::setw(20) << std::left << "Vardas";
    std::cout << std::setw(20) << std::left << "Pavardė";
    std::cout << "Galutinė med." << std::endl;
    std::cout << "------------------------------------------------------" << std::endl;

    RikiuotiStudentus(studentai);

    for (auto &studentas : studentai)
    {
        std::cout << std::setw(20) << std::left << studentas.vardas;
        std::cout << std::setw(20) << std::left << studentas.pavarde;
        std::cout << std::setprecision(2) << std::fixed <<StudentoMediana(studentas) << std::endl;
    }

    system("pause");
}