//
// Created by dmitrii on 6/19/25.
//

#include "network.h"

c_network & c_network::instance() {
    static auto inst = c_network();
    return inst;
}


