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

#include "CSI-RS-ResourceMapping.h"

static int
memb_row1_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 4)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_row2_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 12)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_row4_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_other_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 6)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

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
static int
memb_firstOFDMSymbolInTimeDomain_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 13)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_firstOFDMSymbolInTimeDomain2_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 12)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_row1_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	4	/* (SIZE(4..4)) */};
static asn_per_constraints_t asn_PER_memb_row1_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_row2_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	12	/* (SIZE(12..12)) */};
static asn_per_constraints_t asn_PER_memb_row2_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  12,  12 }	/* (SIZE(12..12)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_row4_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	3	/* (SIZE(3..3)) */};
static asn_per_constraints_t asn_PER_memb_row4_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  3,  3 }	/* (SIZE(3..3)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_other_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	6	/* (SIZE(6..6)) */};
static asn_per_constraints_t asn_PER_memb_other_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  6,  6 }	/* (SIZE(6..6)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_frequencyDomainAllocation_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_frequencyDomainAllocation_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_nrofPorts_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_nrofPorts_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_cdm_Type_constr_18 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_cdm_Type_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_dot5_constr_24 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_dot5_constr_24 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_density_constr_23 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_density_constr_23 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_firstOFDMSymbolInTimeDomain_constr_16 CC_NOTUSED = {
	{ 1, 1 }	/* (0..13) */,
	-1};
static asn_per_constraints_t asn_PER_memb_firstOFDMSymbolInTimeDomain_constr_16 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  13 }	/* (0..13) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_firstOFDMSymbolInTimeDomain2_constr_17 CC_NOTUSED = {
	{ 1, 1 }	/* (2..12) */,
	-1};
