/* linux/drivers/video/backlight/s6e8aa0_gamma.h
 *
 * Copyright (c) 2012 Samsung Electronics Co., Ltd.
 *
 * Haowe Li <haowei.li@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __S6E8AA0_GAMMA_H__
#define __S6E8AA0_GAMMA_H__

static const unsigned char gamma22_30[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xDF, 0x86, 0xF5,
	0xD5, 0xC7, 0xCF, 0xDF, 0xE0, 0xE0,
	0xC9, 0xC9, 0xCC, 0xD7, 0xD6, 0xD5,
	0x00, 0x68, 0x00, 0x68, 0x00, 0x75,
};

static const unsigned char gamma22_40[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xE5, 0xAA, 0xF2,
	0xD6, 0xCC, 0xCF, 0xE0, 0xE2, 0xE2,
	0xC8, 0xC9, 0xCA, 0xD2, 0xD2, 0xCF,
	0x00, 0x71, 0x00, 0x70, 0x00, 0x80,
};

static const unsigned char gamma22_50[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xE7, 0xBB, 0xEE,
	0xD6, 0xCE, 0xD0, 0xE0, 0xE3, 0xE4,
	0xC5, 0xC4, 0xC5, 0xD2, 0xD2, 0xCF,
	0x00, 0x78, 0x00, 0x78, 0x00, 0x88,
};

static const unsigned char gamma22_60[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xE9, 0xC4, 0xEB,
	0xD6, 0xD0, 0xD1, 0xE0, 0xE3, 0xE4,
	0xC3, 0xC2, 0xC2, 0xD2, 0xD1, 0xCF,
	0x00, 0x7E, 0x00, 0x7E, 0x00, 0x8F,
};

static const unsigned char gamma22_70[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEA, 0xC9, 0xEA,
	0xD6, 0xD2, 0xD2, 0xDF, 0xE1, 0xE3,
	0xC2, 0xC1, 0xC0, 0xD1, 0xD0, 0xCE,
	0x00, 0x84, 0x00, 0x84, 0x00, 0x96,
};

static const unsigned char gamma22_80[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEB, 0xCC, 0xE9,
	0xD5, 0xD4, 0xD3, 0xDE, 0xE1, 0xE2,
	0xC2, 0xBF, 0xBF, 0xCF, 0xCF, 0xCC,
	0x00, 0x89, 0x00, 0x89, 0x00, 0x9C,
};

static const unsigned char gamma22_90[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEB, 0xD0, 0xE9,
	0xD4, 0xD5, 0xD4, 0xDF, 0xE0, 0xE1,
	0xC1, 0xBE, 0xBD, 0xCD, 0xCD, 0xCA,
	0x00, 0x8E, 0x00, 0x8F, 0x00, 0xA2,
};

static const unsigned char gamma22_100[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEA, 0xD2, 0xE7,
	0xD7, 0xD6, 0xD6, 0xDF, 0xDF, 0xE2,
	0xBF, 0xBD, 0xBC, 0xCD, 0xCD, 0xC9,
	0x00, 0x92, 0x00, 0x93, 0x00, 0xA7,
};

static const unsigned char gamma22_110[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEB, 0xD4, 0xE5,
	0xD6, 0xD6, 0xD7, 0xDE, 0xDF, 0xE0,
	0xBE, 0xBC, 0xBB, 0xCE, 0xCC, 0xC9,
	0x00, 0x96, 0x00, 0x97, 0x00, 0xAC,
};

static const unsigned char gamma22_120[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xED, 0xD6, 0xE6,
	0xD6, 0xD7, 0xD8, 0xDE, 0xDE, 0xE0,
	0xBC, 0xBC, 0xB9, 0xCD, 0xCA, 0xC8,
	0x00, 0x9A, 0x00, 0x9C, 0x00, 0xB1,
};

static const unsigned char gamma22_130[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEC, 0xD7, 0xE6,
	0xD3, 0xD8, 0xD7, 0xDE, 0xDD, 0xDF,
	0xBD, 0xBB, 0xB8, 0xCA, 0xC9, 0xC6,
	0x00, 0x9F, 0x00, 0xA0, 0x00, 0xB7,
};

static const unsigned char gamma22_140[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEC, 0xD9, 0xE5,
	0xD4, 0xD8, 0xD9, 0xDE, 0xDD, 0xDF,
	0xBB, 0xB9, 0xB7, 0xCA, 0xC9, 0xC5,
	0x00, 0xA3, 0x00, 0xA4, 0x00, 0xBB,
};

static const unsigned char gamma22_150[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEC, 0xDA, 0xE5,
	0xD4, 0xD8, 0xD9, 0xDD, 0xDD, 0xDD,
	0xBB, 0xB9, 0xB6, 0xC9, 0xC7, 0xC5,
	0x00, 0xA6, 0x00, 0xA8, 0x00, 0xBF,
};

static const unsigned char gamma22_160[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xED, 0xDB, 0xE6,
	0xD4, 0xD7, 0xD9, 0xDC, 0xDD, 0xDD,
	0xB9, 0xB8, 0xB4, 0xC9, 0xC6, 0xC4,
	0x00, 0xAA, 0x00, 0xAC, 0x00, 0xC4,
};

static const unsigned char gamma22_170[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEC, 0xDC, 0xE5,
	0xD5, 0xD8, 0xD9, 0xDD, 0xDC, 0xDD,
	0xBA, 0xB7, 0xB5, 0xC7, 0xC6, 0xC3,
	0x00, 0xAD, 0x00, 0xAF, 0x00, 0xC7,
};

static const unsigned char gamma22_180[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEE, 0xDD, 0xE6,
	0xD4, 0xD7, 0xD9, 0xDB, 0xDC, 0xDB,
	0xB9, 0xB7, 0xB4, 0xC6, 0xC4, 0xC2,
	0x00, 0xB1, 0x00, 0xB3, 0x00, 0xCC,
};

static const unsigned char gamma22_190[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xED, 0xDE, 0xE6,
	0xD3, 0xD8, 0xD8, 0xDD, 0xDB, 0xDC,
	0xB9, 0xB6, 0xB4, 0xC5, 0xC4, 0xC0,
	0x00, 0xB4, 0x00, 0xB6, 0x00, 0xD0,
};

static const unsigned char gamma22_200[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xED, 0xDF, 0xE6,
	0xD3, 0xD7, 0xD8, 0xDB, 0xDB, 0xDA,
	0xB8, 0xB6, 0xB3, 0xC4, 0xC3, 0xC0,
	0x00, 0xB8, 0x00, 0xB9, 0x00, 0xD4,
};

static const unsigned char gamma22_210[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEC, 0xE0, 0xE5,
	0xD5, 0xD7, 0xD9, 0xDB, 0xDA, 0xDA,
	0xB7, 0xB5, 0xB1, 0xC4, 0xC2, 0xC0,
	0x00, 0xBA, 0x00, 0xBD, 0x00, 0xD7,
};

static const unsigned char gamma22_220[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xED, 0xE0, 0xE6,
	0xD4, 0xD7, 0xD9, 0xDA, 0xDA, 0xD9,
	0xB7, 0xB4, 0xB1, 0xC2, 0xC2, 0xBE,
	0x00, 0xBE, 0x00, 0xC0, 0x00, 0xDC,
};

static const unsigned char gamma22_230[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEC, 0xE2, 0xE6,
	0xD3, 0xD6, 0xD8, 0xDC, 0xD9, 0xD9,
	0xB6, 0xB4, 0xB1, 0xC1, 0xC1, 0xBD,
	0x00, 0xC1, 0x00, 0xC3, 0x00, 0xDF,
};

static const unsigned char gamma22_240[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xED, 0xE2, 0xE6,
	0xD4, 0xD6, 0xD8, 0xDA, 0xDA, 0xDA,
	0xB6, 0xB3, 0xB0, 0xC1, 0xBF, 0xBC,
	0x00, 0xC4, 0x00, 0xC7, 0x00, 0xE3,
};

static const unsigned char gamma22_250[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xED, 0xE3, 0xE7,
	0xD4, 0xD6, 0xD8, 0xDB, 0xD9, 0xD9,
	0xB3, 0xB2, 0xAE, 0xC1, 0xC0, 0xBC,
	0x00, 0xC7, 0x00, 0xC9, 0x00, 0xE7,
};

static const unsigned char gamma22_260[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xED, 0xE4, 0xE7,
	0xD4, 0xD5, 0xD7, 0xDA, 0xD9, 0xD9,
	0xB3, 0xB2, 0xAD, 0xC1, 0xBE, 0xBC,
	0x00, 0xC9, 0x00, 0xCD, 0x00, 0xEA,
};

static const unsigned char gamma22_270[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xED, 0xE5, 0xE8,
	0xD3, 0xD5, 0xD5, 0xDB, 0xD9, 0xD9,
	0xB3, 0xB1, 0xAE, 0xBF, 0xBE, 0xBA,
	0x00, 0xCC, 0x00, 0xD0, 0x00, 0xEE,
};

static const unsigned char gamma22_280[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEC, 0xE5, 0xE6,
	0xD2, 0xD4, 0xD6, 0xDA, 0xD9, 0xD8,
	0xB3, 0xB1, 0xAD, 0xBF, 0xBD, 0xBA,
	0x00, 0xCF, 0x00, 0xD3, 0x00, 0xF1,
};

static const unsigned char gamma22_290[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xEC, 0xE6, 0xE7,
	0xD2, 0xD4, 0xD5, 0xDB, 0xD8, 0xD8,
	0xB1, 0xB0, 0xAC, 0xBE, 0xBD, 0xB9,
	0x00, 0xD3, 0x00, 0xD6, 0x00, 0xF5,
};

static const unsigned char gamma22_300[] = {
	0xFA, 0x01,
	0x1F, 0x1F, 0x1F, 0xED, 0xE6, 0xE7,
	0xD1, 0xD3, 0xD4, 0xDA, 0xD8, 0xD7,
	0xB1, 0xAF, 0xAB, 0xBD, 0xBB, 0xB8,
	0x00, 0xD6, 0x00, 0xDA, 0x00, 0xFA,
};


static const unsigned char *gamma22_table[] = {
	gamma22_30,
	gamma22_40,
	gamma22_50,
	gamma22_60,
	gamma22_70,
	gamma22_80,
	gamma22_90,
	gamma22_100,
	gamma22_110,
	gamma22_120,
	gamma22_130,
	gamma22_140,
	gamma22_150,
	gamma22_160,
	gamma22_170,
	gamma22_180,
	gamma22_190,
	gamma22_200,
	gamma22_210,
	gamma22_220,
	gamma22_230,
	gamma22_240,
	gamma22_250,
	gamma22_260,
	gamma22_270,
	gamma22_280,
	gamma22_290,
};

#endif /* __S6E8AA0_GAMMA_H__ */
