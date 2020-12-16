/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "LocationMeasurementInfo.h"

static asn_oer_constraints_t asn_OER_type_LocationMeasurementInfo_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_LocationMeasurementInfo_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LocationMeasurementInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LocationMeasurementInfo, choice.eutra_RSTD),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRA_RSTD_InfoList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutra-RSTD"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LocationMeasurementInfo, choice.eutra_FineTimingDetection),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutra-FineTimingDetection"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LocationMeasurementInfo, choice.nr_PRS_Measurement_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_PRS_MeasurementInfoList_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nr-PRS-Measurement-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LocationMeasurementInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eutra-RSTD */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* eutra-FineTimingDetection */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nr-PRS-Measurement-r16 */
};
asn_CHOICE_specifics_t asn_SPC_LocationMeasurementInfo_specs_1 = {
	sizeof(struct LocationMeasurementInfo),
	offsetof(struct LocationMeasurementInfo, _asn_ctx),
	offsetof(struct LocationMeasurementInfo, present),
	sizeof(((struct LocationMeasurementInfo *)0)->present),
	asn_MAP_LocationMeasurementInfo_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LocationMeasurementInfo = {
	"LocationMeasurementInfo",
	"LocationMeasurementInfo",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_LocationMeasurementInfo_constr_1, &asn_PER_type_LocationMeasurementInfo_constr_1, CHOICE_constraint },
	asn_MBR_LocationMeasurementInfo_1,
	3,	/* Elements count */
	&asn_SPC_LocationMeasurementInfo_specs_1	/* Additional specs */
};
