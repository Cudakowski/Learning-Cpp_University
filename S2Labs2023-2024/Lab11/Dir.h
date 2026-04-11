#ifndef DIR_H
#define DIR_H

#include <string>
#include <vector>
#include <iostream>

class Dir 
{
friend std::ostream &operator<<(std::ostream &os,Dir &a);
friend std::string RelativePaths(Dir*a, Dir*b,std::string delim);
private:
    
protected:
    std::string _name;
    std::string _type;
    int _depth;
    Dir* _up;
    std::vector<Dir*> _tab;
    
    std::string listDirsInner(int x);
    Dir(std::string name, std::string type);
    Dir* root();
public:
    Dir(std::string name);
    Dir& operator+=(Dir* a);
    void add(Dir* a);
    Dir* findDir(std::string name);
    void listDirs(int x);
};

std::ostream &operator<<(std::ostream &os,Dir &a);

void ShowRelativePaths(Dir*a, Dir*b);

#endif
