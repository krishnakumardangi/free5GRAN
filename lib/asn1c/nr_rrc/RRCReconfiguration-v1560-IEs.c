/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "RRCReconfiguration-v1560-IEs.h"

static int
memb_radioBearerConfig2_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_oer_constraints_t asn_OER_type_mrdc_SecondaryCellGroupConfig_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_mrdc_SecondaryCellGroupConfig_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_radioBearerConfig2_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_memb_radioBearerConfig2_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_mrdc_SecondaryCellGroupConfig_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCReconfiguration_v1560_IEs__mrdc_SecondaryCellGroupConfig, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCReconfiguration_v1560_IEs__mrdc_SecondaryCellGroupConfig, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MRDC_SecondaryCellGroupConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_mrdc_SecondaryCellGroupConfig_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_mrdc_SecondaryCellGroupConfig_specs_2 = {
	sizeof(struct RRCReconfiguration_v1560_IEs__mrdc_SecondaryCellGroupConfig),
	offsetof(struct RRCReconfiguration_v1560_IEs__mrdc_SecondaryCellGroupConfig, _asn_ctx),
	offsetof(struct RRCReconfiguration_v1560_IEs__mrdc_SecondaryCellGroupConfig, present),
	sizeof(((struct RRCReconfiguration_v1560_IEs__mrdc_SecondaryCellGroupConfig *)0)->present),
	asn_MAP_mrdc_SecondaryCellGroupConfig_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mrdc_SecondaryCellGroupConfig_2 = {
	"mrdc-SecondaryCellGroupConfig",
	"mrdc-SecondaryCellGroupConfig",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_mrdc_SecondaryCellGroupConfig_constr_2, &asn_PER_type_mrdc_SecondaryCellGroupConfig_constr_2, CHOICE_constraint },
	asn_MBR_mrdc_SecondaryCellGroupConfig_2,
	2,	/* Elements count */
	&asn_SPC_mrdc_SecondaryCellGroupConfig_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRCReconfiguration_v1560_IEs_1[] = {
	{ ATF_POINTER, 4, offsetof(struct RRCReconfiguration_v1560_IEs, mrdc_SecondaryCellGroupConfig),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_mrdc_SecondaryCellGroupConfig_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mrdc-SecondaryCellGroupConfig"
		},
	{ ATF_POINTER, 3, offsetof(struct RRCReconfiguration_v1560_IEs, radioBearerConfig2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_radioBearerConfig2_constr_5, &asn_PER_memb_radioBearerConfig2_constr_5,  memb_radioBearerConfig2_constraint_1 },
		0, 0, /* No default value */
		"radioBearerConfig2"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCReconfiguration_v1560_IEs, sk_Counter),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SK_Counter,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sk-Counter"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCReconfiguration_v1560_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCReconfiguration_v1610_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_RRCReconfiguration_v1560_IEs_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_RRCReconfiguration_v1560_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCReconfiguration_v1560_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mrdc-SecondaryCellGroupConfig */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* radioBearerConfig2 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sk-Counter */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCReconfiguration_v1560_IEs_specs_1 = {
	sizeof(struct RRCReconfiguration_v1560_IEs),
	offsetof(struct RRCReconfiguration_v1560_IEs, _asn_ctx),
	asn_MAP_RRCReconfiguration_v1560_IEs_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_RRCReconfiguration_v1560_IEs_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCReconfiguration_v1560_IEs = {
	"RRCReconfiguration-v1560-IEs",
	"RRCReconfiguration-v1560-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCReconfiguration_v1560_IEs_tags_1,
	sizeof(asn_DEF_RRCReconfiguration_v1560_IEs_tags_1)
		/sizeof(asn_DEF_RRCReconfiguration_v1560_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCReconfiguration_v1560_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCReconfiguration_v1560_IEs_tags_1)
		/sizeof(asn_DEF_RRCReconfiguration_v1560_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCReconfiguration_v1560_IEs_1,
	4,	/* Elements count */
	&asn_SPC_RRCReconfiguration_v1560_IEs_specs_1	/* Additional specs */
};
