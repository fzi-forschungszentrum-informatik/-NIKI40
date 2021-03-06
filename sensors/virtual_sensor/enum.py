# encoding: utf-8

# Copyright 2017 NIKI 4.0 project team
#
# NIKI 4.0 was financed by the Baden-Württemberg Stiftung gGmbH (www.bwstiftung.de).
# Project partners are FZI Forschungszentrum Informatik am Karlsruher
# Institut für Technologie (www.fzi.de), Hahn-Schickard-Gesellschaft
# für angewandte Forschung e.V. (www.hahn-schickard.de) and
# Hochschule Offenburg (www.hs-offenburg.de).
# This file was developed by Mark Weyer at Hahn-Schickard.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

"""Enum-like data."""

class Enum():
    """Provides three fields:

    list, a list of name/value pairs
    index_map, a dict mapping names to their index in list
    value_map, a dict mapping names to their values."""

    def __init__(self,list):
        self.list = list
        self.index_map = { k:i for i,(k,_) in enumerate(list) }
        self.value_map = { k:v for k,v in list }

