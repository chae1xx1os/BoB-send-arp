#include "mac.h"
#include <sstream>
#include <iomanip>
#include <cstring>

Mac::Mac(const std::string& str) {
    sscanf(str.c_str(), "%hhx:%hhx:%hhx:%hhx:%hhx:%hhx", 
        &mac_[0], &mac_[1], &mac_[2], 
        &mac_[3], &mac_[4], &mac_[5]);
}

Mac::Mac(const uint8_t* ptr) {
    std::memcpy(mac_.data(), ptr, SIZE);
}

std::string Mac::toString() const {
    std::ostringstream oss;
    for (int i = 0; i < SIZE; ++i) {
        oss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(mac_[i]);
        if (i != SIZE - 1) oss << ":";
    }
    return oss.str();
}

bool Mac::operator==(const Mac& other) const {
    return mac_ == other.mac_;
}

bool Mac::operator!=(const Mac& other) const {
    return !(*this == other);
}
