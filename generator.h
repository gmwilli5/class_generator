#ifndef GENERATOR_H_INCLUDED
#define GENERATOR_H_INCLUDED
#include <string>
#include <fstream>
class generator_class{
    private:
        std::string name;
        std::string h_text;
        std::string cpp_text;
        std::ofstream h_file;
        std::ofstream cpp_file;
        std::string h_name;
        std::string cpp_name;
        void generate_h_file();
        void write_h_file();
        void generate_cpp_file();
    public:
        void read_name();
        std::string get_name();
        //bool create_files();
        void create_files();
        void generate_text();
        //void write_h_file();
        void write_files();
};
#endif // GENERATOR_H_INCLUDED
