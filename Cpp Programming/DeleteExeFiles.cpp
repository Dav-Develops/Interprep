#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main()
{
    fs::path currentExe = fs::canonical("DeleteExeFiles.exe");

    for (const auto& entry : fs::recursive_directory_iterator("."))
    {
        if (entry.is_regular_file() &&
            entry.path().extension() == ".exe")
        {
            if (fs::equivalent(entry.path(), currentExe))
                continue;

            std::cout << "Deleting: " << entry.path() << '\n';
            fs::remove(entry.path());
        }
    }
}