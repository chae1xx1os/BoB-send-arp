#ifndef ARPHDR_H
#define ARPHDR_H

#include <cstdint>
#include "mac.h"
#include "ip.h"

#pragma pack(push, 1)
struct ArpHdr {
    uint16_t hrd_;
    uint16_t pro_;
    uint8_t  hln_;
    uint8_t  pln_;
    uint16_t op_;
    Mac      smac_;
    Ip       sip_;
    Mac      tmac_;
    Ip       tip_;

    enum: uint16_t {
        Request = 1,
        Reply = 2,
        ETHER = 1
    };
};
#pragma pack(pop)

#endif