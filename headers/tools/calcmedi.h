#include <vector>
#include <algorithm>

double StudentoMediana(Studentas studentas)
{
    std::sort(studentas.namuDarbaiRez.begin(), studentas.namuDarbaiRez.end());

    if (studentas.namuDarbaiRez.size() % 2 != 0)
    {
        return (double)studentas.namuDarbaiRez[studentas.namuDarbaiRez.size() / 2];
    }
    else
    {
        return (double)(studentas.namuDarbaiRez[(studentas.namuDarbaiRez.size() - 1) / 2] + studentas.namuDarbaiRez[studentas.namuDarbaiRez.size() / 2]) / 2.0;
    }
}