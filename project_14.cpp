#include <iostream>
#include <fstream>
using namespace std;

      class player{
          private:
          int level;
          string profession;
          int skill;
          int character;
          public:
          player(int a, string b, int c, int d);
          int get_level();
          string get_profession();
          string get_skill();
          string get_character();
          void set_level(int a);
          void set_proffesion(string b);
          void set_skill(string c);
          void set_character(string d);
          }   
          
          player::player(int a, string b, string c, string d){
              level = a,
              profession = b,
              skill = c,
              character = d;
          }
          
          void player::set_level(int a){
              this->level = a; }
              void player::set_profession(string b){
                  this->profession = b; }
                  void player::set_skill(string c){
                      this->skill = c; }
                      void player::set_character(string d){
                          this->character = d; }
          
          int player::get_level(){
              return this->a;   }
              string player::get_profession(){
                  return this->b; }
                  string player::get_skill(){
                      return this->c; }
                      string player::get_character(){
                          return this->d; }

int main()
{
    player aaa();
    ofstream file_out("111.txt");
    file_out <<aaa.set_level(1);
    file_out << aaa.set_profession("knight");
    file_out << aaa.set_skill("swordsmanship");
    file_out << aaa.set_character("power 6");
    file_out << aaa.get_level() << endl;
    file_out << aaa.get_profession() << endl;
    file_out << aaa.get_skill() << endl;
    file_out << aaa.get_chsrscter() << endl;
    file_out.close();

    char buf[50];
    ifstream file_in("111.txt");
    file_in.getline (buf,50,';');
    cout << buf << endl;
   
}
