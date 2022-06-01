//
// Created by kao on 6/1/2022.
//

#ifndef UNTITLED_COLOR_H
#define UNTITLED_COLOR_H

#include "vec3.h"
#include <iostream>

void write_color(std::ostream &out, color pixel_color){
    // Write the translated [0,255] value of each color component.
    out << int(255.999 * pixel_color.x()) << ' '
        << int(255.999 * pixel_color.y()) << ' '
        << int(255.999 * pixel_color.z()) << '\n';
}


#endif //UNTITLED_COLOR_H
