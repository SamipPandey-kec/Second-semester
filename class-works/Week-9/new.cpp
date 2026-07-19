//USe get and put function to read and display it and also count the number of character that user has entered

#include<iostream>

int main(){
    char a;
    int b=0;
    while(1){
        std::cin.get(a);
        std::cout.put(a);
        b++;
        if(a=='\n'){
            std::cout<<b;
            exit(1);
        }

    }
    return 0;
}