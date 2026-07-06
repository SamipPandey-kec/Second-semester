//create a class name cricket player with member variable to represent name, age and number of matches played. from this derive two classes baller and bats man . Baller has a number of wickets as member ariable while the batter has number of runs and centuries as a member variable . use appropriate member in all classes to read and display the respective data 

#include<iostream>
#include<iomanip>
using namespace std;

class Cricketer{
    protected:
        string name;
        int age;
        int matches;
    public:
        Cricketer(string n="", int a=0, int m=0):name(n), age(a), matches(m){}
        virtual ~Cricketer(){}
        virtual void display()=0;

};

class bowler:public Cricketer{
    int wickets;
    public:
        bowler(string n="", int a=0, int m=0, int w=0):Cricketer(n,a,m), wickets(w){}
        ~bowler(){}

        void display(){
            cout<<endl;
        cout<<setw(20)<<this->name<<setw(20)<<this->age<<setw(10)<<this->matches<<setw(10)<<this->wickets<<setw(10);
        }

};

class batsman:public Cricketer{
    int run;
    int centuries;
    public:
        batsman(string n="", int a=0, int m=0, int r=0, int c=0):Cricketer(n,a,m), run(r), centuries(c){}
        ~batsman(){}

        void display(){
            cout<<endl;
        cout<<setw(20)<<this->name<<setw(20)<<this->age<<setw(10)<<this->matches<<setw(10)<<this->run<<setw(10)<<this->centuries<<setw(10);
        }
 

};

int main(){
    cout<<setw(20)<<"Name"<<setw(20)<<"Age"<<setw(10)<<"Matches"<<setw(10)<<"Wickets"<<setw(10)<<"Runs"<<setw(10)<<"Centuries"<<setw(10)<<endl;
    Cricketer *b= new batsman("Virat Kohli", 34, 254, 12040, 43);

    Cricketer *bo= new bowler("Jasprit Bumrah", 27, 67, 108);

    b->display();
    bo->display();

    delete b;
    delete bo;

    return 0;
}