#ifndef IP_H
#define IP_H

#include <cstdint>
#include <string>
#include <netinet/in.h>

class Ip {
public:
    static const int SIZE = 4;

    Ip() = default;
    Ip(uint32_t ip) : ip_(ip) {}
    Ip(const std::string& str);

    uint32_t htonl() const { return ::htonl(ip_); }
    std::string toString() const;

    bool operator==(const Ip& other) const { return ip_ == other.ip_; }
    bool operator!=(const Ip& other) const { return ip_ != other.ip_; }

private:
    uint32_t ip_;
};

#endif // IP_H
