#include <QCoreApplication>
#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::string writeline;
    std::ofstream output("/home/andrewt/outfile.txt", std::ios::app);
    //output.open("/home/andrewt/outfile.txt");
    output << "some data";
    std::ifstream input("/home/andrewt/outfile.txt");
    while(getline(input, writeline)){
        std::cout << writeline;
    }
    input.close();
    return 0;
    return a.exec();
}

