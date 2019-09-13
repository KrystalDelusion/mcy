/*
 *  mcy-gui -- Mutation Cover with Yosys GUI
 *
 *  Copyright (C) 2019  Miodrag Milanovic <miodrag@symbioticeda.com>
 *
 *  Permission to use, copy, modify, and/or distribute this software for any
 *  purpose with or without fee is hereby granted, provided that the above
 *  copyright notice and this permission notice appear in all copies.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 *  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 *  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 *  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 *  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 *  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 *  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 */

#ifndef TESTSETUP_H
#define TESTSETUP_H

#include <QWizard>
#include <QLabel>
#include <QListWidget>

class TestSetupPage : public QWizardPage
{
    Q_OBJECT

public:
    TestSetupPage(QWidget *parent = 0);

    int nextId() const override;

private:
    QLineEdit *mutations_size;

    QListWidget *testList;
    QPushButton *addTestButton;
    QPushButton *delTestButton;
    QListWidget *refTestList;
    QPushButton *addRefTestButton;
    QPushButton *delRefTestButton;
private Q_SLOTS:
    void addTest();
    void delTest();
    void addRefTest();
    void delRefTest();
};

#endif // TESTSETUP_H
