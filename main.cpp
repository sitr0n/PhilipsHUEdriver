#include <QCoreApplication>
#include <philipshuedriver.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    PhilipsHUEdriver driver;
    driver.set_brightness(50);
    return a.exec();
}
