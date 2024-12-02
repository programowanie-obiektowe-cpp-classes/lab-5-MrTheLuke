#pragma once

#include "Human.hpp"
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    // Inkrementujemy wiek ka¿dej osoby w liœcie
    for (auto& person : people) {
        person.birthday();
    }

    // Tworzymy wektor wynikowy w odwrotnej kolejnoœci
    std::vector< char > result;
    for (auto it = people.rbegin(); it != people.rend(); ++it) {
        // Dodajemy 'n', jeœli osoba jest "potworem", inaczej 'y'
        if (it->isMonster()) {
            result.push_back('n');
        }
        else {
            result.push_back('y');
        }
    }

    return result;
}
