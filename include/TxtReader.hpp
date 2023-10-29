#ifndef TxtReader_HPP
#define TxtReader_HPP

#include <vector>
#include <string>

class TxtReader {
public:
    TxtReader(const std::string& filename);
    bool ReadNumbers();
    void PrintNumbers() const;
    std::vector<int> GetNumbers() const;

private:
    std::string filename_;
    std::vector<int> numbers_;
};

#endif