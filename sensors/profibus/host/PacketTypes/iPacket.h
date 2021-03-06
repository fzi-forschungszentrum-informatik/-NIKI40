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
 * iPacket.h
 *
 * An interface for PROFIBUS packets types and pacekt type enumeration
 *
 *  Created on: 15.06.2018
 *      Author: Dovydas Girdvainis
 */

#ifndef __I_PACKET_H__
#define __I_PACKET_H__

#include <string>

enum PacketType{
    SD1 = 1,
    SD2 = 2, 
    SD3 = 3, 
    SD4 = 4, 
    SD5 = 5, 
    SD6 = 6 
};

class iPacket{
    public: 
    ~iPacket(){} 

    virtual PacketType getPacketType() = 0; 
    virtual std::string getPacketAsString() = 0; 
};

#endif //__I_PACKET_H__