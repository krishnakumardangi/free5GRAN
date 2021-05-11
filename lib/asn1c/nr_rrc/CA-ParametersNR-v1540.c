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

#include "CA-ParametersNR-v1540.h"

static int
memb_maxNumberSimultaneousNZP_CSI_RS_ActBWP_AllCC_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 64)) {
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
memb_totalNumberPortsSimultaneousNZP_CSI_RS_ActBWP_AllCC_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 256)) {
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
static int
memb_simultaneousSRS_AssocCSI_RS_AllCC_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 5 && value <= 32)) {
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
memb_simultaneousCSI_ReportsAllCC_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 5 && value <= 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_maxNumberSimultaneousNZP_CSI_RS_ActBWP_AllCC_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (1..64) */,
	-1};
static asn_per_constraints_t asn_PER_memb_maxNumberSimultaneousNZP_CSI_RS_ActBWP_AllCC_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (1..64) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_totalNumberPortsSimultaneousNZP_CSI_RS_ActBWP_AllCC_constr_5 CC_NOTUSED = {
	{ 2, 1 }	/* (2..256) */,
	-1};
static asn_per_constraints_t asn_PER_memb_totalNumberPortsSimultaneousNZP_CSI_RS_ActBWP_AllCC_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  2,  256 }	/* (2..256) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_dualPA_Architecture_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_dualPA_Architecture_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_simultaneousSRS_AssocCSI_RS_AllCC_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (5..32) */,
	-1};
static asn_per_constraints_t asn_PER_memb_simultaneousSRS_AssocCSI_RS_AllCC_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  5,  32 }	/* (5..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_simultaneousCSI_ReportsAllCC_constr_6 CC_NOTUSED = {
	{ 1, 1 }	/* (5..32) */,
	-1};
