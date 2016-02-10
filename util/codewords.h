#ifndef __CODEWORDS_H_
#define __CODEWORDS_H_

#include "typedefs.h"

static const uint32_t m_nCodewords = 256;
static const uint32_t m_nCWIntlen = 8;

static const uint32_t m_nCodeWordBits = 256;
static const uint32_t m_nCodeWordBytes = m_nCodeWordBits/8;

static const uint32_t CODE_MATRIX[m_nCodewords][m_nCWIntlen] = { \
		{0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000}, \
		{0xaaaaaaaa, 0xaaaaaaaa, 0xaaaaaaaa, 0xaaaaaaaa, 0xaaaaaaaa, 0xaaaaaaaa, 0xaaaaaaaa, 0xaaaaaaaa}, \
		{0xcccccccc, 0xcccccccc, 0xcccccccc, 0xcccccccc, 0xcccccccc, 0xcccccccc, 0xcccccccc, 0xcccccccc}, \
		{0x66666666, 0x66666666, 0x66666666, 0x66666666, 0x66666666, 0x66666666, 0x66666666, 0x66666666}, \
		{0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0f0f0}, \
		{0x5a5a5a5a, 0x5a5a5a5a, 0x5a5a5a5a, 0x5a5a5a5a, 0x5a5a5a5a, 0x5a5a5a5a, 0x5a5a5a5a, 0x5a5a5a5a}, \
		{0x3c3c3c3c, 0x3c3c3c3c, 0x3c3c3c3c, 0x3c3c3c3c, 0x3c3c3c3c, 0x3c3c3c3c, 0x3c3c3c3c, 0x3c3c3c3c}, \
		{0x96969696, 0x96969696, 0x96969696, 0x96969696, 0x96969696, 0x96969696, 0x96969696, 0x96969696}, \
		{0xff00ff00, 0xff00ff00, 0xff00ff00, 0xff00ff00, 0xff00ff00, 0xff00ff00, 0xff00ff00, 0xff00ff00}, \
		{0x55aa55aa, 0x55aa55aa, 0x55aa55aa, 0x55aa55aa, 0x55aa55aa, 0x55aa55aa, 0x55aa55aa, 0x55aa55aa}, \
		{0x33cc33cc, 0x33cc33cc, 0x33cc33cc, 0x33cc33cc, 0x33cc33cc, 0x33cc33cc, 0x33cc33cc, 0x33cc33cc}, \
		{0x99669966, 0x99669966, 0x99669966, 0x99669966, 0x99669966, 0x99669966, 0x99669966, 0x99669966}, \
		{0x0ff00ff0, 0x0ff00ff0, 0x0ff00ff0, 0x0ff00ff0, 0x0ff00ff0, 0x0ff00ff0, 0x0ff00ff0, 0x0ff00ff0}, \
		{0xa55aa55a, 0xa55aa55a, 0xa55aa55a, 0xa55aa55a, 0xa55aa55a, 0xa55aa55a, 0xa55aa55a, 0xa55aa55a}, \
		{0xc33cc33c, 0xc33cc33c, 0xc33cc33c, 0xc33cc33c, 0xc33cc33c, 0xc33cc33c, 0xc33cc33c, 0xc33cc33c}, \
		{0x69966996, 0x69966996, 0x69966996, 0x69966996, 0x69966996, 0x69966996, 0x69966996, 0x69966996}, \
		{0xffff0000, 0xffff0000, 0xffff0000, 0xffff0000, 0xffff0000, 0xffff0000, 0xffff0000, 0xffff0000}, \
		{0x5555aaaa, 0x5555aaaa, 0x5555aaaa, 0x5555aaaa, 0x5555aaaa, 0x5555aaaa, 0x5555aaaa, 0x5555aaaa}, \
		{0x3333cccc, 0x3333cccc, 0x3333cccc, 0x3333cccc, 0x3333cccc, 0x3333cccc, 0x3333cccc, 0x3333cccc}, \
		{0x99996666, 0x99996666, 0x99996666, 0x99996666, 0x99996666, 0x99996666, 0x99996666, 0x99996666}, \
		{0x0f0ff0f0, 0x0f0ff0f0, 0x0f0ff0f0, 0x0f0ff0f0, 0x0f0ff0f0, 0x0f0ff0f0, 0x0f0ff0f0, 0x0f0ff0f0}, \
		{0xa5a55a5a, 0xa5a55a5a, 0xa5a55a5a, 0xa5a55a5a, 0xa5a55a5a, 0xa5a55a5a, 0xa5a55a5a, 0xa5a55a5a}, \
		{0xc3c33c3c, 0xc3c33c3c, 0xc3c33c3c, 0xc3c33c3c, 0xc3c33c3c, 0xc3c33c3c, 0xc3c33c3c, 0xc3c33c3c}, \
		{0x69699696, 0x69699696, 0x69699696, 0x69699696, 0x69699696, 0x69699696, 0x69699696, 0x69699696}, \
		{0x00ffff00, 0x00ffff00, 0x00ffff00, 0x00ffff00, 0x00ffff00, 0x00ffff00, 0x00ffff00, 0x00ffff00}, \
		{0xaa5555aa, 0xaa5555aa, 0xaa5555aa, 0xaa5555aa, 0xaa5555aa, 0xaa5555aa, 0xaa5555aa, 0xaa5555aa}, \
		{0xcc3333cc, 0xcc3333cc, 0xcc3333cc, 0xcc3333cc, 0xcc3333cc, 0xcc3333cc, 0xcc3333cc, 0xcc3333cc}, \
		{0x66999966, 0x66999966, 0x66999966, 0x66999966, 0x66999966, 0x66999966, 0x66999966, 0x66999966}, \
		{0xf00f0ff0, 0xf00f0ff0, 0xf00f0ff0, 0xf00f0ff0, 0xf00f0ff0, 0xf00f0ff0, 0xf00f0ff0, 0xf00f0ff0}, \
		{0x5aa5a55a, 0x5aa5a55a, 0x5aa5a55a, 0x5aa5a55a, 0x5aa5a55a, 0x5aa5a55a, 0x5aa5a55a, 0x5aa5a55a}, \
		{0x3cc3c33c, 0x3cc3c33c, 0x3cc3c33c, 0x3cc3c33c, 0x3cc3c33c, 0x3cc3c33c, 0x3cc3c33c, 0x3cc3c33c}, \
		{0x96696996, 0x96696996, 0x96696996, 0x96696996, 0x96696996, 0x96696996, 0x96696996, 0x96696996}, \
		{0xffffffff, 0x00000000, 0xffffffff, 0x00000000, 0xffffffff, 0x00000000, 0xffffffff, 0x00000000}, \
		{0x55555555, 0xaaaaaaaa, 0x55555555, 0xaaaaaaaa, 0x55555555, 0xaaaaaaaa, 0x55555555, 0xaaaaaaaa}, \
		{0x33333333, 0xcccccccc, 0x33333333, 0xcccccccc, 0x33333333, 0xcccccccc, 0x33333333, 0xcccccccc}, \
		{0x99999999, 0x66666666, 0x99999999, 0x66666666, 0x99999999, 0x66666666, 0x99999999, 0x66666666}, \
		{0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0}, \
		{0xa5a5a5a5, 0x5a5a5a5a, 0xa5a5a5a5, 0x5a5a5a5a, 0xa5a5a5a5, 0x5a5a5a5a, 0xa5a5a5a5, 0x5a5a5a5a}, \
		{0xc3c3c3c3, 0x3c3c3c3c, 0xc3c3c3c3, 0x3c3c3c3c, 0xc3c3c3c3, 0x3c3c3c3c, 0xc3c3c3c3, 0x3c3c3c3c}, \
		{0x69696969, 0x96969696, 0x69696969, 0x96969696, 0x69696969, 0x96969696, 0x69696969, 0x96969696}, \
		{0x00ff00ff, 0xff00ff00, 0x00ff00ff, 0xff00ff00, 0x00ff00ff, 0xff00ff00, 0x00ff00ff, 0xff00ff00}, \
		{0xaa55aa55, 0x55aa55aa, 0xaa55aa55, 0x55aa55aa, 0xaa55aa55, 0x55aa55aa, 0xaa55aa55, 0x55aa55aa}, \
		{0xcc33cc33, 0x33cc33cc, 0xcc33cc33, 0x33cc33cc, 0xcc33cc33, 0x33cc33cc, 0xcc33cc33, 0x33cc33cc}, \
		{0x66996699, 0x99669966, 0x66996699, 0x99669966, 0x66996699, 0x99669966, 0x66996699, 0x99669966}, \
		{0xf00ff00f, 0x0ff00ff0, 0xf00ff00f, 0x0ff00ff0, 0xf00ff00f, 0x0ff00ff0, 0xf00ff00f, 0x0ff00ff0}, \
		{0x5aa55aa5, 0xa55aa55a, 0x5aa55aa5, 0xa55aa55a, 0x5aa55aa5, 0xa55aa55a, 0x5aa55aa5, 0xa55aa55a}, \
		{0x3cc33cc3, 0xc33cc33c, 0x3cc33cc3, 0xc33cc33c, 0x3cc33cc3, 0xc33cc33c, 0x3cc33cc3, 0xc33cc33c}, \
		{0x96699669, 0x69966996, 0x96699669, 0x69966996, 0x96699669, 0x69966996, 0x96699669, 0x69966996}, \
		{0x0000ffff, 0xffff0000, 0x0000ffff, 0xffff0000, 0x0000ffff, 0xffff0000, 0x0000ffff, 0xffff0000}, \
		{0xaaaa5555, 0x5555aaaa, 0xaaaa5555, 0x5555aaaa, 0xaaaa5555, 0x5555aaaa, 0xaaaa5555, 0x5555aaaa}, \
		{0xcccc3333, 0x3333cccc, 0xcccc3333, 0x3333cccc, 0xcccc3333, 0x3333cccc, 0xcccc3333, 0x3333cccc}, \
		{0x66669999, 0x99996666, 0x66669999, 0x99996666, 0x66669999, 0x99996666, 0x66669999, 0x99996666}, \
		{0xf0f00f0f, 0x0f0ff0f0, 0xf0f00f0f, 0x0f0ff0f0, 0xf0f00f0f, 0x0f0ff0f0, 0xf0f00f0f, 0x0f0ff0f0}, \
		{0x5a5aa5a5, 0xa5a55a5a, 0x5a5aa5a5, 0xa5a55a5a, 0x5a5aa5a5, 0xa5a55a5a, 0x5a5aa5a5, 0xa5a55a5a}, \
		{0x3c3cc3c3, 0xc3c33c3c, 0x3c3cc3c3, 0xc3c33c3c, 0x3c3cc3c3, 0xc3c33c3c, 0x3c3cc3c3, 0xc3c33c3c}, \
		{0x96966969, 0x69699696, 0x96966969, 0x69699696, 0x96966969, 0x69699696, 0x96966969, 0x69699696}, \
		{0xff0000ff, 0x00ffff00, 0xff0000ff, 0x00ffff00, 0xff0000ff, 0x00ffff00, 0xff0000ff, 0x00ffff00}, \
		{0x55aaaa55, 0xaa5555aa, 0x55aaaa55, 0xaa5555aa, 0x55aaaa55, 0xaa5555aa, 0x55aaaa55, 0xaa5555aa}, \
		{0x33cccc33, 0xcc3333cc, 0x33cccc33, 0xcc3333cc, 0x33cccc33, 0xcc3333cc, 0x33cccc33, 0xcc3333cc}, \
		{0x99666699, 0x66999966, 0x99666699, 0x66999966, 0x99666699, 0x66999966, 0x99666699, 0x66999966}, \
		{0x0ff0f00f, 0xf00f0ff0, 0x0ff0f00f, 0xf00f0ff0, 0x0ff0f00f, 0xf00f0ff0, 0x0ff0f00f, 0xf00f0ff0}, \
		{0xa55a5aa5, 0x5aa5a55a, 0xa55a5aa5, 0x5aa5a55a, 0xa55a5aa5, 0x5aa5a55a, 0xa55a5aa5, 0x5aa5a55a}, \
		{0xc33c3cc3, 0x3cc3c33c, 0xc33c3cc3, 0x3cc3c33c, 0xc33c3cc3, 0x3cc3c33c, 0xc33c3cc3, 0x3cc3c33c}, \
		{0x69969669, 0x96696996, 0x69969669, 0x96696996, 0x69969669, 0x96696996, 0x69969669, 0x96696996}, \
		{0xffffffff, 0xffffffff, 0x00000000, 0x00000000, 0xffffffff, 0xffffffff, 0x00000000, 0x00000000}, \
		{0x55555555, 0x55555555, 0xaaaaaaaa, 0xaaaaaaaa, 0x55555555, 0x55555555, 0xaaaaaaaa, 0xaaaaaaaa}, \
		{0x33333333, 0x33333333, 0xcccccccc, 0xcccccccc, 0x33333333, 0x33333333, 0xcccccccc, 0xcccccccc}, \
		{0x99999999, 0x99999999, 0x66666666, 0x66666666, 0x99999999, 0x99999999, 0x66666666, 0x66666666}, \
		{0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f0f0f0}, \
		{0xa5a5a5a5, 0xa5a5a5a5, 0x5a5a5a5a, 0x5a5a5a5a, 0xa5a5a5a5, 0xa5a5a5a5, 0x5a5a5a5a, 0x5a5a5a5a}, \
		{0xc3c3c3c3, 0xc3c3c3c3, 0x3c3c3c3c, 0x3c3c3c3c, 0xc3c3c3c3, 0xc3c3c3c3, 0x3c3c3c3c, 0x3c3c3c3c}, \
		{0x69696969, 0x69696969, 0x96969696, 0x96969696, 0x69696969, 0x69696969, 0x96969696, 0x96969696}, \
		{0x00ff00ff, 0x00ff00ff, 0xff00ff00, 0xff00ff00, 0x00ff00ff, 0x00ff00ff, 0xff00ff00, 0xff00ff00}, \
		{0xaa55aa55, 0xaa55aa55, 0x55aa55aa, 0x55aa55aa, 0xaa55aa55, 0xaa55aa55, 0x55aa55aa, 0x55aa55aa}, \
		{0xcc33cc33, 0xcc33cc33, 0x33cc33cc, 0x33cc33cc, 0xcc33cc33, 0xcc33cc33, 0x33cc33cc, 0x33cc33cc}, \
		{0x66996699, 0x66996699, 0x99669966, 0x99669966, 0x66996699, 0x66996699, 0x99669966, 0x99669966}, \
		{0xf00ff00f, 0xf00ff00f, 0x0ff00ff0, 0x0ff00ff0, 0xf00ff00f, 0xf00ff00f, 0x0ff00ff0, 0x0ff00ff0}, \
		{0x5aa55aa5, 0x5aa55aa5, 0xa55aa55a, 0xa55aa55a, 0x5aa55aa5, 0x5aa55aa5, 0xa55aa55a, 0xa55aa55a}, \
		{0x3cc33cc3, 0x3cc33cc3, 0xc33cc33c, 0xc33cc33c, 0x3cc33cc3, 0x3cc33cc3, 0xc33cc33c, 0xc33cc33c}, \
		{0x96699669, 0x96699669, 0x69966996, 0x69966996, 0x96699669, 0x96699669, 0x69966996, 0x69966996}, \
		{0x0000ffff, 0x0000ffff, 0xffff0000, 0xffff0000, 0x0000ffff, 0x0000ffff, 0xffff0000, 0xffff0000}, \
		{0xaaaa5555, 0xaaaa5555, 0x5555aaaa, 0x5555aaaa, 0xaaaa5555, 0xaaaa5555, 0x5555aaaa, 0x5555aaaa}, \
		{0xcccc3333, 0xcccc3333, 0x3333cccc, 0x3333cccc, 0xcccc3333, 0xcccc3333, 0x3333cccc, 0x3333cccc}, \
		{0x66669999, 0x66669999, 0x99996666, 0x99996666, 0x66669999, 0x66669999, 0x99996666, 0x99996666}, \
		{0xf0f00f0f, 0xf0f00f0f, 0x0f0ff0f0, 0x0f0ff0f0, 0xf0f00f0f, 0xf0f00f0f, 0x0f0ff0f0, 0x0f0ff0f0}, \
		{0x5a5aa5a5, 0x5a5aa5a5, 0xa5a55a5a, 0xa5a55a5a, 0x5a5aa5a5, 0x5a5aa5a5, 0xa5a55a5a, 0xa5a55a5a}, \
		{0x3c3cc3c3, 0x3c3cc3c3, 0xc3c33c3c, 0xc3c33c3c, 0x3c3cc3c3, 0x3c3cc3c3, 0xc3c33c3c, 0xc3c33c3c}, \
		{0x96966969, 0x96966969, 0x69699696, 0x69699696, 0x96966969, 0x96966969, 0x69699696, 0x69699696}, \
		{0xff0000ff, 0xff0000ff, 0x00ffff00, 0x00ffff00, 0xff0000ff, 0xff0000ff, 0x00ffff00, 0x00ffff00}, \
		{0x55aaaa55, 0x55aaaa55, 0xaa5555aa, 0xaa5555aa, 0x55aaaa55, 0x55aaaa55, 0xaa5555aa, 0xaa5555aa}, \
		{0x33cccc33, 0x33cccc33, 0xcc3333cc, 0xcc3333cc, 0x33cccc33, 0x33cccc33, 0xcc3333cc, 0xcc3333cc}, \
		{0x99666699, 0x99666699, 0x66999966, 0x66999966, 0x99666699, 0x99666699, 0x66999966, 0x66999966}, \
		{0x0ff0f00f, 0x0ff0f00f, 0xf00f0ff0, 0xf00f0ff0, 0x0ff0f00f, 0x0ff0f00f, 0xf00f0ff0, 0xf00f0ff0}, \
		{0xa55a5aa5, 0xa55a5aa5, 0x5aa5a55a, 0x5aa5a55a, 0xa55a5aa5, 0xa55a5aa5, 0x5aa5a55a, 0x5aa5a55a}, \
		{0xc33c3cc3, 0xc33c3cc3, 0x3cc3c33c, 0x3cc3c33c, 0xc33c3cc3, 0xc33c3cc3, 0x3cc3c33c, 0x3cc3c33c}, \
		{0x69969669, 0x69969669, 0x96696996, 0x96696996, 0x69969669, 0x69969669, 0x96696996, 0x96696996}, \
		{0x00000000, 0xffffffff, 0xffffffff, 0x00000000, 0x00000000, 0xffffffff, 0xffffffff, 0x00000000}, \
		{0xaaaaaaaa, 0x55555555, 0x55555555, 0xaaaaaaaa, 0xaaaaaaaa, 0x55555555, 0x55555555, 0xaaaaaaaa}, \
		{0xcccccccc, 0x33333333, 0x33333333, 0xcccccccc, 0xcccccccc, 0x33333333, 0x33333333, 0xcccccccc}, \
		{0x66666666, 0x99999999, 0x99999999, 0x66666666, 0x66666666, 0x99999999, 0x99999999, 0x66666666}, \
		{0xf0f0f0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0}, \
		{0x5a5a5a5a, 0xa5a5a5a5, 0xa5a5a5a5, 0x5a5a5a5a, 0x5a5a5a5a, 0xa5a5a5a5, 0xa5a5a5a5, 0x5a5a5a5a}, \
		{0x3c3c3c3c, 0xc3c3c3c3, 0xc3c3c3c3, 0x3c3c3c3c, 0x3c3c3c3c, 0xc3c3c3c3, 0xc3c3c3c3, 0x3c3c3c3c}, \
		{0x96969696, 0x69696969, 0x69696969, 0x96969696, 0x96969696, 0x69696969, 0x69696969, 0x96969696}, \
		{0xff00ff00, 0x00ff00ff, 0x00ff00ff, 0xff00ff00, 0xff00ff00, 0x00ff00ff, 0x00ff00ff, 0xff00ff00}, \
		{0x55aa55aa, 0xaa55aa55, 0xaa55aa55, 0x55aa55aa, 0x55aa55aa, 0xaa55aa55, 0xaa55aa55, 0x55aa55aa}, \
		{0x33cc33cc, 0xcc33cc33, 0xcc33cc33, 0x33cc33cc, 0x33cc33cc, 0xcc33cc33, 0xcc33cc33, 0x33cc33cc}, \
		{0x99669966, 0x66996699, 0x66996699, 0x99669966, 0x99669966, 0x66996699, 0x66996699, 0x99669966}, \
		{0x0ff00ff0, 0xf00ff00f, 0xf00ff00f, 0x0ff00ff0, 0x0ff00ff0, 0xf00ff00f, 0xf00ff00f, 0x0ff00ff0}, \
		{0xa55aa55a, 0x5aa55aa5, 0x5aa55aa5, 0xa55aa55a, 0xa55aa55a, 0x5aa55aa5, 0x5aa55aa5, 0xa55aa55a}, \
		{0xc33cc33c, 0x3cc33cc3, 0x3cc33cc3, 0xc33cc33c, 0xc33cc33c, 0x3cc33cc3, 0x3cc33cc3, 0xc33cc33c}, \
		{0x69966996, 0x96699669, 0x96699669, 0x69966996, 0x69966996, 0x96699669, 0x96699669, 0x69966996}, \
		{0xffff0000, 0x0000ffff, 0x0000ffff, 0xffff0000, 0xffff0000, 0x0000ffff, 0x0000ffff, 0xffff0000}, \
		{0x5555aaaa, 0xaaaa5555, 0xaaaa5555, 0x5555aaaa, 0x5555aaaa, 0xaaaa5555, 0xaaaa5555, 0x5555aaaa}, \
		{0x3333cccc, 0xcccc3333, 0xcccc3333, 0x3333cccc, 0x3333cccc, 0xcccc3333, 0xcccc3333, 0x3333cccc}, \
		{0x99996666, 0x66669999, 0x66669999, 0x99996666, 0x99996666, 0x66669999, 0x66669999, 0x99996666}, \
		{0x0f0ff0f0, 0xf0f00f0f, 0xf0f00f0f, 0x0f0ff0f0, 0x0f0ff0f0, 0xf0f00f0f, 0xf0f00f0f, 0x0f0ff0f0}, \
		{0xa5a55a5a, 0x5a5aa5a5, 0x5a5aa5a5, 0xa5a55a5a, 0xa5a55a5a, 0x5a5aa5a5, 0x5a5aa5a5, 0xa5a55a5a}, \
		{0xc3c33c3c, 0x3c3cc3c3, 0x3c3cc3c3, 0xc3c33c3c, 0xc3c33c3c, 0x3c3cc3c3, 0x3c3cc3c3, 0xc3c33c3c}, \
		{0x69699696, 0x96966969, 0x96966969, 0x69699696, 0x69699696, 0x96966969, 0x96966969, 0x69699696}, \
		{0x00ffff00, 0xff0000ff, 0xff0000ff, 0x00ffff00, 0x00ffff00, 0xff0000ff, 0xff0000ff, 0x00ffff00}, \
		{0xaa5555aa, 0x55aaaa55, 0x55aaaa55, 0xaa5555aa, 0xaa5555aa, 0x55aaaa55, 0x55aaaa55, 0xaa5555aa}, \
		{0xcc3333cc, 0x33cccc33, 0x33cccc33, 0xcc3333cc, 0xcc3333cc, 0x33cccc33, 0x33cccc33, 0xcc3333cc}, \
		{0x66999966, 0x99666699, 0x99666699, 0x66999966, 0x66999966, 0x99666699, 0x99666699, 0x66999966}, \
		{0xf00f0ff0, 0x0ff0f00f, 0x0ff0f00f, 0xf00f0ff0, 0xf00f0ff0, 0x0ff0f00f, 0x0ff0f00f, 0xf00f0ff0}, \
		{0x5aa5a55a, 0xa55a5aa5, 0xa55a5aa5, 0x5aa5a55a, 0x5aa5a55a, 0xa55a5aa5, 0xa55a5aa5, 0x5aa5a55a}, \
		{0x3cc3c33c, 0xc33c3cc3, 0xc33c3cc3, 0x3cc3c33c, 0x3cc3c33c, 0xc33c3cc3, 0xc33c3cc3, 0x3cc3c33c}, \
		{0x96696996, 0x69969669, 0x69969669, 0x96696996, 0x96696996, 0x69969669, 0x69969669, 0x96696996}, \
		{0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000}, \
		{0x55555555, 0x55555555, 0x55555555, 0x55555555, 0xaaaaaaaa, 0xaaaaaaaa, 0xaaaaaaaa, 0xaaaaaaaa}, \
		{0x33333333, 0x33333333, 0x33333333, 0x33333333, 0xcccccccc, 0xcccccccc, 0xcccccccc, 0xcccccccc}, \
		{0x99999999, 0x99999999, 0x99999999, 0x99999999, 0x66666666, 0x66666666, 0x66666666, 0x66666666}, \
		{0x0f0f0f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0f0f0, 0xf0f0f0f0}, \
		{0xa5a5a5a5, 0xa5a5a5a5, 0xa5a5a5a5, 0xa5a5a5a5, 0x5a5a5a5a, 0x5a5a5a5a, 0x5a5a5a5a, 0x5a5a5a5a}, \
		{0xc3c3c3c3, 0xc3c3c3c3, 0xc3c3c3c3, 0xc3c3c3c3, 0x3c3c3c3c, 0x3c3c3c3c, 0x3c3c3c3c, 0x3c3c3c3c}, \
		{0x69696969, 0x69696969, 0x69696969, 0x69696969, 0x96969696, 0x96969696, 0x96969696, 0x96969696}, \
		{0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0xff00ff00, 0xff00ff00, 0xff00ff00, 0xff00ff00}, \
		{0xaa55aa55, 0xaa55aa55, 0xaa55aa55, 0xaa55aa55, 0x55aa55aa, 0x55aa55aa, 0x55aa55aa, 0x55aa55aa}, \
		{0xcc33cc33, 0xcc33cc33, 0xcc33cc33, 0xcc33cc33, 0x33cc33cc, 0x33cc33cc, 0x33cc33cc, 0x33cc33cc}, \
		{0x66996699, 0x66996699, 0x66996699, 0x66996699, 0x99669966, 0x99669966, 0x99669966, 0x99669966}, \
		{0xf00ff00f, 0xf00ff00f, 0xf00ff00f, 0xf00ff00f, 0x0ff00ff0, 0x0ff00ff0, 0x0ff00ff0, 0x0ff00ff0}, \
		{0x5aa55aa5, 0x5aa55aa5, 0x5aa55aa5, 0x5aa55aa5, 0xa55aa55a, 0xa55aa55a, 0xa55aa55a, 0xa55aa55a}, \
		{0x3cc33cc3, 0x3cc33cc3, 0x3cc33cc3, 0x3cc33cc3, 0xc33cc33c, 0xc33cc33c, 0xc33cc33c, 0xc33cc33c}, \
		{0x96699669, 0x96699669, 0x96699669, 0x96699669, 0x69966996, 0x69966996, 0x69966996, 0x69966996}, \
		{0x0000ffff, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0xffff0000, 0xffff0000, 0xffff0000, 0xffff0000}, \
		{0xaaaa5555, 0xaaaa5555, 0xaaaa5555, 0xaaaa5555, 0x5555aaaa, 0x5555aaaa, 0x5555aaaa, 0x5555aaaa}, \
		{0xcccc3333, 0xcccc3333, 0xcccc3333, 0xcccc3333, 0x3333cccc, 0x3333cccc, 0x3333cccc, 0x3333cccc}, \
		{0x66669999, 0x66669999, 0x66669999, 0x66669999, 0x99996666, 0x99996666, 0x99996666, 0x99996666}, \
		{0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0ff0f0, 0x0f0ff0f0, 0x0f0ff0f0, 0x0f0ff0f0}, \
		{0x5a5aa5a5, 0x5a5aa5a5, 0x5a5aa5a5, 0x5a5aa5a5, 0xa5a55a5a, 0xa5a55a5a, 0xa5a55a5a, 0xa5a55a5a}, \
		{0x3c3cc3c3, 0x3c3cc3c3, 0x3c3cc3c3, 0x3c3cc3c3, 0xc3c33c3c, 0xc3c33c3c, 0xc3c33c3c, 0xc3c33c3c}, \
		{0x96966969, 0x96966969, 0x96966969, 0x96966969, 0x69699696, 0x69699696, 0x69699696, 0x69699696}, \
		{0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0x00ffff00, 0x00ffff00, 0x00ffff00, 0x00ffff00}, \
		{0x55aaaa55, 0x55aaaa55, 0x55aaaa55, 0x55aaaa55, 0xaa5555aa, 0xaa5555aa, 0xaa5555aa, 0xaa5555aa}, \
		{0x33cccc33, 0x33cccc33, 0x33cccc33, 0x33cccc33, 0xcc3333cc, 0xcc3333cc, 0xcc3333cc, 0xcc3333cc}, \
		{0x99666699, 0x99666699, 0x99666699, 0x99666699, 0x66999966, 0x66999966, 0x66999966, 0x66999966}, \
		{0x0ff0f00f, 0x0ff0f00f, 0x0ff0f00f, 0x0ff0f00f, 0xf00f0ff0, 0xf00f0ff0, 0xf00f0ff0, 0xf00f0ff0}, \
		{0xa55a5aa5, 0xa55a5aa5, 0xa55a5aa5, 0xa55a5aa5, 0x5aa5a55a, 0x5aa5a55a, 0x5aa5a55a, 0x5aa5a55a}, \
		{0xc33c3cc3, 0xc33c3cc3, 0xc33c3cc3, 0xc33c3cc3, 0x3cc3c33c, 0x3cc3c33c, 0x3cc3c33c, 0x3cc3c33c}, \
		{0x69969669, 0x69969669, 0x69969669, 0x69969669, 0x96696996, 0x96696996, 0x96696996, 0x96696996}, \
		{0x00000000, 0xffffffff, 0x00000000, 0xffffffff, 0xffffffff, 0x00000000, 0xffffffff, 0x00000000}, \
		{0xaaaaaaaa, 0x55555555, 0xaaaaaaaa, 0x55555555, 0x55555555, 0xaaaaaaaa, 0x55555555, 0xaaaaaaaa}, \
		{0xcccccccc, 0x33333333, 0xcccccccc, 0x33333333, 0x33333333, 0xcccccccc, 0x33333333, 0xcccccccc}, \
		{0x66666666, 0x99999999, 0x66666666, 0x99999999, 0x99999999, 0x66666666, 0x99999999, 0x66666666}, \
		{0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0}, \
		{0x5a5a5a5a, 0xa5a5a5a5, 0x5a5a5a5a, 0xa5a5a5a5, 0xa5a5a5a5, 0x5a5a5a5a, 0xa5a5a5a5, 0x5a5a5a5a}, \
		{0x3c3c3c3c, 0xc3c3c3c3, 0x3c3c3c3c, 0xc3c3c3c3, 0xc3c3c3c3, 0x3c3c3c3c, 0xc3c3c3c3, 0x3c3c3c3c}, \
		{0x96969696, 0x69696969, 0x96969696, 0x69696969, 0x69696969, 0x96969696, 0x69696969, 0x96969696}, \
		{0xff00ff00, 0x00ff00ff, 0xff00ff00, 0x00ff00ff, 0x00ff00ff, 0xff00ff00, 0x00ff00ff, 0xff00ff00}, \
		{0x55aa55aa, 0xaa55aa55, 0x55aa55aa, 0xaa55aa55, 0xaa55aa55, 0x55aa55aa, 0xaa55aa55, 0x55aa55aa}, \
		{0x33cc33cc, 0xcc33cc33, 0x33cc33cc, 0xcc33cc33, 0xcc33cc33, 0x33cc33cc, 0xcc33cc33, 0x33cc33cc}, \
		{0x99669966, 0x66996699, 0x99669966, 0x66996699, 0x66996699, 0x99669966, 0x66996699, 0x99669966}, \
		{0x0ff00ff0, 0xf00ff00f, 0x0ff00ff0, 0xf00ff00f, 0xf00ff00f, 0x0ff00ff0, 0xf00ff00f, 0x0ff00ff0}, \
		{0xa55aa55a, 0x5aa55aa5, 0xa55aa55a, 0x5aa55aa5, 0x5aa55aa5, 0xa55aa55a, 0x5aa55aa5, 0xa55aa55a}, \
		{0xc33cc33c, 0x3cc33cc3, 0xc33cc33c, 0x3cc33cc3, 0x3cc33cc3, 0xc33cc33c, 0x3cc33cc3, 0xc33cc33c}, \
		{0x69966996, 0x96699669, 0x69966996, 0x96699669, 0x96699669, 0x69966996, 0x96699669, 0x69966996}, \
		{0xffff0000, 0x0000ffff, 0xffff0000, 0x0000ffff, 0x0000ffff, 0xffff0000, 0x0000ffff, 0xffff0000}, \
		{0x5555aaaa, 0xaaaa5555, 0x5555aaaa, 0xaaaa5555, 0xaaaa5555, 0x5555aaaa, 0xaaaa5555, 0x5555aaaa}, \
		{0x3333cccc, 0xcccc3333, 0x3333cccc, 0xcccc3333, 0xcccc3333, 0x3333cccc, 0xcccc3333, 0x3333cccc}, \
		{0x99996666, 0x66669999, 0x99996666, 0x66669999, 0x66669999, 0x99996666, 0x66669999, 0x99996666}, \
		{0x0f0ff0f0, 0xf0f00f0f, 0x0f0ff0f0, 0xf0f00f0f, 0xf0f00f0f, 0x0f0ff0f0, 0xf0f00f0f, 0x0f0ff0f0}, \
		{0xa5a55a5a, 0x5a5aa5a5, 0xa5a55a5a, 0x5a5aa5a5, 0x5a5aa5a5, 0xa5a55a5a, 0x5a5aa5a5, 0xa5a55a5a}, \
		{0xc3c33c3c, 0x3c3cc3c3, 0xc3c33c3c, 0x3c3cc3c3, 0x3c3cc3c3, 0xc3c33c3c, 0x3c3cc3c3, 0xc3c33c3c}, \
		{0x69699696, 0x96966969, 0x69699696, 0x96966969, 0x96966969, 0x69699696, 0x96966969, 0x69699696}, \
		{0x00ffff00, 0xff0000ff, 0x00ffff00, 0xff0000ff, 0xff0000ff, 0x00ffff00, 0xff0000ff, 0x00ffff00}, \
		{0xaa5555aa, 0x55aaaa55, 0xaa5555aa, 0x55aaaa55, 0x55aaaa55, 0xaa5555aa, 0x55aaaa55, 0xaa5555aa}, \
		{0xcc3333cc, 0x33cccc33, 0xcc3333cc, 0x33cccc33, 0x33cccc33, 0xcc3333cc, 0x33cccc33, 0xcc3333cc}, \
		{0x66999966, 0x99666699, 0x66999966, 0x99666699, 0x99666699, 0x66999966, 0x99666699, 0x66999966}, \
		{0xf00f0ff0, 0x0ff0f00f, 0xf00f0ff0, 0x0ff0f00f, 0x0ff0f00f, 0xf00f0ff0, 0x0ff0f00f, 0xf00f0ff0}, \
		{0x5aa5a55a, 0xa55a5aa5, 0x5aa5a55a, 0xa55a5aa5, 0xa55a5aa5, 0x5aa5a55a, 0xa55a5aa5, 0x5aa5a55a}, \
		{0x3cc3c33c, 0xc33c3cc3, 0x3cc3c33c, 0xc33c3cc3, 0xc33c3cc3, 0x3cc3c33c, 0xc33c3cc3, 0x3cc3c33c}, \
		{0x96696996, 0x69969669, 0x96696996, 0x69969669, 0x69969669, 0x96696996, 0x69969669, 0x96696996}, \
		{0x00000000, 0x00000000, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0x00000000, 0x00000000}, \
		{0xaaaaaaaa, 0xaaaaaaaa, 0x55555555, 0x55555555, 0x55555555, 0x55555555, 0xaaaaaaaa, 0xaaaaaaaa}, \
		{0xcccccccc, 0xcccccccc, 0x33333333, 0x33333333, 0x33333333, 0x33333333, 0xcccccccc, 0xcccccccc}, \
		{0x66666666, 0x66666666, 0x99999999, 0x99999999, 0x99999999, 0x99999999, 0x66666666, 0x66666666}, \
		{0xf0f0f0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0, 0xf0f0f0f0}, \
		{0x5a5a5a5a, 0x5a5a5a5a, 0xa5a5a5a5, 0xa5a5a5a5, 0xa5a5a5a5, 0xa5a5a5a5, 0x5a5a5a5a, 0x5a5a5a5a}, \
		{0x3c3c3c3c, 0x3c3c3c3c, 0xc3c3c3c3, 0xc3c3c3c3, 0xc3c3c3c3, 0xc3c3c3c3, 0x3c3c3c3c, 0x3c3c3c3c}, \
		{0x96969696, 0x96969696, 0x69696969, 0x69696969, 0x69696969, 0x69696969, 0x96969696, 0x96969696}, \
		{0xff00ff00, 0xff00ff00, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0xff00ff00, 0xff00ff00}, \
		{0x55aa55aa, 0x55aa55aa, 0xaa55aa55, 0xaa55aa55, 0xaa55aa55, 0xaa55aa55, 0x55aa55aa, 0x55aa55aa}, \
		{0x33cc33cc, 0x33cc33cc, 0xcc33cc33, 0xcc33cc33, 0xcc33cc33, 0xcc33cc33, 0x33cc33cc, 0x33cc33cc}, \
		{0x99669966, 0x99669966, 0x66996699, 0x66996699, 0x66996699, 0x66996699, 0x99669966, 0x99669966}, \
		{0x0ff00ff0, 0x0ff00ff0, 0xf00ff00f, 0xf00ff00f, 0xf00ff00f, 0xf00ff00f, 0x0ff00ff0, 0x0ff00ff0}, \
		{0xa55aa55a, 0xa55aa55a, 0x5aa55aa5, 0x5aa55aa5, 0x5aa55aa5, 0x5aa55aa5, 0xa55aa55a, 0xa55aa55a}, \
		{0xc33cc33c, 0xc33cc33c, 0x3cc33cc3, 0x3cc33cc3, 0x3cc33cc3, 0x3cc33cc3, 0xc33cc33c, 0xc33cc33c}, \
		{0x69966996, 0x69966996, 0x96699669, 0x96699669, 0x96699669, 0x96699669, 0x69966996, 0x69966996}, \
		{0xffff0000, 0xffff0000, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0x0000ffff, 0xffff0000, 0xffff0000}, \
		{0x5555aaaa, 0x5555aaaa, 0xaaaa5555, 0xaaaa5555, 0xaaaa5555, 0xaaaa5555, 0x5555aaaa, 0x5555aaaa}, \
		{0x3333cccc, 0x3333cccc, 0xcccc3333, 0xcccc3333, 0xcccc3333, 0xcccc3333, 0x3333cccc, 0x3333cccc}, \
		{0x99996666, 0x99996666, 0x66669999, 0x66669999, 0x66669999, 0x66669999, 0x99996666, 0x99996666}, \
		{0x0f0ff0f0, 0x0f0ff0f0, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0xf0f00f0f, 0x0f0ff0f0, 0x0f0ff0f0}, \
		{0xa5a55a5a, 0xa5a55a5a, 0x5a5aa5a5, 0x5a5aa5a5, 0x5a5aa5a5, 0x5a5aa5a5, 0xa5a55a5a, 0xa5a55a5a}, \
		{0xc3c33c3c, 0xc3c33c3c, 0x3c3cc3c3, 0x3c3cc3c3, 0x3c3cc3c3, 0x3c3cc3c3, 0xc3c33c3c, 0xc3c33c3c}, \
		{0x69699696, 0x69699696, 0x96966969, 0x96966969, 0x96966969, 0x96966969, 0x69699696, 0x69699696}, \
		{0x00ffff00, 0x00ffff00, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0x00ffff00, 0x00ffff00}, \
		{0xaa5555aa, 0xaa5555aa, 0x55aaaa55, 0x55aaaa55, 0x55aaaa55, 0x55aaaa55, 0xaa5555aa, 0xaa5555aa}, \
		{0xcc3333cc, 0xcc3333cc, 0x33cccc33, 0x33cccc33, 0x33cccc33, 0x33cccc33, 0xcc3333cc, 0xcc3333cc}, \
		{0x66999966, 0x66999966, 0x99666699, 0x99666699, 0x99666699, 0x99666699, 0x66999966, 0x66999966}, \
		{0xf00f0ff0, 0xf00f0ff0, 0x0ff0f00f, 0x0ff0f00f, 0x0ff0f00f, 0x0ff0f00f, 0xf00f0ff0, 0xf00f0ff0}, \
		{0x5aa5a55a, 0x5aa5a55a, 0xa55a5aa5, 0xa55a5aa5, 0xa55a5aa5, 0xa55a5aa5, 0x5aa5a55a, 0x5aa5a55a}, \
		{0x3cc3c33c, 0x3cc3c33c, 0xc33c3cc3, 0xc33c3cc3, 0xc33c3cc3, 0xc33c3cc3, 0x3cc3c33c, 0x3cc3c33c}, \
		{0x96696996, 0x96696996, 0x69969669, 0x69969669, 0x69969669, 0x69969669, 0x96696996, 0x96696996}, \
		{0xffffffff, 0x00000000, 0x00000000, 0xffffffff, 0x00000000, 0xffffffff, 0xffffffff, 0x00000000}, \
		{0x55555555, 0xaaaaaaaa, 0xaaaaaaaa, 0x55555555, 0xaaaaaaaa, 0x55555555, 0x55555555, 0xaaaaaaaa}, \
		{0x33333333, 0xcccccccc, 0xcccccccc, 0x33333333, 0xcccccccc, 0x33333333, 0x33333333, 0xcccccccc}, \
		{0x99999999, 0x66666666, 0x66666666, 0x99999999, 0x66666666, 0x99999999, 0x99999999, 0x66666666}, \
		{0x0f0f0f0f, 0xf0f0f0f0, 0xf0f0f0f0, 0x0f0f0f0f, 0xf0f0f0f0, 0x0f0f0f0f, 0x0f0f0f0f, 0xf0f0f0f0}, \
		{0xa5a5a5a5, 0x5a5a5a5a, 0x5a5a5a5a, 0xa5a5a5a5, 0x5a5a5a5a, 0xa5a5a5a5, 0xa5a5a5a5, 0x5a5a5a5a}, \
		{0xc3c3c3c3, 0x3c3c3c3c, 0x3c3c3c3c, 0xc3c3c3c3, 0x3c3c3c3c, 0xc3c3c3c3, 0xc3c3c3c3, 0x3c3c3c3c}, \
		{0x69696969, 0x96969696, 0x96969696, 0x69696969, 0x96969696, 0x69696969, 0x69696969, 0x96969696}, \
		{0x00ff00ff, 0xff00ff00, 0xff00ff00, 0x00ff00ff, 0xff00ff00, 0x00ff00ff, 0x00ff00ff, 0xff00ff00}, \
		{0xaa55aa55, 0x55aa55aa, 0x55aa55aa, 0xaa55aa55, 0x55aa55aa, 0xaa55aa55, 0xaa55aa55, 0x55aa55aa}, \
		{0xcc33cc33, 0x33cc33cc, 0x33cc33cc, 0xcc33cc33, 0x33cc33cc, 0xcc33cc33, 0xcc33cc33, 0x33cc33cc}, \
		{0x66996699, 0x99669966, 0x99669966, 0x66996699, 0x99669966, 0x66996699, 0x66996699, 0x99669966}, \
		{0xf00ff00f, 0x0ff00ff0, 0x0ff00ff0, 0xf00ff00f, 0x0ff00ff0, 0xf00ff00f, 0xf00ff00f, 0x0ff00ff0}, \
		{0x5aa55aa5, 0xa55aa55a, 0xa55aa55a, 0x5aa55aa5, 0xa55aa55a, 0x5aa55aa5, 0x5aa55aa5, 0xa55aa55a}, \
		{0x3cc33cc3, 0xc33cc33c, 0xc33cc33c, 0x3cc33cc3, 0xc33cc33c, 0x3cc33cc3, 0x3cc33cc3, 0xc33cc33c}, \
		{0x96699669, 0x69966996, 0x69966996, 0x96699669, 0x69966996, 0x96699669, 0x96699669, 0x69966996}, \
		{0x0000ffff, 0xffff0000, 0xffff0000, 0x0000ffff, 0xffff0000, 0x0000ffff, 0x0000ffff, 0xffff0000}, \
		{0xaaaa5555, 0x5555aaaa, 0x5555aaaa, 0xaaaa5555, 0x5555aaaa, 0xaaaa5555, 0xaaaa5555, 0x5555aaaa}, \
		{0xcccc3333, 0x3333cccc, 0x3333cccc, 0xcccc3333, 0x3333cccc, 0xcccc3333, 0xcccc3333, 0x3333cccc}, \
		{0x66669999, 0x99996666, 0x99996666, 0x66669999, 0x99996666, 0x66669999, 0x66669999, 0x99996666}, \
		{0xf0f00f0f, 0x0f0ff0f0, 0x0f0ff0f0, 0xf0f00f0f, 0x0f0ff0f0, 0xf0f00f0f, 0xf0f00f0f, 0x0f0ff0f0}, \
		{0x5a5aa5a5, 0xa5a55a5a, 0xa5a55a5a, 0x5a5aa5a5, 0xa5a55a5a, 0x5a5aa5a5, 0x5a5aa5a5, 0xa5a55a5a}, \
		{0x3c3cc3c3, 0xc3c33c3c, 0xc3c33c3c, 0x3c3cc3c3, 0xc3c33c3c, 0x3c3cc3c3, 0x3c3cc3c3, 0xc3c33c3c}, \
		{0x96966969, 0x69699696, 0x69699696, 0x96966969, 0x69699696, 0x96966969, 0x96966969, 0x69699696}, \
		{0xff0000ff, 0x00ffff00, 0x00ffff00, 0xff0000ff, 0x00ffff00, 0xff0000ff, 0xff0000ff, 0x00ffff00}, \
		{0x55aaaa55, 0xaa5555aa, 0xaa5555aa, 0x55aaaa55, 0xaa5555aa, 0x55aaaa55, 0x55aaaa55, 0xaa5555aa}, \
		{0x33cccc33, 0xcc3333cc, 0xcc3333cc, 0x33cccc33, 0xcc3333cc, 0x33cccc33, 0x33cccc33, 0xcc3333cc}, \
		{0x99666699, 0x66999966, 0x66999966, 0x99666699, 0x66999966, 0x99666699, 0x99666699, 0x66999966}, \
		{0x0ff0f00f, 0xf00f0ff0, 0xf00f0ff0, 0x0ff0f00f, 0xf00f0ff0, 0x0ff0f00f, 0x0ff0f00f, 0xf00f0ff0}, \
		{0xa55a5aa5, 0x5aa5a55a, 0x5aa5a55a, 0xa55a5aa5, 0x5aa5a55a, 0xa55a5aa5, 0xa55a5aa5, 0x5aa5a55a}, \
		{0xc33c3cc3, 0x3cc3c33c, 0x3cc3c33c, 0xc33c3cc3, 0x3cc3c33c, 0xc33c3cc3, 0xc33c3cc3, 0x3cc3c33c}, \
		{0x69969669, 0x96696996, 0x96696996, 0x69969669, 0x96696996, 0x69969669, 0x69969669, 0x96696996} };

