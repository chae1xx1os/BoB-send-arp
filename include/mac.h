#ifndef MAC_H
#define MAC_H

#include <array>
#include <string>
#include <cstdint>

class Mac {
public:
    static const int SIZE = 6;

    Mac() = default;
    Mac(const std::string& str);
    Mac(const uint8_t* ptr);

    const uint8_t* data() const { return mac_.data(); }
    std::string toString() const;

    bool operator==(const Mac& other) const;
    bool operator!=(const Mac& other) const;

private:
    std::array<uint8_t, SIZE> mac_;
};

#endif // MAC_H
