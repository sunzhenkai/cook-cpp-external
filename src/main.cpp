#include "iostream"
#include "fmt/format.h"
#include "boost/filesystem.hpp"

int main() {
    std::cout << fmt::format("{}", "ok fmt") << std::endl;
    boost::filesystem::file_status fs;
    fs.type();
    return 0;
}