/*
 * Copyright (C) OpenTX
 *
 * Based on code named
 *   th9x - http://code.google.com/p/th9x
 *   er9x - http://code.google.com/p/er9x
 *   gruvin9x - http://code.google.com/p/gruvin9x
 *
 * License GPLv2: http://www.gnu.org/licenses/gpl-2.0.html
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _PROFILECHOOSER_H_
#define _PROFILECHOOSER_H_

#include <QtWidgets>

namespace Ui {
  class ProfileChooserDialog;
}

class ProfileChooserDialog : public QDialog
{
  Q_OBJECT

  public:
    ProfileChooserDialog(QWidget * parent = 0);
    ~ProfileChooserDialog();
signals:
  void profileChanged(int newid);

  private slots:
    void on_cboProfilesCurrentIndexChanged(int index);

  private:
    Ui::ProfileChooserDialog *ui;
};

#endif // _PROFILECHOOSER_H_
