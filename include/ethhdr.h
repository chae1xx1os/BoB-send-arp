#ifndef ETHHDR_H
#define ETHHDR_H

#include "mac.h"
#include <cstdint>

#pragma pack(push, 1)
struct EthHdr {
    Mac      dmac_;
    Mac      smac_;
    uint16_t type_;

    enum: uint16_t {
        Arp = 0x0806,
        Ip4 = 0x0800
    };
};
#pragma pack(pop)

#endif // ETHHDR_H