static asn_per_constraints_t asn_PER_memb_simultaneousCSI_ReportsAllCC_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  5,  32 }	/* (5..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_csi_RS_IM_ReceptionForFeedbackPerBandComb_3[] = {
	{ ATF_POINTER, 2, offsetof(struct CA_ParametersNR_v1540__csi_RS_IM_ReceptionForFeedbackPerBandComb, maxNumberSimultaneousNZP_CSI_RS_ActBWP_AllCC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_maxNumberSimultaneousNZP_CSI_RS_ActBWP_AllCC_constr_4, &asn_PER_memb_maxNumberSimultaneousNZP_CSI_RS_ActBWP_AllCC_constr_4,  memb_maxNumberSimultaneousNZP_CSI_RS_ActBWP_AllCC_constraint_3 },
		0, 0, /* No default value */
		"maxNumberSimultaneousNZP-CSI-RS-ActBWP-AllCC"
		},
	{ ATF_POINTER, 1, offsetof(struct CA_ParametersNR_v1540__csi_RS_IM_ReceptionForFeedbackPerBandComb, totalNumberPortsSimultaneousNZP_CSI_RS_ActBWP_AllCC),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_totalNumberPortsSimultaneousNZP_CSI_RS_ActBWP_AllCC_constr_5, &asn_PER_memb_totalNumberPortsSimultaneousNZP_CSI_RS_ActBWP_AllCC_constr_5,  memb_totalNumberPortsSimultaneousNZP_CSI_RS_ActBWP_AllCC_constraint_3 },
		0, 0, /* No default value */
		"totalNumberPortsSimultaneousNZP-CSI-RS-ActBWP-AllCC"
		},
};
static const int asn_MAP_csi_RS_IM_ReceptionForFeedbackPerBandComb_oms_3[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_csi_RS_IM_ReceptionForFeedbackPerBandComb_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_csi_RS_IM_ReceptionForFeedbackPerBandComb_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxNumberSimultaneousNZP-CSI-RS-ActBWP-AllCC */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* totalNumberPortsSimultaneousNZP-CSI-RS-ActBWP-AllCC */
};
static asn_SEQUENCE_specifics_t asn_SPC_csi_RS_IM_ReceptionForFeedbackPerBandComb_specs_3 = {
	sizeof(struct CA_ParametersNR_v1540__csi_RS_IM_ReceptionForFeedbackPerBandComb),
	offsetof(struct CA_ParametersNR_v1540__csi_RS_IM_ReceptionForFeedbackPerBandComb, _asn_ctx),
	asn_MAP_csi_RS_IM_ReceptionForFeedbackPerBandComb_tag2el_3,
	2,	/* Count of tags in the map */
	asn_MAP_csi_RS_IM_ReceptionForFeedbackPerBandComb_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_csi_RS_IM_ReceptionForFeedbackPerBandComb_3 = {
	"csi-RS-IM-ReceptionForFeedbackPerBandComb",
	"csi-RS-IM-ReceptionForFeedbackPerBandComb",
	&asn_OP_SEQUENCE,
	asn_DEF_csi_RS_IM_ReceptionForFeedbackPerBandComb_tags_3,
	sizeof(asn_DEF_csi_RS_IM_ReceptionForFeedbackPerBandComb_tags_3)
		/sizeof(asn_DEF_csi_RS_IM_ReceptionForFeedbackPerBandComb_tags_3[0]) - 1, /* 1 */
	asn_DEF_csi_RS_IM_ReceptionForFeedbackPerBandComb_tags_3,	/* Same as above */
	sizeof(asn_DEF_csi_RS_IM_ReceptionForFeedbackPerBandComb_tags_3)
		/sizeof(asn_DEF_csi_RS_IM_ReceptionForFeedbackPerBandComb_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_csi_RS_IM_ReceptionForFeedbackPerBandComb_3,
	2,	/* Elements count */
	&asn_SPC_csi_RS_IM_ReceptionForFeedbackPerBandComb_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_dualPA_Architecture_value2enum_7[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_dualPA_Architecture_enum2value_7[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_dualPA_Architecture_specs_7 = {
	asn_MAP_dualPA_Architecture_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_dualPA_Architecture_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dualPA_Architecture_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dualPA_Architecture_7 = {
	"dualPA-Architecture",
	"dualPA-Architecture",
	&asn_OP_NativeEnumerated,
	asn_DEF_dualPA_Architecture_tags_7,
	sizeof(asn_DEF_dualPA_Architecture_tags_7)
		/sizeof(asn_DEF_dualPA_Architecture_tags_7[0]) - 1, /* 1 */
	asn_DEF_dualPA_Architecture_tags_7,	/* Same as above */
	sizeof(asn_DEF_dualPA_Architecture_tags_7)
		/sizeof(asn_DEF_dualPA_Architecture_tags_7[0]), /* 2 */
	{ &asn_OER_type_dualPA_Architecture_constr_7, &asn_PER_type_dualPA_Architecture_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dualPA_Architecture_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CA_ParametersNR_v1540_1[] = {
	{ ATF_POINTER, 4, offsetof(struct CA_ParametersNR_v1540, simultaneousSRS_AssocCSI_RS_AllCC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_simultaneousSRS_AssocCSI_RS_AllCC_constr_2, &asn_PER_memb_simultaneousSRS_AssocCSI_RS_AllCC_constr_2,  memb_simultaneousSRS_AssocCSI_RS_AllCC_constraint_1 },
		0, 0, /* No default value */
		"simultaneousSRS-AssocCSI-RS-AllCC"
		},
	{ ATF_POINTER, 3, offsetof(struct CA_ParametersNR_v1540, csi_RS_IM_ReceptionForFeedbackPerBandComb),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_csi_RS_IM_ReceptionForFeedbackPerBandComb_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-RS-IM-ReceptionForFeedbackPerBandComb"
		},
	{ ATF_POINTER, 2, offsetof(struct CA_ParametersNR_v1540, simultaneousCSI_ReportsAllCC),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_simultaneousCSI_ReportsAllCC_constr_6, &asn_PER_memb_simultaneousCSI_ReportsAllCC_constr_6,  memb_simultaneousCSI_ReportsAllCC_constraint_1 },
		0, 0, /* No default value */
		"simultaneousCSI-ReportsAllCC"
		},
	{ ATF_POINTER, 1, offsetof(struct CA_ParametersNR_v1540, dualPA_Architecture),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dualPA_Architecture_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dualPA-Architecture"
		},
};
static const int asn_MAP_CA_ParametersNR_v1540_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_CA_ParametersNR_v1540_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CA_ParametersNR_v1540_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* simultaneousSRS-AssocCSI-RS-AllCC */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* csi-RS-IM-ReceptionForFeedbackPerBandComb */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* simultaneousCSI-ReportsAllCC */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* dualPA-Architecture */
};
asn_SEQUENCE_specifics_t asn_SPC_CA_ParametersNR_v1540_specs_1 = {
	sizeof(struct CA_ParametersNR_v1540),
	offsetof(struct CA_ParametersNR_v1540, _asn_ctx),
	asn_MAP_CA_ParametersNR_v1540_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_CA_ParametersNR_v1540_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CA_ParametersNR_v1540 = {
	"CA-ParametersNR-v1540",
	"CA-ParametersNR-v1540",
	&asn_OP_SEQUENCE,
	asn_DEF_CA_ParametersNR_v1540_tags_1,
	sizeof(asn_DEF_CA_ParametersNR_v1540_tags_1)
		/sizeof(asn_DEF_CA_ParametersNR_v1540_tags_1[0]), /* 1 */
	asn_DEF_CA_ParametersNR_v1540_tags_1,	/* Same as above */
	sizeof(asn_DEF_CA_ParametersNR_v1540_tags_1)
		/sizeof(asn_DEF_CA_ParametersNR_v1540_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CA_ParametersNR_v1540_1,
	4,	/* Elements count */
	&asn_SPC_CA_ParametersNR_v1540_specs_1	/* Additional specs */
};

