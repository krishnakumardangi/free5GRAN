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

#include "SPS-Config.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_nrofHARQ_Processes_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_periodicity_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_periodicity_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_mcs_Table_constr_21 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_mcs_Table_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_nrofHARQ_Processes_constr_19 CC_NOTUSED = {
	{ 1, 1 }	/* (1..8) */,
	-1};
static asn_per_constraints_t asn_PER_memb_nrofHARQ_Processes_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_periodicity_value2enum_2[] = {
	{ 0,	4,	"ms10" },
	{ 1,	4,	"ms20" },
	{ 2,	4,	"ms32" },
	{ 3,	4,	"ms40" },
	{ 4,	4,	"ms64" },
	{ 5,	4,	"ms80" },
	{ 6,	5,	"ms128" },
	{ 7,	5,	"ms160" },
	{ 8,	5,	"ms320" },
	{ 9,	5,	"ms640" },
	{ 10,	6,	"spare6" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_periodicity_enum2value_2[] = {
	0,	/* ms10(0) */
	6,	/* ms128(6) */
	7,	/* ms160(7) */
	1,	/* ms20(1) */
	2,	/* ms32(2) */
	8,	/* ms320(8) */
	3,	/* ms40(3) */
	4,	/* ms64(4) */
	9,	/* ms640(9) */
	5,	/* ms80(5) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11,	/* spare5(11) */
	10	/* spare6(10) */
};
static const asn_INTEGER_specifics_t asn_SPC_periodicity_specs_2 = {
	asn_MAP_periodicity_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_periodicity_enum2value_2,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_periodicity_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_periodicity_2 = {
	"periodicity",
	"periodicity",
	&asn_OP_NativeEnumerated,
	asn_DEF_periodicity_tags_2,
	sizeof(asn_DEF_periodicity_tags_2)
		/sizeof(asn_DEF_periodicity_tags_2[0]) - 1, /* 1 */
	asn_DEF_periodicity_tags_2,	/* Same as above */
	sizeof(asn_DEF_periodicity_tags_2)
		/sizeof(asn_DEF_periodicity_tags_2[0]), /* 2 */
	{ &asn_OER_type_periodicity_constr_2, &asn_PER_type_periodicity_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_periodicity_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_mcs_Table_value2enum_21[] = {
	{ 0,	10,	"qam64LowSE" }
};
static const unsigned int asn_MAP_mcs_Table_enum2value_21[] = {
	0	/* qam64LowSE(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_mcs_Table_specs_21 = {
	asn_MAP_mcs_Table_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_mcs_Table_enum2value_21,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mcs_Table_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mcs_Table_21 = {
	"mcs-Table",
	"mcs-Table",
	&asn_OP_NativeEnumerated,
	asn_DEF_mcs_Table_tags_21,
	sizeof(asn_DEF_mcs_Table_tags_21)
		/sizeof(asn_DEF_mcs_Table_tags_21[0]) - 1, /* 1 */
	asn_DEF_mcs_Table_tags_21,	/* Same as above */
	sizeof(asn_DEF_mcs_Table_tags_21)
		/sizeof(asn_DEF_mcs_Table_tags_21[0]), /* 2 */
	{ &asn_OER_type_mcs_Table_constr_21, &asn_PER_type_mcs_Table_constr_21, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mcs_Table_specs_21	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SPS_Config_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SPS_Config, periodicity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_periodicity_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"periodicity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SPS_Config, nrofHARQ_Processes),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_nrofHARQ_Processes_constr_19, &asn_PER_memb_nrofHARQ_Processes_constr_19,  memb_nrofHARQ_Processes_constraint_1 },
		0, 0, /* No default value */
		"nrofHARQ-Processes"
		},
	{ ATF_POINTER, 2, offsetof(struct SPS_Config, n1PUCCH_AN),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUCCH_ResourceId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"n1PUCCH-AN"
		},
	{ ATF_POINTER, 1, offsetof(struct SPS_Config, mcs_Table),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mcs_Table_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mcs-Table"
		},
};
static const int asn_MAP_SPS_Config_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_SPS_Config_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SPS_Config_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* periodicity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nrofHARQ-Processes */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* n1PUCCH-AN */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* mcs-Table */
};
asn_SEQUENCE_specifics_t asn_SPC_SPS_Config_specs_1 = {
	sizeof(struct SPS_Config),
	offsetof(struct SPS_Config, _asn_ctx),
	asn_MAP_SPS_Config_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SPS_Config_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SPS_Config = {
	"SPS-Config",
	"SPS-Config",
	&asn_OP_SEQUENCE,
	asn_DEF_SPS_Config_tags_1,
	sizeof(asn_DEF_SPS_Config_tags_1)
		/sizeof(asn_DEF_SPS_Config_tags_1[0]), /* 1 */
	asn_DEF_SPS_Config_tags_1,	/* Same as above */
	sizeof(asn_DEF_SPS_Config_tags_1)
		/sizeof(asn_DEF_SPS_Config_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SPS_Config_1,
	4,	/* Elements count */
	&asn_SPC_SPS_Config_specs_1	/* Additional specs */
};

