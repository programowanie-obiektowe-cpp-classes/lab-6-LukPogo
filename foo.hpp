#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());

    int i {0};
    std::for_each(people.rbegin(), people.rend(), [&](Human& h){h.birthday();retval[i++]=h.isMonster() ? 'n':'y';});

    return retval;
}
