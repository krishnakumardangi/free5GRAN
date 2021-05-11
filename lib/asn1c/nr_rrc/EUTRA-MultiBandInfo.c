/*
 * Copyright 2020-2021 Telecom Paris
   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at
       http://www.apache.org/licenses/LICENSE-2.0
   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
 */
/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#include "EUTRA-MultiBandInfo.h"

asn_TYPE_member_t asn_MBR_EUTRA_MultiBandInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EUTRA_MultiBandInfo, eutra_FreqBandIndicator),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreqBandIndicatorEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutra-FreqBandIndicator"
		},
	{ ATF_POINTER, 1, offsetof(struct EUTRA_MultiBandInfo, eutra_NS_PmaxList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRA_NS_PmaxList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutra-NS-PmaxList"
		},
};
static const int asn_MAP_EUTRA_MultiBandInfo_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_EUTRA_MultiBandInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EUTRA_MultiBandInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eutra-FreqBandIndicator */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eutra-NS-PmaxList */
};
asn_SEQUENCE_specifics_t asn_SPC_EUTRA_MultiBandInfo_specs_1 = {
	sizeof(struct EUTRA_MultiBandInfo),
	offsetof(struct EUTRA_MultiBandInfo, _asn_ctx),
	asn_MAP_EUTRA_MultiBandInfo_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_EUTRA_MultiBandInfo_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EUTRA_MultiBandInfo = {
	"EUTRA-MultiBandInfo",
	"EUTRA-MultiBandInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_EUTRA_MultiBandInfo_tags_1,
	sizeof(asn_DEF_EUTRA_MultiBandInfo_tags_1)
		/sizeof(asn_DEF_EUTRA_MultiBandInfo_tags_1[0]), /* 1 */
	asn_DEF_EUTRA_MultiBandInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_EUTRA_MultiBandInfo_tags_1)
		/sizeof(asn_DEF_EUTRA_MultiBandInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_EUTRA_MultiBandInfo_1,
	2,	/* Elements count */
	&asn_SPC_EUTRA_MultiBandInfo_specs_1	/* Additional specs */
};

