/*
* Markdown Organizer
* Copyright (C) 2016-2018 ThoughtLogix
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef HISTORYTOOLWIDGET_H
#define HISTORYTOOLWIDGET_H

#include <QWidget>
#include <QSqlError>

namespace Ui {
class HistoryToolWidget;
}

class HistoryToolWidget : public QWidget
{
    Q_OBJECT

public:
    explicit HistoryToolWidget(QWidget *parent = 0);
    ~HistoryToolWidget();

private:
    Ui::HistoryToolWidget *ui;
    void showError(const QSqlError &err);
};

#endif // HISTORYTOOLWIDGET_H
