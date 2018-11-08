//
//  ex11_23.cpp
//  Exercise 11.23
//
//  Created by pezy on 12/16/14.
//  Copyright (c) 2014 pezy. All rights reserved.
//
//  Rewrite the map that stored vectors of children’s names with a key that is
//  the family last name for the exercises in 11.2.1 (p. 424) to use a multimap.

#include <map>
#include <string>
#include <iostream>

using std::string;

int main()
{
    std::multimap<string, vector<string>> families;
    
    std::string lastName, chldName;
    while ([&]() -> bool {
        std::cout << "Please enter last name:\n";

        return std::cin >> lastName && lastName != "@q";
    }())
    {
        std::cout << "PLZ Enter children's name:\n";
        vector <string> name;
        while (std::cin >> chldName && chldName != "@q") {
            //! add new items into the vector
            name.push_back(chldName);           
        }
        families.emplace(lastName, name);
    }
    for (const auto& s : families){
        for(const auto & n:s.second)
            std::cout << n << ", ";
        std::cout << s.first << std::endl;}
}
