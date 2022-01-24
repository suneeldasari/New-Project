//
// Created by Ernst, Michael on 08.12.2020.
//

#ifndef ADVENT2020_CHALLENGE_STRINGHELPER_H
#define ADVENT2020_CHALLENGE_STRINGHELPER_H

#include <string>
#include <iostream>

class StringHelper
{
    public :
        /***************************************************************************************************************
        * Find a SubString inside a String and return its 0-based position
        * Exception if the substring was not found
        * @param _inputString
        * @param _searchString
        * @return
        */
        static std::size_t GetPosInString(std::string& _inputString, std::string _searchString);


        /***
         * This function splits a String on a certain position. Caution, this function alters the input String!
         * It returns the front side through ret-parameter and removes this string from the _inputString.
         * @param _inputString
         * @param _splitPos
         * @return
         */
        static std::string SplitStringOnPos(std::string& _inputString, int _splitPos, bool withoutSep = true);


        static std::size_t GetPosInString(std::string& _inputString, char _searchChar);

    private :

};

#endif //ADVENT2020_CHALLENGE_STRINGHELPER_H
