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

#include "PH-InfoSCG.h"

asn_TYPE_member_t asn_MBR_PH_InfoSCG_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PH_InfoSCG, servCellIndex),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServCellIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servCellIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PH_InfoSCG, ph_Uplink),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PH_UplinkCarrierSCG,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ph-Uplink"
		},
	{ ATF_POINTER, 1, offsetof(struct PH_InfoSCG, ph_SupplementaryUplink),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PH_UplinkCarrierSCG,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ph-SupplementaryUplink"
		},
};
static const int asn_MAP_PH_InfoSCG_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_PH_InfoSCG_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PH_InfoSCG_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* servCellIndex */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ph-Uplink */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ph-SupplementaryUplink */
};
asn_SEQUENCE_specifics_t asn_SPC_PH_InfoSCG_specs_1 = {
	sizeof(struct PH_InfoSCG),
	offsetof(struct PH_InfoSCG, _asn_ctx),
	asn_MAP_PH_InfoSCG_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_PH_InfoSCG_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PH_InfoSCG = {
	"PH-InfoSCG",
	"PH-InfoSCG",
	&asn_OP_SEQUENCE,
	asn_DEF_PH_InfoSCG_tags_1,
	sizeof(asn_DEF_PH_InfoSCG_tags_1)
		/sizeof(asn_DEF_PH_InfoSCG_tags_1[0]), /* 1 */
	asn_DEF_PH_InfoSCG_tags_1,	/* Same as above */
	sizeof(asn_DEF_PH_InfoSCG_tags_1)
		/sizeof(asn_DEF_PH_InfoSCG_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PH_InfoSCG_1,
	3,	/* Elements count */
	&asn_SPC_PH_InfoSCG_specs_1	/* Additional specs */
};

