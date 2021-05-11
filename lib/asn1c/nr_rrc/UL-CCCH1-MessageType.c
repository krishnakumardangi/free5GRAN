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

#include "UL-CCCH1-MessageType.h"

static asn_oer_constraints_t asn_OER_type_c1_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_c1_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_UL_CCCH1_MessageType_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_UL_CCCH1_MessageType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_c1_2[] = {
	{ ATF_POINTER, 0, offsetof(struct UL_CCCH1_MessageType__c1, choice.rrcResumeRequest1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCResumeRequest1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcResumeRequest1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_CCCH1_MessageType__c1, choice.spare3),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare3"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_CCCH1_MessageType__c1, choice.spare2),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_CCCH1_MessageType__c1, choice.spare1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare1"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_c1_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrcResumeRequest1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* spare3 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* spare2 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* spare1 */
};
static asn_CHOICE_specifics_t asn_SPC_c1_specs_2 = {
	sizeof(struct UL_CCCH1_MessageType__c1),
	offsetof(struct UL_CCCH1_MessageType__c1, _asn_ctx),
	offsetof(struct UL_CCCH1_MessageType__c1, present),
	sizeof(((struct UL_CCCH1_MessageType__c1 *)0)->present),
	asn_MAP_c1_tag2el_2,
	4,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_c1_2 = {
	"c1",
	"c1",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_c1_constr_2, &asn_PER_type_c1_constr_2, CHOICE_constraint },
	asn_MBR_c1_2,
	4,	/* Elements count */
	&asn_SPC_c1_specs_2	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_messageClassExtension_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_messageClassExtension_specs_7 = {
	sizeof(struct UL_CCCH1_MessageType__messageClassExtension),
	offsetof(struct UL_CCCH1_MessageType__messageClassExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_messageClassExtension_7 = {
	"messageClassExtension",
	"messageClassExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_messageClassExtension_tags_7,
	sizeof(asn_DEF_messageClassExtension_tags_7)
		/sizeof(asn_DEF_messageClassExtension_tags_7[0]) - 1, /* 1 */
	asn_DEF_messageClassExtension_tags_7,	/* Same as above */
	sizeof(asn_DEF_messageClassExtension_tags_7)
		/sizeof(asn_DEF_messageClassExtension_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_messageClassExtension_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UL_CCCH1_MessageType_1[] = {
	{ ATF_POINTER, 0, offsetof(struct UL_CCCH1_MessageType, choice.c1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_c1_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"c1"
		},
	{ ATF_POINTER, 0, offsetof(struct UL_CCCH1_MessageType, choice.messageClassExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_messageClassExtension_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"messageClassExtension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_UL_CCCH1_MessageType_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* c1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* messageClassExtension */
};
asn_CHOICE_specifics_t asn_SPC_UL_CCCH1_MessageType_specs_1 = {
	sizeof(struct UL_CCCH1_MessageType),
	offsetof(struct UL_CCCH1_MessageType, _asn_ctx),
	offsetof(struct UL_CCCH1_MessageType, present),
	sizeof(((struct UL_CCCH1_MessageType *)0)->present),
	asn_MAP_UL_CCCH1_MessageType_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_UL_CCCH1_MessageType = {
	"UL-CCCH1-MessageType",
	"UL-CCCH1-MessageType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_UL_CCCH1_MessageType_constr_1, &asn_PER_type_UL_CCCH1_MessageType_constr_1, CHOICE_constraint },
	asn_MBR_UL_CCCH1_MessageType_1,
	2,	/* Elements count */
	&asn_SPC_UL_CCCH1_MessageType_specs_1	/* Additional specs */
};

