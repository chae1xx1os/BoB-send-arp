#include "ip.h"
#include <arpa/inet.h>
#include <stdexcept>

Ip::Ip(const std::string& str) {
    int res = inet_pton(AF_INET, str.c_str(), &ip_);
    if (res <= 0) {
        throw std::invalid_argument("Invalid IP address format: " + str);
    }
}

std::string Ip::toString() const {
    char buf[INET_ADDRSTRLEN];
    inet_ntop(AF_INET, &ip_, buf, sizeof(buf));
    return std::string(buf);
}
