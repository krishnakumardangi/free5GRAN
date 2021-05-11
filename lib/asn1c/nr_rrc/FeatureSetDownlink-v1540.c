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

#include "FeatureSetDownlink-v1540.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_oneFL_DMRS_TwoAdditionalDMRS_DL_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_oneFL_DMRS_TwoAdditionalDMRS_DL_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_additionalDMRS_DL_Alt_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_additionalDMRS_DL_Alt_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_twoFL_DMRS_TwoAdditionalDMRS_DL_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_twoFL_DMRS_TwoAdditionalDMRS_DL_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_oneFL_DMRS_ThreeAdditionalDMRS_DL_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_oneFL_DMRS_ThreeAdditionalDMRS_DL_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_scs_15kHz_constr_11 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_scs_15kHz_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_scs_30kHz_constr_15 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_scs_30kHz_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_scs_60kHz_constr_19 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_scs_60kHz_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_scs_120kHz_constr_23 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_scs_120kHz_constr_23 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_pdsch_SeparationWithGap_constr_27 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_pdsch_SeparationWithGap_constr_27 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_differentTB_PerSlot_SCS_30kHz_constr_34 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_differentTB_PerSlot_SCS_30kHz_constr_34 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_dl_MCS_TableAlt_DynamicIndication_constr_39 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_dl_MCS_TableAlt_DynamicIndication_constr_39 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_oneFL_DMRS_TwoAdditionalDMRS_DL_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_oneFL_DMRS_TwoAdditionalDMRS_DL_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_oneFL_DMRS_TwoAdditionalDMRS_DL_specs_2 = {
	asn_MAP_oneFL_DMRS_TwoAdditionalDMRS_DL_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_oneFL_DMRS_TwoAdditionalDMRS_DL_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_oneFL_DMRS_TwoAdditionalDMRS_DL_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_oneFL_DMRS_TwoAdditionalDMRS_DL_2 = {
	"oneFL-DMRS-TwoAdditionalDMRS-DL",
	"oneFL-DMRS-TwoAdditionalDMRS-DL",
	&asn_OP_NativeEnumerated,
	asn_DEF_oneFL_DMRS_TwoAdditionalDMRS_DL_tags_2,
	sizeof(asn_DEF_oneFL_DMRS_TwoAdditionalDMRS_DL_tags_2)
		/sizeof(asn_DEF_oneFL_DMRS_TwoAdditionalDMRS_DL_tags_2[0]) - 1, /* 1 */
	asn_DEF_oneFL_DMRS_TwoAdditionalDMRS_DL_tags_2,	/* Same as above */
	sizeof(asn_DEF_oneFL_DMRS_TwoAdditionalDMRS_DL_tags_2)
		/sizeof(asn_DEF_oneFL_DMRS_TwoAdditionalDMRS_DL_tags_2[0]), /* 2 */
	{ &asn_OER_type_oneFL_DMRS_TwoAdditionalDMRS_DL_constr_2, &asn_PER_type_oneFL_DMRS_TwoAdditionalDMRS_DL_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_oneFL_DMRS_TwoAdditionalDMRS_DL_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_additionalDMRS_DL_Alt_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_additionalDMRS_DL_Alt_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_additionalDMRS_DL_Alt_specs_4 = {
	asn_MAP_additionalDMRS_DL_Alt_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_additionalDMRS_DL_Alt_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_additionalDMRS_DL_Alt_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_additionalDMRS_DL_Alt_4 = {
	"additionalDMRS-DL-Alt",
	"additionalDMRS-DL-Alt",
	&asn_OP_NativeEnumerated,
	asn_DEF_additionalDMRS_DL_Alt_tags_4,
	sizeof(asn_DEF_additionalDMRS_DL_Alt_tags_4)
		/sizeof(asn_DEF_additionalDMRS_DL_Alt_tags_4[0]) - 1, /* 1 */
	asn_DEF_additionalDMRS_DL_Alt_tags_4,	/* Same as above */
	sizeof(asn_DEF_additionalDMRS_DL_Alt_tags_4)
		/sizeof(asn_DEF_additionalDMRS_DL_Alt_tags_4[0]), /* 2 */
	{ &asn_OER_type_additionalDMRS_DL_Alt_constr_4, &asn_PER_type_additionalDMRS_DL_Alt_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_additionalDMRS_DL_Alt_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_twoFL_DMRS_TwoAdditionalDMRS_DL_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_twoFL_DMRS_TwoAdditionalDMRS_DL_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_twoFL_DMRS_TwoAdditionalDMRS_DL_specs_6 = {
	asn_MAP_twoFL_DMRS_TwoAdditionalDMRS_DL_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_twoFL_DMRS_TwoAdditionalDMRS_DL_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_twoFL_DMRS_TwoAdditionalDMRS_DL_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_twoFL_DMRS_TwoAdditionalDMRS_DL_6 = {
	"twoFL-DMRS-TwoAdditionalDMRS-DL",
	"twoFL-DMRS-TwoAdditionalDMRS-DL",
	&asn_OP_NativeEnumerated,
	asn_DEF_twoFL_DMRS_TwoAdditionalDMRS_DL_tags_6,
	sizeof(asn_DEF_twoFL_DMRS_TwoAdditionalDMRS_DL_tags_6)
		/sizeof(asn_DEF_twoFL_DMRS_TwoAdditionalDMRS_DL_tags_6[0]) - 1, /* 1 */
	asn_DEF_twoFL_DMRS_TwoAdditionalDMRS_DL_tags_6,	/* Same as above */
	sizeof(asn_DEF_twoFL_DMRS_TwoAdditionalDMRS_DL_tags_6)
		/sizeof(asn_DEF_twoFL_DMRS_TwoAdditionalDMRS_DL_tags_6[0]), /* 2 */
	{ &asn_OER_type_twoFL_DMRS_TwoAdditionalDMRS_DL_constr_6, &asn_PER_type_twoFL_DMRS_TwoAdditionalDMRS_DL_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_twoFL_DMRS_TwoAdditionalDMRS_DL_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_oneFL_DMRS_ThreeAdditionalDMRS_DL_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_oneFL_DMRS_ThreeAdditionalDMRS_DL_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_oneFL_DMRS_ThreeAdditionalDMRS_DL_specs_8 = {
	asn_MAP_oneFL_DMRS_ThreeAdditionalDMRS_DL_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_oneFL_DMRS_ThreeAdditionalDMRS_DL_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_oneFL_DMRS_ThreeAdditionalDMRS_DL_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_oneFL_DMRS_ThreeAdditionalDMRS_DL_8 = {
	"oneFL-DMRS-ThreeAdditionalDMRS-DL",
	"oneFL-DMRS-ThreeAdditionalDMRS-DL",
	&asn_OP_NativeEnumerated,
	asn_DEF_oneFL_DMRS_ThreeAdditionalDMRS_DL_tags_8,
	sizeof(asn_DEF_oneFL_DMRS_ThreeAdditionalDMRS_DL_tags_8)
		/sizeof(asn_DEF_oneFL_DMRS_ThreeAdditionalDMRS_DL_tags_8[0]) - 1, /* 1 */
	asn_DEF_oneFL_DMRS_ThreeAdditionalDMRS_DL_tags_8,	/* Same as above */
	sizeof(asn_DEF_oneFL_DMRS_ThreeAdditionalDMRS_DL_tags_8)
		/sizeof(asn_DEF_oneFL_DMRS_ThreeAdditionalDMRS_DL_tags_8[0]), /* 2 */
	{ &asn_OER_type_oneFL_DMRS_ThreeAdditionalDMRS_DL_constr_8, &asn_PER_type_oneFL_DMRS_ThreeAdditionalDMRS_DL_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_oneFL_DMRS_ThreeAdditionalDMRS_DL_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_scs_15kHz_value2enum_11[] = {
	{ 0,	4,	"set1" },
	{ 1,	4,	"set2" },
	{ 2,	4,	"set3" }
};
static const unsigned int asn_MAP_scs_15kHz_enum2value_11[] = {
	0,	/* set1(0) */
	1,	/* set2(1) */
	2	/* set3(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_scs_15kHz_specs_11 = {
	asn_MAP_scs_15kHz_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_scs_15kHz_enum2value_11,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_scs_15kHz_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_scs_15kHz_11 = {
	"scs-15kHz",
	"scs-15kHz",
	&asn_OP_NativeEnumerated,
	asn_DEF_scs_15kHz_tags_11,
	sizeof(asn_DEF_scs_15kHz_tags_11)
		/sizeof(asn_DEF_scs_15kHz_tags_11[0]) - 1, /* 1 */
	asn_DEF_scs_15kHz_tags_11,	/* Same as above */
	sizeof(asn_DEF_scs_15kHz_tags_11)
		/sizeof(asn_DEF_scs_15kHz_tags_11[0]), /* 2 */
	{ &asn_OER_type_scs_15kHz_constr_11, &asn_PER_type_scs_15kHz_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_scs_15kHz_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_scs_30kHz_value2enum_15[] = {
	{ 0,	4,	"set1" },
	{ 1,	4,	"set2" },
	{ 2,	4,	"set3" }
};
static const unsigned int asn_MAP_scs_30kHz_enum2value_15[] = {
	0,	/* set1(0) */
	1,	/* set2(1) */
	2	/* set3(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_scs_30kHz_specs_15 = {
	asn_MAP_scs_30kHz_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_scs_30kHz_enum2value_15,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_scs_30kHz_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_scs_30kHz_15 = {
	"scs-30kHz",
	"scs-30kHz",
	&asn_OP_NativeEnumerated,
	asn_DEF_scs_30kHz_tags_15,
	sizeof(asn_DEF_scs_30kHz_tags_15)
		/sizeof(asn_DEF_scs_30kHz_tags_15[0]) - 1, /* 1 */
	asn_DEF_scs_30kHz_tags_15,	/* Same as above */
	sizeof(asn_DEF_scs_30kHz_tags_15)
		/sizeof(asn_DEF_scs_30kHz_tags_15[0]), /* 2 */
	{ &asn_OER_type_scs_30kHz_constr_15, &asn_PER_type_scs_30kHz_constr_15, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_scs_30kHz_specs_15	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_scs_60kHz_value2enum_19[] = {
	{ 0,	4,	"set1" },
	{ 1,	4,	"set2" },
	{ 2,	4,	"set3" }
};
static const unsigned int asn_MAP_scs_60kHz_enum2value_19[] = {
	0,	/* set1(0) */
	1,	/* set2(1) */
	2	/* set3(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_scs_60kHz_specs_19 = {
	asn_MAP_scs_60kHz_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_scs_60kHz_enum2value_19,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_scs_60kHz_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_scs_60kHz_19 = {
	"scs-60kHz",
	"scs-60kHz",
	&asn_OP_NativeEnumerated,
	asn_DEF_scs_60kHz_tags_19,
	sizeof(asn_DEF_scs_60kHz_tags_19)
		/sizeof(asn_DEF_scs_60kHz_tags_19[0]) - 1, /* 1 */
	asn_DEF_scs_60kHz_tags_19,	/* Same as above */
	sizeof(asn_DEF_scs_60kHz_tags_19)
		/sizeof(asn_DEF_scs_60kHz_tags_19[0]), /* 2 */
	{ &asn_OER_type_scs_60kHz_constr_19, &asn_PER_type_scs_60kHz_constr_19, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_scs_60kHz_specs_19	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_scs_120kHz_value2enum_23[] = {
	{ 0,	4,	"set1" },
	{ 1,	4,	"set2" },
	{ 2,	4,	"set3" }
};
static const unsigned int asn_MAP_scs_120kHz_enum2value_23[] = {
	0,	/* set1(0) */
	1,	/* set2(1) */
	2	/* set3(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_scs_120kHz_specs_23 = {
	asn_MAP_scs_120kHz_value2enum_23,	/* "tag" => N; sorted by tag */
	asn_MAP_scs_120kHz_enum2value_23,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_scs_120kHz_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_scs_120kHz_23 = {
	"scs-120kHz",
	"scs-120kHz",
	&asn_OP_NativeEnumerated,
	asn_DEF_scs_120kHz_tags_23,
	sizeof(asn_DEF_scs_120kHz_tags_23)
		/sizeof(asn_DEF_scs_120kHz_tags_23[0]) - 1, /* 1 */
	asn_DEF_scs_120kHz_tags_23,	/* Same as above */
	sizeof(asn_DEF_scs_120kHz_tags_23)
		/sizeof(asn_DEF_scs_120kHz_tags_23[0]), /* 2 */
	{ &asn_OER_type_scs_120kHz_constr_23, &asn_PER_type_scs_120kHz_constr_23, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_scs_120kHz_specs_23	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_pdcch_MonitoringAnyOccasionsWithSpanGap_10[] = {
	{ ATF_POINTER, 4, offsetof(struct FeatureSetDownlink_v1540__pdcch_MonitoringAnyOccasionsWithSpanGap, scs_15kHz),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_scs_15kHz_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scs-15kHz"
		},
	{ ATF_POINTER, 3, offsetof(struct FeatureSetDownlink_v1540__pdcch_MonitoringAnyOccasionsWithSpanGap, scs_30kHz),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_scs_30kHz_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scs-30kHz"
		},
	{ ATF_POINTER, 2, offsetof(struct FeatureSetDownlink_v1540__pdcch_MonitoringAnyOccasionsWithSpanGap, scs_60kHz),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_scs_60kHz_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scs-60kHz"
		},
	{ ATF_POINTER, 1, offsetof(struct FeatureSetDownlink_v1540__pdcch_MonitoringAnyOccasionsWithSpanGap, scs_120kHz),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_scs_120kHz_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scs-120kHz"
		},
};
static const int asn_MAP_pdcch_MonitoringAnyOccasionsWithSpanGap_oms_10[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_pdcch_MonitoringAnyOccasionsWithSpanGap_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_pdcch_MonitoringAnyOccasionsWithSpanGap_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* scs-15kHz */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* scs-30kHz */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* scs-60kHz */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* scs-120kHz */
};
static asn_SEQUENCE_specifics_t asn_SPC_pdcch_MonitoringAnyOccasionsWithSpanGap_specs_10 = {
	sizeof(struct FeatureSetDownlink_v1540__pdcch_MonitoringAnyOccasionsWithSpanGap),
	offsetof(struct FeatureSetDownlink_v1540__pdcch_MonitoringAnyOccasionsWithSpanGap, _asn_ctx),
	asn_MAP_pdcch_MonitoringAnyOccasionsWithSpanGap_tag2el_10,
	4,	/* Count of tags in the map */
	asn_MAP_pdcch_MonitoringAnyOccasionsWithSpanGap_oms_10,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pdcch_MonitoringAnyOccasionsWithSpanGap_10 = {
	"pdcch-MonitoringAnyOccasionsWithSpanGap",
	"pdcch-MonitoringAnyOccasionsWithSpanGap",
	&asn_OP_SEQUENCE,
	asn_DEF_pdcch_MonitoringAnyOccasionsWithSpanGap_tags_10,
	sizeof(asn_DEF_pdcch_MonitoringAnyOccasionsWithSpanGap_tags_10)
		/sizeof(asn_DEF_pdcch_MonitoringAnyOccasionsWithSpanGap_tags_10[0]) - 1, /* 1 */
	asn_DEF_pdcch_MonitoringAnyOccasionsWithSpanGap_tags_10,	/* Same as above */
	sizeof(asn_DEF_pdcch_MonitoringAnyOccasionsWithSpanGap_tags_10)
		/sizeof(asn_DEF_pdcch_MonitoringAnyOccasionsWithSpanGap_tags_10[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_pdcch_MonitoringAnyOccasionsWithSpanGap_10,
	4,	/* Elements count */
	&asn_SPC_pdcch_MonitoringAnyOccasionsWithSpanGap_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_pdsch_SeparationWithGap_value2enum_27[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_pdsch_SeparationWithGap_enum2value_27[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_pdsch_SeparationWithGap_specs_27 = {
	asn_MAP_pdsch_SeparationWithGap_value2enum_27,	/* "tag" => N; sorted by tag */
	asn_MAP_pdsch_SeparationWithGap_enum2value_27,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pdsch_SeparationWithGap_tags_27[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pdsch_SeparationWithGap_27 = {
	"pdsch-SeparationWithGap",
	"pdsch-SeparationWithGap",
	&asn_OP_NativeEnumerated,
	asn_DEF_pdsch_SeparationWithGap_tags_27,
	sizeof(asn_DEF_pdsch_SeparationWithGap_tags_27)
		/sizeof(asn_DEF_pdsch_SeparationWithGap_tags_27[0]) - 1, /* 1 */
	asn_DEF_pdsch_SeparationWithGap_tags_27,	/* Same as above */
	sizeof(asn_DEF_pdsch_SeparationWithGap_tags_27)
		/sizeof(asn_DEF_pdsch_SeparationWithGap_tags_27[0]), /* 2 */
	{ &asn_OER_type_pdsch_SeparationWithGap_constr_27, &asn_PER_type_pdsch_SeparationWithGap_constr_27, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pdsch_SeparationWithGap_specs_27	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_pdsch_ProcessingType2_29[] = {
	{ ATF_POINTER, 3, offsetof(struct FeatureSetDownlink_v1540__pdsch_ProcessingType2, scs_15kHz),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProcessingParameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scs-15kHz"
		},
	{ ATF_POINTER, 2, offsetof(struct FeatureSetDownlink_v1540__pdsch_ProcessingType2, scs_30kHz),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProcessingParameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scs-30kHz"
		},
	{ ATF_POINTER, 1, offsetof(struct FeatureSetDownlink_v1540__pdsch_ProcessingType2, scs_60kHz),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProcessingParameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scs-60kHz"
		},
};
static const int asn_MAP_pdsch_ProcessingType2_oms_29[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_pdsch_ProcessingType2_tags_29[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_pdsch_ProcessingType2_tag2el_29[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* scs-15kHz */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* scs-30kHz */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* scs-60kHz */
};
static asn_SEQUENCE_specifics_t asn_SPC_pdsch_ProcessingType2_specs_29 = {
	sizeof(struct FeatureSetDownlink_v1540__pdsch_ProcessingType2),
	offsetof(struct FeatureSetDownlink_v1540__pdsch_ProcessingType2, _asn_ctx),
	asn_MAP_pdsch_ProcessingType2_tag2el_29,
	3,	/* Count of tags in the map */
	asn_MAP_pdsch_ProcessingType2_oms_29,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pdsch_ProcessingType2_29 = {
	"pdsch-ProcessingType2",
	"pdsch-ProcessingType2",
	&asn_OP_SEQUENCE,
	asn_DEF_pdsch_ProcessingType2_tags_29,
	sizeof(asn_DEF_pdsch_ProcessingType2_tags_29)
		/sizeof(asn_DEF_pdsch_ProcessingType2_tags_29[0]) - 1, /* 1 */
	asn_DEF_pdsch_ProcessingType2_tags_29,	/* Same as above */
	sizeof(asn_DEF_pdsch_ProcessingType2_tags_29)
		/sizeof(asn_DEF_pdsch_ProcessingType2_tags_29[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_pdsch_ProcessingType2_29,
	3,	/* Elements count */
	&asn_SPC_pdsch_ProcessingType2_specs_29	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_differentTB_PerSlot_SCS_30kHz_value2enum_34[] = {
	{ 0,	5,	"upto1" },
	{ 1,	5,	"upto2" },
	{ 2,	5,	"upto4" },
	{ 3,	5,	"upto7" }
};
static const unsigned int asn_MAP_differentTB_PerSlot_SCS_30kHz_enum2value_34[] = {
	0,	/* upto1(0) */
	1,	/* upto2(1) */
	2,	/* upto4(2) */
	3	/* upto7(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_differentTB_PerSlot_SCS_30kHz_specs_34 = {
	asn_MAP_differentTB_PerSlot_SCS_30kHz_value2enum_34,	/* "tag" => N; sorted by tag */
	asn_MAP_differentTB_PerSlot_SCS_30kHz_enum2value_34,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_differentTB_PerSlot_SCS_30kHz_tags_34[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_differentTB_PerSlot_SCS_30kHz_34 = {
	"differentTB-PerSlot-SCS-30kHz",
	"differentTB-PerSlot-SCS-30kHz",
	&asn_OP_NativeEnumerated,
	asn_DEF_differentTB_PerSlot_SCS_30kHz_tags_34,
	sizeof(asn_DEF_differentTB_PerSlot_SCS_30kHz_tags_34)
		/sizeof(asn_DEF_differentTB_PerSlot_SCS_30kHz_tags_34[0]) - 1, /* 1 */
	asn_DEF_differentTB_PerSlot_SCS_30kHz_tags_34,	/* Same as above */
	sizeof(asn_DEF_differentTB_PerSlot_SCS_30kHz_tags_34)
		/sizeof(asn_DEF_differentTB_PerSlot_SCS_30kHz_tags_34[0]), /* 2 */
	{ &asn_OER_type_differentTB_PerSlot_SCS_30kHz_constr_34, &asn_PER_type_differentTB_PerSlot_SCS_30kHz_constr_34, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_differentTB_PerSlot_SCS_30kHz_specs_34	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_pdsch_ProcessingType2_Limited_33[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FeatureSetDownlink_v1540__pdsch_ProcessingType2_Limited, differentTB_PerSlot_SCS_30kHz),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_differentTB_PerSlot_SCS_30kHz_34,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"differentTB-PerSlot-SCS-30kHz"
		},
};
static const ber_tlv_tag_t asn_DEF_pdsch_ProcessingType2_Limited_tags_33[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_pdsch_ProcessingType2_Limited_tag2el_33[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* differentTB-PerSlot-SCS-30kHz */
};
static asn_SEQUENCE_specifics_t asn_SPC_pdsch_ProcessingType2_Limited_specs_33 = {
	sizeof(struct FeatureSetDownlink_v1540__pdsch_ProcessingType2_Limited),
	offsetof(struct FeatureSetDownlink_v1540__pdsch_ProcessingType2_Limited, _asn_ctx),
	asn_MAP_pdsch_ProcessingType2_Limited_tag2el_33,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pdsch_ProcessingType2_Limited_33 = {
	"pdsch-ProcessingType2-Limited",
	"pdsch-ProcessingType2-Limited",
	&asn_OP_SEQUENCE,
	asn_DEF_pdsch_ProcessingType2_Limited_tags_33,
	sizeof(asn_DEF_pdsch_ProcessingType2_Limited_tags_33)
		/sizeof(asn_DEF_pdsch_ProcessingType2_Limited_tags_33[0]) - 1, /* 1 */
	asn_DEF_pdsch_ProcessingType2_Limited_tags_33,	/* Same as above */
	sizeof(asn_DEF_pdsch_ProcessingType2_Limited_tags_33)
		/sizeof(asn_DEF_pdsch_ProcessingType2_Limited_tags_33[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_pdsch_ProcessingType2_Limited_33,
	1,	/* Elements count */
	&asn_SPC_pdsch_ProcessingType2_Limited_specs_33	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_dl_MCS_TableAlt_DynamicIndication_value2enum_39[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_dl_MCS_TableAlt_DynamicIndication_enum2value_39[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_dl_MCS_TableAlt_DynamicIndication_specs_39 = {
	asn_MAP_dl_MCS_TableAlt_DynamicIndication_value2enum_39,	/* "tag" => N; sorted by tag */
	asn_MAP_dl_MCS_TableAlt_DynamicIndication_enum2value_39,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dl_MCS_TableAlt_DynamicIndication_tags_39[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_MCS_TableAlt_DynamicIndication_39 = {
	"dl-MCS-TableAlt-DynamicIndication",
	"dl-MCS-TableAlt-DynamicIndication",
	&asn_OP_NativeEnumerated,
	asn_DEF_dl_MCS_TableAlt_DynamicIndication_tags_39,
	sizeof(asn_DEF_dl_MCS_TableAlt_DynamicIndication_tags_39)
		/sizeof(asn_DEF_dl_MCS_TableAlt_DynamicIndication_tags_39[0]) - 1, /* 1 */
	asn_DEF_dl_MCS_TableAlt_DynamicIndication_tags_39,	/* Same as above */
	sizeof(asn_DEF_dl_MCS_TableAlt_DynamicIndication_tags_39)
		/sizeof(asn_DEF_dl_MCS_TableAlt_DynamicIndication_tags_39[0]), /* 2 */
	{ &asn_OER_type_dl_MCS_TableAlt_DynamicIndication_constr_39, &asn_PER_type_dl_MCS_TableAlt_DynamicIndication_constr_39, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dl_MCS_TableAlt_DynamicIndication_specs_39	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_FeatureSetDownlink_v1540_1[] = {
	{ ATF_POINTER, 9, offsetof(struct FeatureSetDownlink_v1540, oneFL_DMRS_TwoAdditionalDMRS_DL),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_oneFL_DMRS_TwoAdditionalDMRS_DL_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"oneFL-DMRS-TwoAdditionalDMRS-DL"
		},
	{ ATF_POINTER, 8, offsetof(struct FeatureSetDownlink_v1540, additionalDMRS_DL_Alt),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_additionalDMRS_DL_Alt_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalDMRS-DL-Alt"
		},
	{ ATF_POINTER, 7, offsetof(struct FeatureSetDownlink_v1540, twoFL_DMRS_TwoAdditionalDMRS_DL),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_twoFL_DMRS_TwoAdditionalDMRS_DL_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"twoFL-DMRS-TwoAdditionalDMRS-DL"
		},
	{ ATF_POINTER, 6, offsetof(struct FeatureSetDownlink_v1540, oneFL_DMRS_ThreeAdditionalDMRS_DL),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_oneFL_DMRS_ThreeAdditionalDMRS_DL_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"oneFL-DMRS-ThreeAdditionalDMRS-DL"
		},
	{ ATF_POINTER, 5, offsetof(struct FeatureSetDownlink_v1540, pdcch_MonitoringAnyOccasionsWithSpanGap),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_pdcch_MonitoringAnyOccasionsWithSpanGap_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcch-MonitoringAnyOccasionsWithSpanGap"
		},
	{ ATF_POINTER, 4, offsetof(struct FeatureSetDownlink_v1540, pdsch_SeparationWithGap),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pdsch_SeparationWithGap_27,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-SeparationWithGap"
		},
	{ ATF_POINTER, 3, offsetof(struct FeatureSetDownlink_v1540, pdsch_ProcessingType2),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_pdsch_ProcessingType2_29,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-ProcessingType2"
		},
	{ ATF_POINTER, 2, offsetof(struct FeatureSetDownlink_v1540, pdsch_ProcessingType2_Limited),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_pdsch_ProcessingType2_Limited_33,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-ProcessingType2-Limited"
		},
	{ ATF_POINTER, 1, offsetof(struct FeatureSetDownlink_v1540, dl_MCS_TableAlt_DynamicIndication),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dl_MCS_TableAlt_DynamicIndication_39,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-MCS-TableAlt-DynamicIndication"
		},
};
static const int asn_MAP_FeatureSetDownlink_v1540_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_FeatureSetDownlink_v1540_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FeatureSetDownlink_v1540_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* oneFL-DMRS-TwoAdditionalDMRS-DL */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* additionalDMRS-DL-Alt */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* twoFL-DMRS-TwoAdditionalDMRS-DL */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* oneFL-DMRS-ThreeAdditionalDMRS-DL */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* pdcch-MonitoringAnyOccasionsWithSpanGap */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* pdsch-SeparationWithGap */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* pdsch-ProcessingType2 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* pdsch-ProcessingType2-Limited */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* dl-MCS-TableAlt-DynamicIndication */
};
asn_SEQUENCE_specifics_t asn_SPC_FeatureSetDownlink_v1540_specs_1 = {
	sizeof(struct FeatureSetDownlink_v1540),
	offsetof(struct FeatureSetDownlink_v1540, _asn_ctx),
	asn_MAP_FeatureSetDownlink_v1540_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_FeatureSetDownlink_v1540_oms_1,	/* Optional members */
	9, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FeatureSetDownlink_v1540 = {
	"FeatureSetDownlink-v1540",
	"FeatureSetDownlink-v1540",
	&asn_OP_SEQUENCE,
	asn_DEF_FeatureSetDownlink_v1540_tags_1,
	sizeof(asn_DEF_FeatureSetDownlink_v1540_tags_1)
		/sizeof(asn_DEF_FeatureSetDownlink_v1540_tags_1[0]), /* 1 */
	asn_DEF_FeatureSetDownlink_v1540_tags_1,	/* Same as above */
	sizeof(asn_DEF_FeatureSetDownlink_v1540_tags_1)
		/sizeof(asn_DEF_FeatureSetDownlink_v1540_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_FeatureSetDownlink_v1540_1,
	9,	/* Elements count */
	&asn_SPC_FeatureSetDownlink_v1540_specs_1	/* Additional specs */
};

