/*
        Copyright 2016-2018 NIKI 4.0 project team
        NIKI 4.0 was financed by the Baden-W�rttemberg Stiftung gGmbH (www.bwstiftung.de).
        Project partners are FZI Forschungszentrum Informatik am Karlsruher
        Institut f�r Technologie (www.fzi.de), Hahn-Schickard-Gesellschaft
        f�r angewandte Forschung e.V. (www.hahn-schickard.de) and
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
static const unsigned char FontLookup [][5] =
{                                       // Char ASCII    Index
    { 0x00, 0x00, 0x00, 0x00, 0x00 },   // sp   0x20     0
    { 0x00, 0x00, 0x2f, 0x00, 0x00 },   // !    0x21     1
    { 0x00, 0x07, 0x00, 0x07, 0x00 },   // "    0x22     2
    { 0x14, 0x7f, 0x14, 0x7f, 0x14 },   // #    0x23     3
    { 0x24, 0x2a, 0x7f, 0x2a, 0x12 },   // $    0x24     4
    { 0xc4, 0xc8, 0x10, 0x26, 0x46 },   // %    0x25     5
    { 0x36, 0x49, 0x55, 0x22, 0x50 },   // &    0x26     6
    { 0x00, 0x05, 0x03, 0x00, 0x00 },   // '    0x27     7
    { 0x00, 0x1c, 0x22, 0x41, 0x00 },   // (    0x28     8
    { 0x00, 0x41, 0x22, 0x1c, 0x00 },   // )    0x29     9
    { 0x14, 0x08, 0x3E, 0x08, 0x14 },   // *    0x2A     10
    { 0x08, 0x08, 0x3E, 0x08, 0x08 },   // +    0x2B     11
    { 0x00, 0x00, 0x50, 0x30, 0x00 },   // ,    0x2C     12
    { 0x10, 0x10, 0x10, 0x10, 0x10 },   // -    0x2D     13
    { 0x00, 0x60, 0x60, 0x00, 0x00 },   // .    0x2E     14
    { 0x20, 0x10, 0x08, 0x04, 0x02 },   // /    0x2F     15
    { 0x3E, 0x51, 0x49, 0x45, 0x3E },   // 0    0x30     16
    { 0x00, 0x42, 0x7F, 0x40, 0x00 },   // 1    0x31     17
    { 0x42, 0x61, 0x51, 0x49, 0x46 },   // 2    0x32     18
    { 0x21, 0x41, 0x45, 0x4B, 0x31 },   // 3    0x33     19
    { 0x18, 0x14, 0x12, 0x7F, 0x10 },   // 4    0x34     20
    { 0x27, 0x45, 0x45, 0x45, 0x39 },   // 5    0x35     21
    { 0x3C, 0x4A, 0x49, 0x49, 0x30 },   // 6    0x36     22
    { 0x01, 0x71, 0x09, 0x05, 0x03 },   // 7    0x37     23
    { 0x36, 0x49, 0x49, 0x49, 0x36 },   // 8    0x38     24
    { 0x06, 0x49, 0x49, 0x29, 0x1E },   // 9    0x39     25
    { 0x00, 0x36, 0x36, 0x00, 0x00 },   // :    0x3A     26
    { 0x00, 0x56, 0x36, 0x00, 0x00 },   // ;    0x3B     27
    { 0x08, 0x14, 0x22, 0x41, 0x00 },   // <    0x3C     28
    { 0x14, 0x14, 0x14, 0x14, 0x14 },   // =    0x3D     29
    { 0x00, 0x41, 0x22, 0x14, 0x08 },   // >    0x3E     30
    { 0x02, 0x01, 0x51, 0x09, 0x06 },   // ?    0x3F     31
    { 0x32, 0x49, 0x59, 0x51, 0x3E },   // @    0x40     32
    { 0x7E, 0x11, 0x11, 0x11, 0x7E },   // A    0x41     33
    { 0x7F, 0x49, 0x49, 0x49, 0x36 },   // B    0x42     34
    { 0x3E, 0x41, 0x41, 0x41, 0x22 },   // C    0x43     35
    { 0x7F, 0x41, 0x41, 0x22, 0x1C },   // D    0x44     36
    { 0x7F, 0x49, 0x49, 0x49, 0x41 },   // E    0x45     37
    { 0x7F, 0x09, 0x09, 0x09, 0x01 },   // F    0x46     38
    { 0x3E, 0x41, 0x49, 0x49, 0x7A },   // G    0x47     39
    { 0x7F, 0x08, 0x08, 0x08, 0x7F },   // H    0x48     40
    { 0x00, 0x41, 0x7F, 0x41, 0x00 },   // I    0x49     41
    { 0x20, 0x40, 0x41, 0x3F, 0x01 },   // J    0x4A     42
    { 0x7F, 0x08, 0x14, 0x22, 0x41 },   // K    0x4B     43
    { 0x7F, 0x40, 0x40, 0x40, 0x40 },   // L    0x4C     44
    { 0x7F, 0x02, 0x0C, 0x02, 0x7F },   // M    0x4D     45
    { 0x7F, 0x04, 0x08, 0x10, 0x7F },   // N    0x4E     46
    { 0x3E, 0x41, 0x41, 0x41, 0x3E },   // O    0x4F     47
    { 0x7F, 0x09, 0x09, 0x09, 0x06 },   // P    0x50     48
    { 0x3E, 0x41, 0x51, 0x21, 0x5E },   // Q    0x51     49
    { 0x7F, 0x09, 0x19, 0x29, 0x46 },   // R    0x52     50
    { 0x46, 0x49, 0x49, 0x49, 0x31 },   // S    0x53     51
    { 0x01, 0x01, 0x7F, 0x01, 0x01 },   // T    0x54     52
    { 0x3F, 0x40, 0x40, 0x40, 0x3F },   // U    0x55     53
    { 0x1F, 0x20, 0x40, 0x20, 0x1F },   // V    0x56     54
    { 0x3F, 0x40, 0x38, 0x40, 0x3F },   // W    0x57     55
    { 0x63, 0x14, 0x08, 0x14, 0x63 },   // X    0x58     56
    { 0x07, 0x08, 0x70, 0x08, 0x07 },   // Y    0x59     57
    { 0x61, 0x51, 0x49, 0x45, 0x43 },   // Z    0x5A     58
    { 0x00, 0x7F, 0x41, 0x41, 0x00 },   // [    0x5B     59
    { 0x55, 0x2A, 0x55, 0x2A, 0x55 },   // \    0x5C     60    grauer Block (jedes 2. Pixel aktiv)
    { 0x00, 0x41, 0x41, 0x7F, 0x00 },   // ]    0x5D     61
    { 0x04, 0x02, 0x01, 0x02, 0x04 },   // ^    0x5E     62
    { 0x40, 0x40, 0x40, 0x40, 0x40 },   // _    0x5F     63
    { 0x00, 0x01, 0x02, 0x04, 0x00 },   // '    0x60     64
    { 0x20, 0x54, 0x54, 0x54, 0x78 },   // a    0x61     65
    { 0x7F, 0x48, 0x44, 0x44, 0x38 },   // b    0x62     66
    { 0x38, 0x44, 0x44, 0x44, 0x20 },   // c    0x63     67
    { 0x38, 0x44, 0x44, 0x48, 0x7F },   // d    0x64     68
    { 0x38, 0x54, 0x54, 0x54, 0x18 },   // e    0x65     69
    { 0x08, 0x7E, 0x09, 0x01, 0x02 },   // f    0x66     70
    { 0x0C, 0x52, 0x52, 0x52, 0x3E },   // g    0x67     71
    { 0x7F, 0x08, 0x04, 0x04, 0x78 },   // h    0x68     72
    { 0x00, 0x44, 0x7D, 0x40, 0x00 },   // i    0x69     73
    { 0x20, 0x40, 0x44, 0x3D, 0x00 },   // j    0x6A     74
    { 0x7F, 0x10, 0x28, 0x44, 0x00 },   // k    0x6B     75
    { 0x00, 0x41, 0x7F, 0x40, 0x00 },   // l    0x6C     76
    { 0x7C, 0x04, 0x18, 0x04, 0x78 },   // m    0x6D     77
    { 0x7C, 0x08, 0x04, 0x04, 0x78 },   // n    0x6E     78
    { 0x38, 0x44, 0x44, 0x44, 0x38 },   // o    0x6F     79
    { 0x7C, 0x14, 0x14, 0x14, 0x08 },   // p    0x70     80
    { 0x08, 0x14, 0x14, 0x18, 0x7C },   // q    0x71     81
    { 0x7C, 0x08, 0x04, 0x04, 0x08 },   // r    0x72     82
    { 0x48, 0x54, 0x54, 0x54, 0x20 },   // s    0x73     83
    { 0x04, 0x3F, 0x44, 0x40, 0x20 },   // t    0x74     84
    { 0x3C, 0x40, 0x40, 0x20, 0x7C },   // u    0x75     85
    { 0x1C, 0x20, 0x40, 0x20, 0x1C },   // v    0x76     86
    { 0x3C, 0x40, 0x30, 0x40, 0x3C },   // w    0x77     87
    { 0x44, 0x28, 0x10, 0x28, 0x44 },   // x    0x78     88
    { 0x0C, 0x50, 0x50, 0x50, 0x3C },   // y    0x79     89
    { 0x44, 0x64, 0x54, 0x4C, 0x44 },   // z    0x7A     90
    { 0x06, 0x09, 0x09, 0x06, 0x00 },   // {    0x7B     91    ( zum �-Zeichen umfunktioniert)
    { 0x30, 0x4E, 0x61, 0x4E, 0x30 },   // |    0x7C     92    (urche) Rakete

    { 0x79, 0x14, 0x12, 0x14, 0x79 },   // �    0x7D     93
    { 0x38, 0x45, 0x44, 0x45, 0x38 },   // �    0x7E     94
    { 0x3D, 0x40, 0x40, 0x40, 0x3D },   // �    0x7F     95
    { 0x20, 0x55, 0x54, 0x55, 0x78 },   // �    0x80     96
    { 0x38, 0x45, 0x44, 0x45, 0x38 },   // �    0x81     97
    { 0x3C, 0x41, 0x40, 0x21, 0x7C },   // �    0x82     98
    { 0x7E, 0x01, 0x94, 0x94, 0x36 },   // �    0x83     99

};
