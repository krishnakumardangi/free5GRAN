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
 * From ASN.1 module "NR-UE-Variables"
 * 	`asn1c -gen-PER -fcompound-names -findirect-choice -no-gen-example`
 */

#include "VarShortMAC-Input.h"

static asn_TYPE_member_t asn_MBR_VarShortMAC_Input_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VarShortMAC_Input, sourcePhysCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourcePhysCellId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VarShortMAC_Input, targetCellIdentity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"targetCellIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VarShortMAC_Input, source_c_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RNTI_Value,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"source-c-RNTI"
		},
};
static const ber_tlv_tag_t asn_DEF_VarShortMAC_Input_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_VarShortMAC_Input_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sourcePhysCellId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* targetCellIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* source-c-RNTI */
};
static asn_SEQUENCE_specifics_t asn_SPC_VarShortMAC_Input_specs_1 = {
	sizeof(struct VarShortMAC_Input),
	offsetof(struct VarShortMAC_Input, _asn_ctx),
	asn_MAP_VarShortMAC_Input_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_VarShortMAC_Input = {
	"VarShortMAC-Input",
	"VarShortMAC-Input",
	&asn_OP_SEQUENCE,
	asn_DEF_VarShortMAC_Input_tags_1,
	sizeof(asn_DEF_VarShortMAC_Input_tags_1)
		/sizeof(asn_DEF_VarShortMAC_Input_tags_1[0]), /* 1 */
	asn_DEF_VarShortMAC_Input_tags_1,	/* Same as above */
	sizeof(asn_DEF_VarShortMAC_Input_tags_1)
		/sizeof(asn_DEF_VarShortMAC_Input_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_VarShortMAC_Input_1,
	3,	/* Elements count */
	&asn_SPC_VarShortMAC_Input_specs_1	/* Additional specs */
};

