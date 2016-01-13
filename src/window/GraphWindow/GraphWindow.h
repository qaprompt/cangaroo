/*

  Copyright (c) 2015, 2016 Hubert Denkmair <hubert@denkmair.de>

  This file is part of cangaroo.

  cangaroo is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 2 of the License, or
  (at your option) any later version.

  cangaroo is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with cangaroo.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef GRAPHWINDOW_H
#define GRAPHWINDOW_H

#include <MdiWindow.h>
#include <model/MeasurementSetup.h>
#include <Backend.h>

namespace Ui {
class GraphWindow;
}

class QDomDocument;
class QDomElement;

class GraphWindow : public MdiWindow
{
    Q_OBJECT

public:
    explicit GraphWindow(QWidget *parent, Backend &backend);
    ~GraphWindow();
    virtual bool saveXML(Backend &backend, QDomDocument &xml, QDomElement &root);
    virtual bool loadXML(Backend &backend, QDomElement &el);

private:
    Ui::GraphWindow *ui;
    Backend &_backend;
};

#endif // GRAPHWINDOW_H