static asn_per_constraints_t asn_PER_memb_firstOFDMSymbolInTimeDomain2_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  2,  12 }	/* (2..12) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_frequencyDomainAllocation_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_ResourceMapping__frequencyDomainAllocation, choice.row1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_row1_constr_3, &asn_PER_memb_row1_constr_3,  memb_row1_constraint_2 },
		0, 0, /* No default value */
		"row1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_ResourceMapping__frequencyDomainAllocation, choice.row2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_row2_constr_4, &asn_PER_memb_row2_constr_4,  memb_row2_constraint_2 },
		0, 0, /* No default value */
		"row2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_ResourceMapping__frequencyDomainAllocation, choice.row4),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_row4_constr_5, &asn_PER_memb_row4_constr_5,  memb_row4_constraint_2 },
		0, 0, /* No default value */
		"row4"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_ResourceMapping__frequencyDomainAllocation, choice.other),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_other_constr_6, &asn_PER_memb_other_constr_6,  memb_other_constraint_2 },
		0, 0, /* No default value */
		"other"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_frequencyDomainAllocation_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* row1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* row2 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* row4 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* other */
};
static asn_CHOICE_specifics_t asn_SPC_frequencyDomainAllocation_specs_2 = {
	sizeof(struct CSI_RS_ResourceMapping__frequencyDomainAllocation),
	offsetof(struct CSI_RS_ResourceMapping__frequencyDomainAllocation, _asn_ctx),
	offsetof(struct CSI_RS_ResourceMapping__frequencyDomainAllocation, present),
	sizeof(((struct CSI_RS_ResourceMapping__frequencyDomainAllocation *)0)->present),
	asn_MAP_frequencyDomainAllocation_tag2el_2,
	4,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_frequencyDomainAllocation_2 = {
	"frequencyDomainAllocation",
	"frequencyDomainAllocation",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_frequencyDomainAllocation_constr_2, &asn_PER_type_frequencyDomainAllocation_constr_2, CHOICE_constraint },
	asn_MBR_frequencyDomainAllocation_2,
	4,	/* Elements count */
	&asn_SPC_frequencyDomainAllocation_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_nrofPorts_value2enum_7[] = {
	{ 0,	2,	"p1" },
	{ 1,	2,	"p2" },
	{ 2,	2,	"p4" },
	{ 3,	2,	"p8" },
	{ 4,	3,	"p12" },
	{ 5,	3,	"p16" },
	{ 6,	3,	"p24" },
	{ 7,	3,	"p32" }
};
static const unsigned int asn_MAP_nrofPorts_enum2value_7[] = {
	0,	/* p1(0) */
	4,	/* p12(4) */
	5,	/* p16(5) */
	1,	/* p2(1) */
	6,	/* p24(6) */
	7,	/* p32(7) */
	2,	/* p4(2) */
	3	/* p8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_nrofPorts_specs_7 = {
	asn_MAP_nrofPorts_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_nrofPorts_enum2value_7,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_nrofPorts_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nrofPorts_7 = {
	"nrofPorts",
	"nrofPorts",
	&asn_OP_NativeEnumerated,
	asn_DEF_nrofPorts_tags_7,
	sizeof(asn_DEF_nrofPorts_tags_7)
		/sizeof(asn_DEF_nrofPorts_tags_7[0]) - 1, /* 1 */
	asn_DEF_nrofPorts_tags_7,	/* Same as above */
	sizeof(asn_DEF_nrofPorts_tags_7)
		/sizeof(asn_DEF_nrofPorts_tags_7[0]), /* 2 */
	{ &asn_OER_type_nrofPorts_constr_7, &asn_PER_type_nrofPorts_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_nrofPorts_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_cdm_Type_value2enum_18[] = {
	{ 0,	5,	"noCDM" },
	{ 1,	7,	"fd-CDM2" },
	{ 2,	12,	"cdm4-FD2-TD2" },
	{ 3,	12,	"cdm8-FD2-TD4" }
};
static const unsigned int asn_MAP_cdm_Type_enum2value_18[] = {
	2,	/* cdm4-FD2-TD2(2) */
	3,	/* cdm8-FD2-TD4(3) */
	1,	/* fd-CDM2(1) */
	0	/* noCDM(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_cdm_Type_specs_18 = {
	asn_MAP_cdm_Type_value2enum_18,	/* "tag" => N; sorted by tag */
	asn_MAP_cdm_Type_enum2value_18,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cdm_Type_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cdm_Type_18 = {
	"cdm-Type",
	"cdm-Type",
	&asn_OP_NativeEnumerated,
	asn_DEF_cdm_Type_tags_18,
	sizeof(asn_DEF_cdm_Type_tags_18)
		/sizeof(asn_DEF_cdm_Type_tags_18[0]) - 1, /* 1 */
	asn_DEF_cdm_Type_tags_18,	/* Same as above */
	sizeof(asn_DEF_cdm_Type_tags_18)
		/sizeof(asn_DEF_cdm_Type_tags_18[0]), /* 2 */
	{ &asn_OER_type_cdm_Type_constr_18, &asn_PER_type_cdm_Type_constr_18, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cdm_Type_specs_18	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_dot5_value2enum_24[] = {
	{ 0,	8,	"evenPRBs" },
	{ 1,	7,	"oddPRBs" }
};
static const unsigned int asn_MAP_dot5_enum2value_24[] = {
	0,	/* evenPRBs(0) */
	1	/* oddPRBs(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_dot5_specs_24 = {
	asn_MAP_dot5_value2enum_24,	/* "tag" => N; sorted by tag */
	asn_MAP_dot5_enum2value_24,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dot5_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dot5_24 = {
	"dot5",
	"dot5",
	&asn_OP_NativeEnumerated,
	asn_DEF_dot5_tags_24,
	sizeof(asn_DEF_dot5_tags_24)
		/sizeof(asn_DEF_dot5_tags_24[0]) - 1, /* 1 */
	asn_DEF_dot5_tags_24,	/* Same as above */
	sizeof(asn_DEF_dot5_tags_24)
		/sizeof(asn_DEF_dot5_tags_24[0]), /* 2 */
	{ &asn_OER_type_dot5_constr_24, &asn_PER_type_dot5_constr_24, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dot5_specs_24	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_density_23[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_ResourceMapping__density, choice.dot5),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dot5_24,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dot5"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_ResourceMapping__density, choice.one),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"one"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_ResourceMapping__density, choice.three),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"three"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_ResourceMapping__density, choice.spare),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_density_tag2el_23[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dot5 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* one */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* three */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* spare */
};
static asn_CHOICE_specifics_t asn_SPC_density_specs_23 = {
	sizeof(struct CSI_RS_ResourceMapping__density),
	offsetof(struct CSI_RS_ResourceMapping__density, _asn_ctx),
	offsetof(struct CSI_RS_ResourceMapping__density, present),
	sizeof(((struct CSI_RS_ResourceMapping__density *)0)->present),
	asn_MAP_density_tag2el_23,
	4,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_density_23 = {
	"density",
	"density",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_density_constr_23, &asn_PER_type_density_constr_23, CHOICE_constraint },
	asn_MBR_density_23,
	4,	/* Elements count */
	&asn_SPC_density_specs_23	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CSI_RS_ResourceMapping_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_ResourceMapping, frequencyDomainAllocation),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_frequencyDomainAllocation_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"frequencyDomainAllocation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_ResourceMapping, nrofPorts),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_nrofPorts_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nrofPorts"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_ResourceMapping, firstOFDMSymbolInTimeDomain),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_firstOFDMSymbolInTimeDomain_constr_16, &asn_PER_memb_firstOFDMSymbolInTimeDomain_constr_16,  memb_firstOFDMSymbolInTimeDomain_constraint_1 },
		0, 0, /* No default value */
		"firstOFDMSymbolInTimeDomain"
		},
	{ ATF_POINTER, 1, offsetof(struct CSI_RS_ResourceMapping, firstOFDMSymbolInTimeDomain2),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_firstOFDMSymbolInTimeDomain2_constr_17, &asn_PER_memb_firstOFDMSymbolInTimeDomain2_constr_17,  memb_firstOFDMSymbolInTimeDomain2_constraint_1 },
		0, 0, /* No default value */
		"firstOFDMSymbolInTimeDomain2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_ResourceMapping, cdm_Type),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cdm_Type_18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cdm-Type"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_ResourceMapping, density),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_density_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"density"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_RS_ResourceMapping, freqBand),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_FrequencyOccupation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freqBand"
		},
};
static const int asn_MAP_CSI_RS_ResourceMapping_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_CSI_RS_ResourceMapping_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CSI_RS_ResourceMapping_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* frequencyDomainAllocation */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nrofPorts */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* firstOFDMSymbolInTimeDomain */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* firstOFDMSymbolInTimeDomain2 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* cdm-Type */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* density */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* freqBand */
};
asn_SEQUENCE_specifics_t asn_SPC_CSI_RS_ResourceMapping_specs_1 = {
	sizeof(struct CSI_RS_ResourceMapping),
	offsetof(struct CSI_RS_ResourceMapping, _asn_ctx),
	asn_MAP_CSI_RS_ResourceMapping_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_CSI_RS_ResourceMapping_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CSI_RS_ResourceMapping = {
	"CSI-RS-ResourceMapping",
	"CSI-RS-ResourceMapping",
	&asn_OP_SEQUENCE,
	asn_DEF_CSI_RS_ResourceMapping_tags_1,
	sizeof(asn_DEF_CSI_RS_ResourceMapping_tags_1)
		/sizeof(asn_DEF_CSI_RS_ResourceMapping_tags_1[0]), /* 1 */
	asn_DEF_CSI_RS_ResourceMapping_tags_1,	/* Same as above */
	sizeof(asn_DEF_CSI_RS_ResourceMapping_tags_1)
		/sizeof(asn_DEF_CSI_RS_ResourceMapping_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CSI_RS_ResourceMapping_1,
	7,	/* Elements count */
	&asn_SPC_CSI_RS_ResourceMapping_specs_1	/* Additional specs */
};

