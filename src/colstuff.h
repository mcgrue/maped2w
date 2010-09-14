/*
Copyright (C) 1998 BJ Eirich (aka vecna)
This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU General Public Lic
See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#ifndef COLSTUFF_INC
#define COLSTUFF_INC

#define SPRITES_LEN 3200

 static unsigned char sprites_[]=
 {
  0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x73,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x73,0x70,0x73,0x78,0x00,
  0x00,0x00,0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x73,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x73,0x00,
  0x73,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x73,0x00,0x73,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x73,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x78,0x73,0x70,0x73,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,
  0x00,0x00,0x00,0x00,0x00,0x73,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x1f,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x73,0x00,
  0x73,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0x00,0x00,
  0x00,0x00,0x00,0x00,0x73,0x00,0x73,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x73,0x00,0x00,0x00,0x00,
  0x00,0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x73,0x70,0x73,
  0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0x00,0x00,0x00,
  0x00,0x73,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x73,0x00,0x73,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0x00,0x00,0x70,0x00,
  0x00,0x00,0x00,0x00,0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x73,0x00,0x73,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x22,0x23,
  0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24,
  0x25,0x26,0x26,0x25,0x23,0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x24,0x28,0x27,0x27,0x25,0x23,0x23,0x23,0x23,0x00,0x00,0x00,
  0x00,0x00,0x00,0x24,0x28,0x28,0x26,0x25,0x23,0x23,0x22,0x23,0x23,
  0x23,0x00,0x00,0x00,0x00,0x00,0x24,0x28,0x27,0x27,0x25,0x23,0x22,
  0xe0,0x21,0x23,0x22,0x00,0x00,0x00,0x00,0x26,0x28,0x28,0x28,0x26,
  0x27,0x25,0x23,0x21,0x23,0x24,0x25,0x23,0x00,0x00,0x00,0x26,0x2a,
  0x28,0x28,0x27,0x27,0x26,0x25,0x23,0x24,0x25,0x26,0x22,0x00,0x00,
  0x00,0x26,0x2a,0x2a,0x28,0x27,0x27,0x26,0x26,0x25,0x25,0x27,0x27,
  0x23,0x00,0x00,0x00,0x00,0xeb,0x2a,0x2a,0x28,0x27,0x26,0x27,0x26,
  0x27,0x27,0xeb,0x00,0x00,0x00,0x00,0xeb,0xf2,0x2a,0x2a,0x28,0x28,
  0xf2,0x27,0x27,0x27,0x28,0xf2,0xeb,0x00,0x00,0x00,0xeb,0xf1,0xf2,
  0x2a,0x2a,0xf2,0xeb,0xf1,0x28,0x28,0xf2,0xf1,0xeb,0x00,0x00,0xeb,
  0xf2,0xf4,0xeb,0x27,0x26,0xf2,0xf1,0xee,0xeb,0x25,0xeb,0xf4,0xf2,
  0xeb,0x00,0xeb,0xf1,0xf2,0xa1,0xeb,0xf2,0xeb,0xee,0xeb,0xf2,0xeb,
  0xa1,0xf2,0xf1,0xeb,0x00,0x00,0xeb,0xf2,0xf2,0xeb,0xf2,0xf1,0xf2,
  0xf1,0xf3,0xf0,0xf2,0xf2,0xeb,0x00,0x00,0x00,0x00,0xeb,0xeb,0x00,
  0x00,0xeb,0x4e,0xeb,0x00,0x00,0xeb,0xeb,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0xf2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x90,0x90,0x90,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x92,0x93,0x96,0x96,0x94,
  0x90,0x90,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x92,0x98,0x97,
  0x96,0x94,0x91,0x91,0x91,0x91,0x00,0x00,0x00,0x00,0x00,0x00,0x92,
  0x98,0x98,0x96,0x94,0x91,0x91,0x8c,0x92,0x91,0x90,0x00,0x00,0x00,
  0x00,0x00,0x92,0x98,0x97,0x96,0x94,0x91,0x8d,0x8b,0x8c,0x91,0x90,
  0x00,0x00,0x00,0x00,0x94,0x98,0x98,0x98,0x96,0x96,0x94,0x91,0x8d,
  0x92,0x91,0x94,0x90,0x00,0x00,0x00,0x94,0x9a,0x98,0x98,0x97,0x96,
  0x96,0x94,0x91,0x91,0x94,0x96,0x90,0x00,0x00,0x00,0x94,0x9a,0x9a,
  0x98,0x98,0x96,0x96,0x96,0x94,0x94,0x96,0x97,0x90,0x00,0x00,0x00,
  0x00,0xeb,0x9a,0x99,0x98,0x98,0x96,0x96,0x96,0x96,0x97,0xeb,0x00,
  0x00,0x00,0x00,0xeb,0xf2,0x9a,0x9a,0x98,0x98,0xf2,0x97,0x98,0x97,
  0x98,0xf2,0xeb,0x00,0x00,0x00,0xeb,0xf1,0xf2,0x9a,0x99,0xf2,0xeb,
  0xf1,0x98,0x98,0xf2,0xf1,0xeb,0x00,0x00,0xeb,0xf2,0xf4,0xeb,0x94,
  0x95,0xf2,0xf1,0xee,0xeb,0x92,0xeb,0xf4,0xf2,0xeb,0x00,0xeb,0xf1,
  0xf2,0xa1,0xeb,0xf2,0xeb,0xee,0xeb,0xf2,0xeb,0xa1,0xf2,0xf1,0xeb,
  0x00,0x00,0xeb,0xf2,0xf2,0xeb,0xf2,0xf1,0xf2,0xf1,0xf2,0xeb,0xf2,
  0xf2,0xeb,0x00,0x00,0x00,0x00,0xeb,0xeb,0x00,0x00,0xeb,0x4e,0xeb,
  0x00,0x00,0xeb,0xeb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0xf2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x5a,0x5a,0x5a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x5c,0x5c,0x61,0x61,0x5d,0x5a,0x5a,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x5c,0x63,0x61,0x61,0x5d,0x5b,0x5b,
  0x5b,0x5a,0x00,0x00,0x00,0x00,0x00,0x00,0x5c,0x63,0x61,0x61,0x5d,
  0x5b,0x5b,0x5a,0x5b,0x5b,0x5a,0x00,0x00,0x00,0x00,0x00,0x5c,0x63,
  0x61,0x61,0x5d,0x5b,0x59,0x58,0x59,0x5b,0x5a,0x00,0x00,0x00,0x00,
  0x5e,0x63,0x62,0x61,0x61,0x5f,0x5d,0x5b,0x59,0x5b,0x5b,0x5e,0x5a,
  0x00,0x00,0x00,0x5e,0x63,0x63,0x62,0x61,0x61,0x5f,0x5d,0x5b,0x5c,
  0x5d,0x61,0x5a,0x00,0x00,0x00,0x5e,0x65,0x63,0x63,0x61,0x61,0x61,
  0x5f,0x5d,0x5d,0x62,0x61,0x5a,0x00,0x00,0x00,0x00,0xeb,0x65,0x63,
  0x62,0x61,0x61,0x61,0x61,0x61,0x61,0xeb,0x00,0x00,0x00,0x00,0xeb,
  0xf2,0x65,0x63,0x62,0x63,0xf2,0x61,0x61,0x61,0x63,0xf2,0xeb,0x00,
  0x00,0x00,0xeb,0xf1,0xf2,0x65,0x63,0xf2,0xeb,0xf1,0x63,0x62,0xf2,
  0xf1,0xeb,0x00,0x00,0xeb,0xf2,0xf4,0xeb,0x5e,0x5e,0xf2,0xf1,0xed,
  0xf0,0x5c,0xeb,0xf4,0xf2,0xeb,0x00,0xeb,0xf1,0xf2,0xa1,0xeb,0xf2,
  0xeb,0xed,0xf0,0xf2,0xeb,0xa1,0xf2,0xf1,0xeb,0x00,0x00,0xeb,0xf2,
  0xf2,0xeb,0xf2,0xf1,0xf2,0xf1,0xf2,0xeb,0xf2,0xf2,0xeb,0x00,0x00,
  0x00,0x00,0xeb,0xeb,0x00,0x00,0xeb,0x4e,0xeb,0x00,0x00,0xeb,0xeb,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf2,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x42,
  0x42,0x42,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x44,0x44,0x48,0x48,0x45,0x42,0x42,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x44,0x4a,0x49,0x48,0x45,0x43,0x43,0x43,0x42,0x00,0x00,
  0x00,0x00,0x00,0x00,0x44,0x4a,0x49,0x48,0x45,0x43,0x43,0xb6,0x43,
  0x43,0x42,0x00,0x00,0x00,0x00,0x00,0x44,0x4a,0x49,0x48,0x45,0x43,
  0xb6,0x40,0x42,0x43,0x42,0x00,0x00,0x00,0x00,0x46,0x4a,0x4a,0x49,
  0x48,0xee,0x45,0x43,0x41,0x43,0x43,0x45,0x42,0x00,0x00,0x00,0x46,
  0x4b,0x4a,0x4b,0x49,0x48,0xee,0x45,0x43,0x43,0x45,0x49,0x42,0x00,
  0x00,0x00,0x46,0x4c,0x4b,0x4a,0x49,0x48,0x48,0x47,0x45,0x45,0x49,
  0x49,0x42,0x00,0x00,0x00,0x00,0xeb,0x4c,0x4b,0x4a,0x49,0x48,0x48,
  0x48,0x48,0x49,0xeb,0x00,0x00,0x00,0x00,0xeb,0xf2,0x4c,0x4c,0x4a,
  0x4a,0xf2,0x49,0x49,0x49,0x4b,0xf2,0xeb,0x00,0x00,0x00,0xeb,0xf1,
  0xf2,0x4c,0x4b,0xf2,0xea,0xf1,0x4b,0x4a,0xf2,0xf1,0xeb,0x00,0x00,
  0xeb,0xf2,0x4e,0xeb,0x46,0x46,0xf2,0xf2,0xee,0xeb,0x44,0xeb,0xf4,
  0xf2,0xeb,0x00,0xeb,0xf1,0xf2,0xa1,0xeb,0xf2,0xeb,0xee,0xeb,0xf2,
  0xeb,0xf5,0xf2,0xf1,0xeb,0x00,0x00,0xeb,0xf2,0xf2,0xeb,0xf2,0xf1,
  0xf2,0xf1,0xf2,0xeb,0xf2,0xf2,0xea,0x00,0x00,0x00,0x00,0xeb,0xeb,
  0x00,0x00,0xeb,0x4e,0xeb,0x00,0x00,0xeb,0xeb,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0xf2,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x72,0x72,0x72,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x74,0x74,0x78,0x78,
  0x75,0x72,0x72,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x74,0x7a,
  0x79,0x78,0x75,0x73,0x73,0x73,0x72,0x00,0x00,0x00,0x00,0x00,0x00,
  0x74,0x7a,0x79,0x78,0x75,0x73,0x73,0x71,0x73,0x73,0x72,0x00,0x00,
  0x00,0x00,0x00,0x74,0x7a,0x79,0x78,0x75,0x73,0x71,0x70,0x71,0x73,
  0x72,0x00,0x00,0x00,0x00,0x76,0x7a,0x7a,0x79,0x78,0x78,0x75,0x73,
  0x71,0x73,0x73,0x75,0x72,0x00,0x00,0x00,0x76,0x7b,0x7a,0x7a,0x79,
  0x78,0x78,0x75,0x73,0x73,0x75,0x78,0x72,0x00,0x00,0x00,0x76,0x7c,
  0x7b,0x7a,0x79,0x78,0x78,0x78,0x75,0x75,0x78,0x79,0x72,0x00,0x00,
  0x00,0x00,0xf0,0x7c,0x7b,0x7a,0x79,0x78,0x78,0x78,0x78,0x79,0xf0,
  0x00,0x00,0x00,0x00,0xf0,0xf2,0x7c,0x7b,0x7a,0x7a,0xf2,0x79,0x79,
  0x79,0x7a,0xf2,0xf0,0x00,0x00,0x00,0xf0,0xf1,0xf2,0x7c,0x7b,0xf2,
  0xf0,0xf1,0x7a,0x7a,0xf2,0xf1,0xf0,0x00,0x00,0xf0,0xf2,0xf4,0xf0,
  0x76,0x76,0xf2,0xf1,0xee,0xf0,0x74,0xf0,0xf4,0xf2,0xf0,0x00,0xf0,
  0xf1,0xf2,0xf5,0xf0,0xf2,0xf0,0xee,0xf0,0xf2,0xf0,0xf5,0xf2,0xf1,
  0xf0,0x00,0x00,0xf0,0xf2,0xf2,0xf0,0xf2,0xf1,0xf2,0xf1,0xf2,0xf0,
  0xf2,0xf2,0xf0,0x00,0x00,0x00,0x00,0xf0,0xf0,0x00,0x00,0xf0,0xf4,
  0xf0,0x00,0x00,0xf0,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0xf2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x05,0x05,0x09,0x09,0x06,0x03,0x03,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x0b,0x0a,0x09,0x06,0x04,
  0x04,0x06,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x0b,0x0a,0x09,
  0x06,0x04,0x04,0x02,0x04,0x06,0x03,0x00,0x00,0x00,0x00,0x00,0x05,
  0x0b,0x0a,0x09,0x06,0x04,0x02,0x02,0x02,0x04,0x03,0x00,0x00,0x00,
  0x00,0x07,0x0b,0x0b,0x0a,0x09,0x07,0x06,0x04,0x02,0x04,0x04,0x05,
  0x03,0x00,0x00,0x00,0x07,0x0c,0x0b,0x0a,0x09,0x09,0x06,0x06,0x04,
  0x04,0x06,0x09,0x03,0x00,0x00,0x00,0x07,0x0d,0x0c,0x0b,0x0a,0x09,
  0x09,0x06,0x06,0x06,0x09,0x0a,0x03,0x00,0x00,0x00,0x00,0xf0,0x0d,
  0x0c,0x0b,0x0a,0x09,0x0a,0x09,0x09,0x0a,0xf0,0x00,0x00,0x00,0x00,
  0xf0,0xf2,0x0d,0x0c,0x0b,0x0b,0xf2,0x0a,0x0a,0x0a,0x0b,0xf2,0xf0,
  0x00,0x00,0x00,0xf0,0xf1,0xf2,0x0d,0x0c,0xf2,0xf0,0xf1,0x0b,0x0b,
  0xf2,0xf1,0xf0,0x00,0x00,0xf0,0xf2,0xf4,0xf0,0x07,0x07,0xf2,0xf1,
  0xee,0xf0,0x05,0xf0,0xf4,0xf2,0xf0,0x00,0xf0,0xf1,0xf2,0xf5,0xf0,
  0xf2,0xf0,0xee,0xf0,0xf2,0xf0,0xf5,0xf2,0xf1,0xf0,0x00,0x00,0xf0,
  0xf2,0xf2,0xf0,0xf2,0xf1,0xf2,0xf1,0xf2,0xf0,0xf2,0xf2,0xf0,0x00,
  0x00,0x00,0x00,0xf0,0xf0,0x00,0x00,0xf0,0xf4,0xf0,0x00,0x00,0xf0,
  0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf2,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff
  };

#endif // COLSTUFF_INC