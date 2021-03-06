# encoding: utf-8

# Copyright 2017,2018 NIKI 4.0 project team
#
# NIKI 4.0 was financed by the Baden-Württemberg Stiftung gGmbH (www.bwstiftung.de).
# Project partners are FZI Forschungszentrum Informatik am Karlsruher
# Institut für Technologie (www.fzi.de), Hahn-Schickard-Gesellschaft
# für angewandte Forschung e.V. (www.hahn-schickard.de) and
# Hochschule Offenburg (www.hs-offenburg.de).
# This file was developed by Mark Weyer and Sebastian King at Hahn-Schickard.
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

"""The virtual sensor application."""

import sys

import PySide.QtCore as core
import PySide.QtGui as gui

import config
import ui
import resource
import cli

app = gui.QApplication(sys.argv)
palette = app.palette()
palette.setColor(gui.QPalette.Window,gui.QColor(237,224,182))
app.setPalette(palette)

try:
    cli_dict = cli.commandline().cli_dict
except cli.UnknownOptionError as e:
    print "Unknown option: " + e.arg + "\nTry `-help' for more information."
    raise SystemExit
except cli.Inconsistency as e:
    print "The argument '" + e.arg + "' is inconsistent"
    raise SystemExit

config = config.Config(cli_dict)
resources = resource.Resources()
timer = core.QTimer()
window = ui.window(config, resources, timer, cli_dict)

sys.exit(app.exec_())
