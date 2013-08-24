#include "main.h"
int main()
{
    generator_class g;
    //g.read_name();
    g.create_files();
    g.generate_text();
    g.write_files();
    //std::cout<<"\t"<<"f<"<<"\n";
}
