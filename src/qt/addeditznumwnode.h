#ifndef ADDEDITZNUMWNODE_H
#define ADDEDITZNUMWNODE_H

#include <QDialog>
#include <boost/filesystem.hpp>
#include <boost/filesystem/fstream.hpp>

namespace Ui {
class AddEditZnumwNode;
}


class AddEditZnumwNode : public QDialog
{
    Q_OBJECT

public:
    explicit AddEditZnumwNode(QWidget *parent = 0);
    ~AddEditZnumwNode();

protected:

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();
    void on_AddEditAddressPasteButton_clicked();
    void on_AddEditPrivkeyPasteButton_clicked();
    void on_AddEditTxhashPasteButton_clicked();

signals:

private:
    Ui::AddEditZnumwNode *ui;
};

#endif // ADDEDITZNUMWNODE_H
