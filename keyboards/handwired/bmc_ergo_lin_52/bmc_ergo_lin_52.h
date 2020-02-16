/* Copyright 2018 Brian Cabebe
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef BMC_ERGO_LIN_52_H
#define BMC_ERGO_LIN_52_H

#include "quantum.h"

// This a shortcut to help you visually see your layout.
// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array
#define KEYMAP( \
         kB1, kC1, kD1, kE1, kF1,        kG1, kH1, kI1, kJ1, kK1,      \
    kA2, kB2, kC2, kD2, kE2, kF2,        kG2, kH2, kI2, kJ2, kK2, kL2, \
    kA3, kB3, kC3, kD3, kE3, kF3,        kG3, kH3, kI3, kJ3, kK3, kL3, \
    kA4, kB4, kC4, kD4, kE4, kF4,        kG4, kH4, kI4, kJ4, kK4, kL4, \
                        kE5, kF5,kA5,kL5,kG5, kH5                      \
) \
{ \
    { KC_NO, kB1,   kC1,   kD1,   kE1, kF1, kG1, kH1, kI1,   kJ1,   kK1,   KC_NO }, \
    { kA2,   kB2,   kC2,   kD2,   kE2, kF2, kG2, kH2, kI2,   kJ2,   kK2,   kL2   }, \
    { kA3,   kB3,   kC3,   kD3,   kE3, kF3, kG3, kH3, kI3,   kJ3,   kK3,   kL3   }, \
    { kA4,   kB4,   kC4,   kD4,   kE4, kF4, kG4, kH4, kI4,   kJ4,   kK4,   kL4   }, \
    { kA5,   KC_NO, KC_NO, KC_NO, kE5, kF5, kG5, kH5, KC_NO, KC_NO, KC_NO, kL5   }  \
}

//                       ,------.                                          ,------.
//                ,------|      |-------------.              .-------------|      |------.              
//         ,------+      +------+      |      |              |      |      +------+      +------.       
//         |      +------+      +------+------|              |------+------+      +------+      |       
//  ,------+------+      +------+      |      |              |      |      +------+      +------+------.
//  |      |      +------+      +------+------|              |------+------+      +------+      |      |
//  |------+------+      +------+      |      |              |      |      +------+      +------+------|
//  |      |      +------+      +------+------|              |------+------+      +------+      |      |
//  |------+------+      +------+      |      |              |      |      +------+      +------+------|
//  |      |      +------'      `-------------'              `-------------'      `------+      |      |
//  `-------------'             ,--------------------.,--------------------.             `-------------'
//                              |      |      |      ||      |      |   ]  |                            
//                              `--------------------'`--------------------'

#endif
