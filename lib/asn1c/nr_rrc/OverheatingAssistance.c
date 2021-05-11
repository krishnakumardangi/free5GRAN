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

#include "OverheatingAssistance.h"

static int
memb_reducedCCsDL_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
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
memb_reducedCCsUL_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_reducedCCsDL_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (0..31) */,
	-1};
static asn_per_constraints_t asn_PER_memb_reducedCCsDL_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_reducedCCsUL_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (0..31) */,
	-1};
static asn_per_constraints_t asn_PER_memb_reducedCCsUL_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_reducedMaxCCs_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OverheatingAssistance__reducedMaxCCs, reducedCCsDL),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_reducedCCsDL_constr_3, &asn_PER_memb_reducedCCsDL_constr_3,  memb_reducedCCsDL_constraint_2 },
		0, 0, /* No default value */
		"reducedCCsDL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OverheatingAssistance__reducedMaxCCs, reducedCCsUL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_reducedCCsUL_constr_4, &asn_PER_memb_reducedCCsUL_constr_4,  memb_reducedCCsUL_constraint_2 },
		0, 0, /* No default value */
		"reducedCCsUL"
		},
};
static const ber_tlv_tag_t asn_DEF_reducedMaxCCs_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_reducedMaxCCs_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* reducedCCsDL */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* reducedCCsUL */
};
static asn_SEQUENCE_specifics_t asn_SPC_reducedMaxCCs_specs_2 = {
	sizeof(struct OverheatingAssistance__reducedMaxCCs),
	offsetof(struct OverheatingAssistance__reducedMaxCCs, _asn_ctx),
	asn_MAP_reducedMaxCCs_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reducedMaxCCs_2 = {
	"reducedMaxCCs",
	"reducedMaxCCs",
	&asn_OP_SEQUENCE,
	asn_DEF_reducedMaxCCs_tags_2,
	sizeof(asn_DEF_reducedMaxCCs_tags_2)
		/sizeof(asn_DEF_reducedMaxCCs_tags_2[0]) - 1, /* 1 */
	asn_DEF_reducedMaxCCs_tags_2,	/* Same as above */
	sizeof(asn_DEF_reducedMaxCCs_tags_2)
		/sizeof(asn_DEF_reducedMaxCCs_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_reducedMaxCCs_2,
	2,	/* Elements count */
	&asn_SPC_reducedMaxCCs_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_reducedMaxBW_FR1_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OverheatingAssistance__reducedMaxBW_FR1, reducedBW_FR1_DL),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReducedAggregatedBandwidth,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reducedBW-FR1-DL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OverheatingAssistance__reducedMaxBW_FR1, reducedBW_FR1_UL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReducedAggregatedBandwidth,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reducedBW-FR1-UL"
		},
};
static const ber_tlv_tag_t asn_DEF_reducedMaxBW_FR1_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_reducedMaxBW_FR1_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* reducedBW-FR1-DL */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* reducedBW-FR1-UL */
};
static asn_SEQUENCE_specifics_t asn_SPC_reducedMaxBW_FR1_specs_5 = {
	sizeof(struct OverheatingAssistance__reducedMaxBW_FR1),
	offsetof(struct OverheatingAssistance__reducedMaxBW_FR1, _asn_ctx),
	asn_MAP_reducedMaxBW_FR1_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reducedMaxBW_FR1_5 = {
	"reducedMaxBW-FR1",
	"reducedMaxBW-FR1",
	&asn_OP_SEQUENCE,
	asn_DEF_reducedMaxBW_FR1_tags_5,
	sizeof(asn_DEF_reducedMaxBW_FR1_tags_5)
		/sizeof(asn_DEF_reducedMaxBW_FR1_tags_5[0]) - 1, /* 1 */
	asn_DEF_reducedMaxBW_FR1_tags_5,	/* Same as above */
	sizeof(asn_DEF_reducedMaxBW_FR1_tags_5)
		/sizeof(asn_DEF_reducedMaxBW_FR1_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_reducedMaxBW_FR1_5,
	2,	/* Elements count */
	&asn_SPC_reducedMaxBW_FR1_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_reducedMaxBW_FR2_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OverheatingAssistance__reducedMaxBW_FR2, reducedBW_FR2_DL),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReducedAggregatedBandwidth,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reducedBW-FR2-DL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OverheatingAssistance__reducedMaxBW_FR2, reducedBW_FR2_UL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReducedAggregatedBandwidth,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reducedBW-FR2-UL"
		},
};
static const ber_tlv_tag_t asn_DEF_reducedMaxBW_FR2_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_reducedMaxBW_FR2_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* reducedBW-FR2-DL */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* reducedBW-FR2-UL */
};
static asn_SEQUENCE_specifics_t asn_SPC_reducedMaxBW_FR2_specs_8 = {
	sizeof(struct OverheatingAssistance__reducedMaxBW_FR2),
	offsetof(struct OverheatingAssistance__reducedMaxBW_FR2, _asn_ctx),
	asn_MAP_reducedMaxBW_FR2_tag2el_8,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reducedMaxBW_FR2_8 = {
	"reducedMaxBW-FR2",
	"reducedMaxBW-FR2",
	&asn_OP_SEQUENCE,
	asn_DEF_reducedMaxBW_FR2_tags_8,
	sizeof(asn_DEF_reducedMaxBW_FR2_tags_8)
		/sizeof(asn_DEF_reducedMaxBW_FR2_tags_8[0]) - 1, /* 1 */
	asn_DEF_reducedMaxBW_FR2_tags_8,	/* Same as above */
	sizeof(asn_DEF_reducedMaxBW_FR2_tags_8)
		/sizeof(asn_DEF_reducedMaxBW_FR2_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_reducedMaxBW_FR2_8,
	2,	/* Elements count */
	&asn_SPC_reducedMaxBW_FR2_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_reducedMaxMIMO_LayersFR1_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OverheatingAssistance__reducedMaxMIMO_LayersFR1, reducedMIMO_LayersFR1_DL),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MIMO_LayersDL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reducedMIMO-LayersFR1-DL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OverheatingAssistance__reducedMaxMIMO_LayersFR1, reducedMIMO_LayersFR1_UL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MIMO_LayersUL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reducedMIMO-LayersFR1-UL"
		},
};
static const ber_tlv_tag_t asn_DEF_reducedMaxMIMO_LayersFR1_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_reducedMaxMIMO_LayersFR1_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* reducedMIMO-LayersFR1-DL */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* reducedMIMO-LayersFR1-UL */
};
static asn_SEQUENCE_specifics_t asn_SPC_reducedMaxMIMO_LayersFR1_specs_11 = {
	sizeof(struct OverheatingAssistance__reducedMaxMIMO_LayersFR1),
	offsetof(struct OverheatingAssistance__reducedMaxMIMO_LayersFR1, _asn_ctx),
	asn_MAP_reducedMaxMIMO_LayersFR1_tag2el_11,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reducedMaxMIMO_LayersFR1_11 = {
	"reducedMaxMIMO-LayersFR1",
	"reducedMaxMIMO-LayersFR1",
	&asn_OP_SEQUENCE,
	asn_DEF_reducedMaxMIMO_LayersFR1_tags_11,
	sizeof(asn_DEF_reducedMaxMIMO_LayersFR1_tags_11)
		/sizeof(asn_DEF_reducedMaxMIMO_LayersFR1_tags_11[0]) - 1, /* 1 */
	asn_DEF_reducedMaxMIMO_LayersFR1_tags_11,	/* Same as above */
	sizeof(asn_DEF_reducedMaxMIMO_LayersFR1_tags_11)
		/sizeof(asn_DEF_reducedMaxMIMO_LayersFR1_tags_11[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_reducedMaxMIMO_LayersFR1_11,
	2,	/* Elements count */
	&asn_SPC_reducedMaxMIMO_LayersFR1_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_reducedMaxMIMO_LayersFR2_14[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OverheatingAssistance__reducedMaxMIMO_LayersFR2, reducedMIMO_LayersFR2_DL),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MIMO_LayersDL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reducedMIMO-LayersFR2-DL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OverheatingAssistance__reducedMaxMIMO_LayersFR2, reducedMIMO_LayersFR2_UL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MIMO_LayersUL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reducedMIMO-LayersFR2-UL"
		},
};
static const ber_tlv_tag_t asn_DEF_reducedMaxMIMO_LayersFR2_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_reducedMaxMIMO_LayersFR2_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* reducedMIMO-LayersFR2-DL */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* reducedMIMO-LayersFR2-UL */
};
static asn_SEQUENCE_specifics_t asn_SPC_reducedMaxMIMO_LayersFR2_specs_14 = {
	sizeof(struct OverheatingAssistance__reducedMaxMIMO_LayersFR2),
	offsetof(struct OverheatingAssistance__reducedMaxMIMO_LayersFR2, _asn_ctx),
	asn_MAP_reducedMaxMIMO_LayersFR2_tag2el_14,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_reducedMaxMIMO_LayersFR2_14 = {
	"reducedMaxMIMO-LayersFR2",
	"reducedMaxMIMO-LayersFR2",
	&asn_OP_SEQUENCE,
	asn_DEF_reducedMaxMIMO_LayersFR2_tags_14,
	sizeof(asn_DEF_reducedMaxMIMO_LayersFR2_tags_14)
		/sizeof(asn_DEF_reducedMaxMIMO_LayersFR2_tags_14[0]) - 1, /* 1 */
	asn_DEF_reducedMaxMIMO_LayersFR2_tags_14,	/* Same as above */
	sizeof(asn_DEF_reducedMaxMIMO_LayersFR2_tags_14)
		/sizeof(asn_DEF_reducedMaxMIMO_LayersFR2_tags_14[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_reducedMaxMIMO_LayersFR2_14,
	2,	/* Elements count */
	&asn_SPC_reducedMaxMIMO_LayersFR2_specs_14	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_OverheatingAssistance_1[] = {
	{ ATF_POINTER, 5, offsetof(struct OverheatingAssistance, reducedMaxCCs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_reducedMaxCCs_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reducedMaxCCs"
		},
	{ ATF_POINTER, 4, offsetof(struct OverheatingAssistance, reducedMaxBW_FR1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_reducedMaxBW_FR1_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reducedMaxBW-FR1"
		},
	{ ATF_POINTER, 3, offsetof(struct OverheatingAssistance, reducedMaxBW_FR2),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_reducedMaxBW_FR2_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reducedMaxBW-FR2"
		},
	{ ATF_POINTER, 2, offsetof(struct OverheatingAssistance, reducedMaxMIMO_LayersFR1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_reducedMaxMIMO_LayersFR1_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reducedMaxMIMO-LayersFR1"
		},
	{ ATF_POINTER, 1, offsetof(struct OverheatingAssistance, reducedMaxMIMO_LayersFR2),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_reducedMaxMIMO_LayersFR2_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reducedMaxMIMO-LayersFR2"
		},
};
static const int asn_MAP_OverheatingAssistance_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_OverheatingAssistance_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_OverheatingAssistance_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* reducedMaxCCs */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* reducedMaxBW-FR1 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* reducedMaxBW-FR2 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* reducedMaxMIMO-LayersFR1 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* reducedMaxMIMO-LayersFR2 */
};
asn_SEQUENCE_specifics_t asn_SPC_OverheatingAssistance_specs_1 = {
	sizeof(struct OverheatingAssistance),
	offsetof(struct OverheatingAssistance, _asn_ctx),
	asn_MAP_OverheatingAssistance_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_OverheatingAssistance_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_OverheatingAssistance = {
	"OverheatingAssistance",
	"OverheatingAssistance",
	&asn_OP_SEQUENCE,
	asn_DEF_OverheatingAssistance_tags_1,
	sizeof(asn_DEF_OverheatingAssistance_tags_1)
		/sizeof(asn_DEF_OverheatingAssistance_tags_1[0]), /* 1 */
	asn_DEF_OverheatingAssistance_tags_1,	/* Same as above */
	sizeof(asn_DEF_OverheatingAssistance_tags_1)
		/sizeof(asn_DEF_OverheatingAssistance_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_OverheatingAssistance_1,
	5,	/* Elements count */
	&asn_SPC_OverheatingAssistance_specs_1	/* Additional specs */
};