static void readCodeWords(uint64_t** codewords) {
	uint32_t i, j, k;
	for(i = 0; i < m_nCodewords; i++) {
		for(j = 0; j < (m_nCWIntlen * sizeof(uint32_t)) / sizeof(uint64_t); j++) {
			codewords[i][j] = 0;
			for(k = 0; k < sizeof(uint64_t) / sizeof(uint32_t); k++) {
				codewords[i][j] |= (((uint64_t) CODE_MATRIX[i][j*sizeof(uint64_t) / sizeof(uint32_t)+k]) << (k * 8 * sizeof(uint32_t)));
				//cout << (hex) << CODE_MATRIX[i][j*2+k];
			}
		//	cout << (hex) << codewords[i][j] << ", ";
		}
		//cout << endl;
	}
}

static void InitAndReadCodeWord(uint64_t*** codewords) {
	uint32_t ncodewords = m_nCodeWordBits;
	uint32_t ncwintlen = 8;
	*codewords = (uint64_t**) malloc(sizeof(uint64_t*) * ncodewords);
	for(uint32_t i = 0; i < ncodewords; i++) {
		(*codewords)[i] = (uint64_t*) malloc(sizeof(uint64_t) * ((ncwintlen * sizeof(uint32_t)) / sizeof(uint64_t)));
	}
	readCodeWords(*codewords);
}

#endif //CODEWORDS_H_
