#pragma once

#include "Human.hpp"
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    // Inkrementujemy wiek ka�dej osoby w li�cie
    for (auto& person : people) {
        person.birthday();
    }

    // Tworzymy wektor wynikowy w odwrotnej kolejno�ci
    std::vector< char > result;
    for (auto it = people.rbegin(); it != people.rend(); ++it) {
        // Dodajemy 'n', je�li osoba jest "potworem", inaczej 'y'
        if (it->isMonster()) {
            result.push_back('n');
        }
        else {
            result.push_back('y');
        }
    }

    return result;
}
