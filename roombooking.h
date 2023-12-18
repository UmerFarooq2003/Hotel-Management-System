#ifndef ROOMBOOKING_H
#define ROOMBOOKING_H

#include <QMainWindow>
#include "checkout.h"
#include "checkout2.h"

namespace Ui {
class RoomBooking;
}

class RoomBooking : public QMainWindow
{
    Q_OBJECT

public:
    explicit RoomBooking(QWidget *parent = nullptr);
    ~RoomBooking();


private slots:
    void on_pushButton_10_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();


    void on_pushButton_27_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_28_clicked();

private:
    Ui::RoomBooking *ui;
    CheckOut *ptrCheck;
    Checkout2 *ptrCheck2;
    bool isRoomBooked(int roomNumber) const;
    void setButtonColorRed(int roomNumber);
    void saveButtonState(const QString& buttonName, bool pressed);
    void loadButtonStates();
    void onRoomButtonClicked();


};

#endif // ROOMBOOKING_H
