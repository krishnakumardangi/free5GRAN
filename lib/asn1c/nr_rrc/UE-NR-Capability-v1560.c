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

#include "UE-NR-Capability-v1560.h"

static int
memb_receivedFilters_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_oer_constraints_t asn_OER_memb_receivedFilters_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_memb_receivedFilters_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_4 = {
	sizeof(struct UE_NR_Capability_v1560__nonCriticalExtension),
	offsetof(struct UE_NR_Capability_v1560__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_4 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_4,
	sizeof(asn_DEF_nonCriticalExtension_tags_4)
		/sizeof(asn_DEF_nonCriticalExtension_tags_4[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_4,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_4)
		/sizeof(asn_DEF_nonCriticalExtension_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UE_NR_Capability_v1560_1[] = {
	{ ATF_POINTER, 3, offsetof(struct UE_NR_Capability_v1560, nrdc_Parameters),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRDC_Parameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nrdc-Parameters"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_NR_Capability_v1560, receivedFilters),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_receivedFilters_constr_3, &asn_PER_memb_receivedFilters_constr_3,  memb_receivedFilters_constraint_1 },
		0, 0, /* No default value */
		"receivedFilters"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_NR_Capability_v1560, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UE_NR_Capability_v1560_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_UE_NR_Capability_v1560_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_NR_Capability_v1560_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nrdc-Parameters */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* receivedFilters */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_NR_Capability_v1560_specs_1 = {
	sizeof(struct UE_NR_Capability_v1560),
	offsetof(struct UE_NR_Capability_v1560, _asn_ctx),
	asn_MAP_UE_NR_Capability_v1560_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_UE_NR_Capability_v1560_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_NR_Capability_v1560 = {
	"UE-NR-Capability-v1560",
	"UE-NR-Capability-v1560",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_NR_Capability_v1560_tags_1,
	sizeof(asn_DEF_UE_NR_Capability_v1560_tags_1)
		/sizeof(asn_DEF_UE_NR_Capability_v1560_tags_1[0]), /* 1 */
	asn_DEF_UE_NR_Capability_v1560_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_NR_Capability_v1560_tags_1)
		/sizeof(asn_DEF_UE_NR_Capability_v1560_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_NR_Capability_v1560_1,
	3,	/* Elements count */
	&asn_SPC_UE_NR_Capability_v1560_specs_1	/* Additional specs */
};

