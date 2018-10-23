/* Copyright 2017 REPLACE_WITH_YOUR_NAME
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
#ifndef BMC_ERGO_LINEAR_H
#define BMC_ERGO_LINEAR_H

#include "quantum.h"

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array
#define KEYMAP( \
         kB1, kC1, kD1, kE1, kF1,           kI1, kJ1, kK1, kL1, kM1,      \
         kB2, kC2, kD2, kE2, kF2, kG2, kH2, kI2, kJ2, kK2, kL2, kM2,      \
    kA3, kB3, kC3, kD3, kE3, kF3,           kI3, kJ3, kK3, kL3, kM3, kN3, \
    kA4, kB4, kC4, kD4, kE4, kF4,           kI4, kJ4, kK4, kL4, kM4, kN4, \
    kA5,                kE5, kF5,           kI5, kJ5,                kN5  \
) \
{ \
    { KC_NO, kB1,   kC1,   kD1,   kE1, kF1, KC_NO, KC_NO, kI1, kJ1, kK1,   kL1,   kM1,   KC_NO }, \
    { KC_NO, kB2,   kC2,   kD2,   kE2, kF2, kG2,   kH2,   kI2, kJ2, kK2,   kL2,   kM2,   KC_NO }, \
    { kA3,   kB3,   kC3,   kD3,   kE3, kF3, KC_NO, KC_NO, kI3, kJ3, kK3,   kL3,   kM3,   kN3   }, \
    { kA4,   kB4,   kC4,   kD4,   kE4, kF4, KC_NO, KC_NO, kI4, kJ4, kK4,   kL4,   kM4,   kN4   }, \
    { kA5,   KC_NO, KC_NO, KC_NO, kE5, kF5, KC_NO, KC_NO, kI5, kJ5, KC_NO, KC_NO, KC_NO, kN5   }  \
}

#endif
