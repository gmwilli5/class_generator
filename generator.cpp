#include "generator.h"
#include <iostream>
void generator_class::read_name()
{
    std::cin>>name;
    std::cout<<name<<"\n";
}
std::string generator_class::get_name()
{
    return name;
}
void generator_class::create_files()
{
    if(name==""){
        name="default";
    }
    h_name=name+".h";
    h_file.open(h_name);
    std::cout<<"created: "<<h_name<<"\n";
    cpp_name=name+".cpp";
    cpp_file.open(cpp_name);
    std::cout<<"created: "<<cpp_name<<"\n";
}
void generator_class::generate_text()
{
    /*name="butfuck";
    h_text="#ifndef "+h_name+"_H_INCLUDED\n"+"#define "+h_name+"_H_INCLUDED\n";
    h_text+="class "+name+"_class{\n\tprivate:\n\tpublic:\n\t\t"+name+"_class();\n\t\t~"+name+"_class();""\n};";
    h_text+="\n#endif";*/
    generate_h_file();
    generate_cpp_file();
    std::cout<<h_text<<"\n";
}
void generator_class::write_h_file()
{
    h_file<<h_text;
}
void generator_class::generate_h_file()
{
    name="butfuck";
    h_text="#ifndef "+h_name+"_H_INCLUDED\n"+"#define "+h_name+"_H_INCLUDED\n";
    h_text+="class "+name+"_class{\n\tprivate:\n\tpublic:\n\t\t"+name+"_class();\n\t\t~"+name+"_class();""\n};";
    h_text+="\n#endif";
}
void generator_class::write_files()
{
    write_h_file();
    write_cpp_file();
}
void generator_class::generate_cpp_file()
{
    name="butfuck";
    std::string ns=name+"::";
    cpp_text="#include \""+h_name+"\"\n"+ns+name+"_class()\n{\n\n}\n";
    cpp_text+=ns+"~"+name+"_class()\n{\n\n}\n";
    std::cout<<cpp_text<<"\n";
}
void generator_class::write_cpp_file()
{
    cpp_file<<cpp_text;
}
