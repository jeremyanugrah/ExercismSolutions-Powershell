#include <cctype>
#include <string>
#include <algorithm>

namespace log_line {
std::string message(std::string line) {
    int pos = line.find(": ");
    pos += 2;
    std::string msg = line.substr(pos);
    return msg;
    // return the message
}

std::string log_level(std::string line) {
    int startPos = line.find('[') + 1;
    int endPos = line.find(']');
    std::string level = line.substr(startPos, endPos - startPos);
    std::transform(level.begin(), level.end(), level.begin(), ::toupper);
    return level;
    // return the log level
}

std::string reformat(std::string line) {
    return message(line) + " (" + log_level(line) + ")";
}
}  // namespace log_line
