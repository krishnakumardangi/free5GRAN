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

#include "PDSCH-CodeBlockGroupTransmission.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_maxCodeBlockGroupsPerTransportBlock_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_maxCodeBlockGroupsPerTransportBlock_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_maxCodeBlockGroupsPerTransportBlock_value2enum_2[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n4" },
	{ 2,	2,	"n6" },
	{ 3,	2,	"n8" }
};
static const unsigned int asn_MAP_maxCodeBlockGroupsPerTransportBlock_enum2value_2[] = {
	0,	/* n2(0) */
	1,	/* n4(1) */
	2,	/* n6(2) */
	3	/* n8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_maxCodeBlockGroupsPerTransportBlock_specs_2 = {
	asn_MAP_maxCodeBlockGroupsPerTransportBlock_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_maxCodeBlockGroupsPerTransportBlock_enum2value_2,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maxCodeBlockGroupsPerTransportBlock_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maxCodeBlockGroupsPerTransportBlock_2 = {
	"maxCodeBlockGroupsPerTransportBlock",
	"maxCodeBlockGroupsPerTransportBlock",
	&asn_OP_NativeEnumerated,
	asn_DEF_maxCodeBlockGroupsPerTransportBlock_tags_2,
	sizeof(asn_DEF_maxCodeBlockGroupsPerTransportBlock_tags_2)
		/sizeof(asn_DEF_maxCodeBlockGroupsPerTransportBlock_tags_2[0]) - 1, /* 1 */
	asn_DEF_maxCodeBlockGroupsPerTransportBlock_tags_2,	/* Same as above */
	sizeof(asn_DEF_maxCodeBlockGroupsPerTransportBlock_tags_2)
		/sizeof(asn_DEF_maxCodeBlockGroupsPerTransportBlock_tags_2[0]), /* 2 */
	{ &asn_OER_type_maxCodeBlockGroupsPerTransportBlock_constr_2, &asn_PER_type_maxCodeBlockGroupsPerTransportBlock_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maxCodeBlockGroupsPerTransportBlock_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PDSCH_CodeBlockGroupTransmission_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_CodeBlockGroupTransmission, maxCodeBlockGroupsPerTransportBlock),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maxCodeBlockGroupsPerTransportBlock_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxCodeBlockGroupsPerTransportBlock"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDSCH_CodeBlockGroupTransmission, codeBlockGroupFlushIndicator),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"codeBlockGroupFlushIndicator"
		},
};
static const ber_tlv_tag_t asn_DEF_PDSCH_CodeBlockGroupTransmission_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDSCH_CodeBlockGroupTransmission_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxCodeBlockGroupsPerTransportBlock */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* codeBlockGroupFlushIndicator */
};
asn_SEQUENCE_specifics_t asn_SPC_PDSCH_CodeBlockGroupTransmission_specs_1 = {
	sizeof(struct PDSCH_CodeBlockGroupTransmission),
	offsetof(struct PDSCH_CodeBlockGroupTransmission, _asn_ctx),
	asn_MAP_PDSCH_CodeBlockGroupTransmission_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PDSCH_CodeBlockGroupTransmission = {
	"PDSCH-CodeBlockGroupTransmission",
	"PDSCH-CodeBlockGroupTransmission",
	&asn_OP_SEQUENCE,
	asn_DEF_PDSCH_CodeBlockGroupTransmission_tags_1,
	sizeof(asn_DEF_PDSCH_CodeBlockGroupTransmission_tags_1)
		/sizeof(asn_DEF_PDSCH_CodeBlockGroupTransmission_tags_1[0]), /* 1 */
	asn_DEF_PDSCH_CodeBlockGroupTransmission_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDSCH_CodeBlockGroupTransmission_tags_1)
		/sizeof(asn_DEF_PDSCH_CodeBlockGroupTransmission_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PDSCH_CodeBlockGroupTransmission_1,
	2,	/* Elements count */
	&asn_SPC_PDSCH_CodeBlockGroupTransmission_specs_1	/* Additional specs */
};

