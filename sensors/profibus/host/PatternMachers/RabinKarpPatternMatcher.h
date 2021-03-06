/*
        Copyright 2016-2018 NIKI 4.0 project team
        NIKI 4.0 was financed by the Baden-Württemberg Stiftung gGmbH (www.bwstiftung.de).
        Project partners are FZI Forschungszentrum Informatik am Karlsruher
        Institut für Technologie (www.fzi.de), Hahn-Schickard-Gesellschaft
        für angewandte Forschung e.V. (www.hahn-schickard.de) and
        Hochschule Offenburg (www.hs-offenburg.de).
        This file was developed by Hahn-Schickard.
        Licensed under the Apache License, Version 2.0 (the "License");
        you may not use this file except in compliance with the License.
        You may obtain a copy of the License at
        http://www.apache.org/licenses/LICENSE-2.0
        Unless required by applicable law or agreed to in writing, software
        distributed under the License is distributed on an "AS IS" BASIS,
        WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
        See the License for the specific language governing permissions and
        limitations under the License.
*/
/*****************************************************************************************
 * RabinKarpPatternMatcher.h
 *
 *  Created on: 15.06.2018
 *      Author: Dovydas Girdvainis
 */

#ifndef __RABIN_KARP_PATTERN_MATCHER_H__
#define __RABIN_KARP_PATTERN_MATCHER_H__

#include "iPatternMatcher.h"

class RabinKarpPatternMatcher : public iPatternMatcher {
    private: 
    int _alphabetSize;
    int _hashingPrime;
    int _dM;

    public: 
    RabinKarpPatternMatcher(int hashingPrime, int alphabetSize, int dM);
    RabinKarpPatternMatcher(int hashingPrime, int alphabetSize);
    RabinKarpPatternMatcher(int hashingPrime);
    RabinKarpPatternMatcher(); 

    int search(const char needle[], const char haystack[], int indexBuffer[]);

    int getSumOfFields(); 
};

#endif //__RABIN_KARP_PATTERN_MATCHER_H__