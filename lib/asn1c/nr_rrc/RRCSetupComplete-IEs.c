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

#include "RRCSetupComplete-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_ng_5G_S_TMSI_Part2_constraint_10(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 9)) {
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
memb_selectedPLMN_Identity_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 12)) {
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
memb_s_NSSAI_List_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_guami_Type_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_guami_Type_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_s_NSSAI_List_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_type_s_NSSAI_List_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ng_5G_S_TMSI_Part2_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	9	/* (SIZE(9..9)) */};
static asn_per_constraints_t asn_PER_memb_ng_5G_S_TMSI_Part2_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  9,  9 }	/* (SIZE(9..9)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ng_5G_S_TMSI_Value_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ng_5G_S_TMSI_Value_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_selectedPLMN_Identity_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (1..12) */,
	-1};
static asn_per_constraints_t asn_PER_memb_selectedPLMN_Identity_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (1..12) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_s_NSSAI_List_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_memb_s_NSSAI_List_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_guami_Type_value2enum_4[] = {
	{ 0,	6,	"native" },
	{ 1,	6,	"mapped" }
};
static const unsigned int asn_MAP_guami_Type_enum2value_4[] = {
	1,	/* mapped(1) */
	0	/* native(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_guami_Type_specs_4 = {
	asn_MAP_guami_Type_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_guami_Type_enum2value_4,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_guami_Type_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_guami_Type_4 = {
	"guami-Type",
	"guami-Type",
	&asn_OP_NativeEnumerated,
	asn_DEF_guami_Type_tags_4,
	sizeof(asn_DEF_guami_Type_tags_4)
		/sizeof(asn_DEF_guami_Type_tags_4[0]) - 1, /* 1 */
	asn_DEF_guami_Type_tags_4,	/* Same as above */
	sizeof(asn_DEF_guami_Type_tags_4)
		/sizeof(asn_DEF_guami_Type_tags_4[0]), /* 2 */
	{ &asn_OER_type_guami_Type_constr_4, &asn_PER_type_guami_Type_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_guami_Type_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_s_NSSAI_List_7[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_S_NSSAI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_s_NSSAI_List_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_s_NSSAI_List_specs_7 = {
	sizeof(struct RRCSetupComplete_IEs__s_NSSAI_List),
	offsetof(struct RRCSetupComplete_IEs__s_NSSAI_List, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_s_NSSAI_List_7 = {
	"s-NSSAI-List",
	"s-NSSAI-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_s_NSSAI_List_tags_7,
	sizeof(asn_DEF_s_NSSAI_List_tags_7)
		/sizeof(asn_DEF_s_NSSAI_List_tags_7[0]) - 1, /* 1 */
	asn_DEF_s_NSSAI_List_tags_7,	/* Same as above */
	sizeof(asn_DEF_s_NSSAI_List_tags_7)
		/sizeof(asn_DEF_s_NSSAI_List_tags_7[0]), /* 2 */
	{ &asn_OER_type_s_NSSAI_List_constr_7, &asn_PER_type_s_NSSAI_List_constr_7, SEQUENCE_OF_constraint },
	asn_MBR_s_NSSAI_List_7,
	1,	/* Single element */
	&asn_SPC_s_NSSAI_List_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ng_5G_S_TMSI_Value_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCSetupComplete_IEs__ng_5G_S_TMSI_Value, choice.ng_5G_S_TMSI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NG_5G_S_TMSI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ng-5G-S-TMSI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCSetupComplete_IEs__ng_5G_S_TMSI_Value, choice.ng_5G_S_TMSI_Part2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_ng_5G_S_TMSI_Part2_constr_12, &asn_PER_memb_ng_5G_S_TMSI_Part2_constr_12,  memb_ng_5G_S_TMSI_Part2_constraint_10 },
		0, 0, /* No default value */
		"ng-5G-S-TMSI-Part2"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ng_5G_S_TMSI_Value_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ng-5G-S-TMSI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ng-5G-S-TMSI-Part2 */
};
static asn_CHOICE_specifics_t asn_SPC_ng_5G_S_TMSI_Value_specs_10 = {
	sizeof(struct RRCSetupComplete_IEs__ng_5G_S_TMSI_Value),
	offsetof(struct RRCSetupComplete_IEs__ng_5G_S_TMSI_Value, _asn_ctx),
	offsetof(struct RRCSetupComplete_IEs__ng_5G_S_TMSI_Value, present),
	sizeof(((struct RRCSetupComplete_IEs__ng_5G_S_TMSI_Value *)0)->present),
	asn_MAP_ng_5G_S_TMSI_Value_tag2el_10,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ng_5G_S_TMSI_Value_10 = {
	"ng-5G-S-TMSI-Value",
	"ng-5G-S-TMSI-Value",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ng_5G_S_TMSI_Value_constr_10, &asn_PER_type_ng_5G_S_TMSI_Value_constr_10, CHOICE_constraint },
	asn_MBR_ng_5G_S_TMSI_Value_10,
	2,	/* Elements count */
	&asn_SPC_ng_5G_S_TMSI_Value_specs_10	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_14 = {
	sizeof(struct RRCSetupComplete_IEs__nonCriticalExtension),
	offsetof(struct RRCSetupComplete_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_14 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_14,
	sizeof(asn_DEF_nonCriticalExtension_tags_14)
		/sizeof(asn_DEF_nonCriticalExtension_tags_14[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_14,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_14)
		/sizeof(asn_DEF_nonCriticalExtension_tags_14[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_14	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRCSetupComplete_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCSetupComplete_IEs, selectedPLMN_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_selectedPLMN_Identity_constr_2, &asn_PER_memb_selectedPLMN_Identity_constr_2,  memb_selectedPLMN_Identity_constraint_1 },
		0, 0, /* No default value */
		"selectedPLMN-Identity"
		},
	{ ATF_POINTER, 3, offsetof(struct RRCSetupComplete_IEs, registeredAMF),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RegisteredAMF,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"registeredAMF"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCSetupComplete_IEs, guami_Type),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_guami_Type_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"guami-Type"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCSetupComplete_IEs, s_NSSAI_List),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_s_NSSAI_List_7,
		0,
		{ &asn_OER_memb_s_NSSAI_List_constr_7, &asn_PER_memb_s_NSSAI_List_constr_7,  memb_s_NSSAI_List_constraint_1 },
		0, 0, /* No default value */
		"s-NSSAI-List"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCSetupComplete_IEs, dedicatedNAS_Message),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DedicatedNAS_Message,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dedicatedNAS-Message"
		},
	{ ATF_POINTER, 3, offsetof(struct RRCSetupComplete_IEs, ng_5G_S_TMSI_Value),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ng_5G_S_TMSI_Value_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ng-5G-S-TMSI-Value"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCSetupComplete_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCSetupComplete_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_RRCSetupComplete_IEs_oms_1[] = { 1, 2, 3, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_RRCSetupComplete_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCSetupComplete_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* selectedPLMN-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* registeredAMF */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* guami-Type */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* s-NSSAI-List */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* dedicatedNAS-Message */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ng-5G-S-TMSI-Value */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCSetupComplete_IEs_specs_1 = {
	sizeof(struct RRCSetupComplete_IEs),
	offsetof(struct RRCSetupComplete_IEs, _asn_ctx),
	asn_MAP_RRCSetupComplete_IEs_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_RRCSetupComplete_IEs_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCSetupComplete_IEs = {
	"RRCSetupComplete-IEs",
	"RRCSetupComplete-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCSetupComplete_IEs_tags_1,
	sizeof(asn_DEF_RRCSetupComplete_IEs_tags_1)
		/sizeof(asn_DEF_RRCSetupComplete_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCSetupComplete_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCSetupComplete_IEs_tags_1)
		/sizeof(asn_DEF_RRCSetupComplete_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCSetupComplete_IEs_1,
	8,	/* Elements count */
	&asn_SPC_RRCSetupComplete_IEs_specs_1	/* Additional specs */
};

