#include<iostream>
using std::istream;
using std::ostream;
using std::string;

int main(){
    istream &input_re_babuwa= std::cin;
    ostream &display_re_babuwa= std::cout;

    string c;

    input_re_babuwa>>c;
    display_re_babuwa<<c;

    return 0;

}