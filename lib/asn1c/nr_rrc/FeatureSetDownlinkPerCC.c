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

#include "FeatureSetDownlinkPerCC.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_channelBW_90mhz_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_channelBW_90mhz_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_channelBW_90mhz_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_channelBW_90mhz_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_channelBW_90mhz_specs_4 = {
	asn_MAP_channelBW_90mhz_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_channelBW_90mhz_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_channelBW_90mhz_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_channelBW_90mhz_4 = {
	"channelBW-90mhz",
	"channelBW-90mhz",
	&asn_OP_NativeEnumerated,
	asn_DEF_channelBW_90mhz_tags_4,
	sizeof(asn_DEF_channelBW_90mhz_tags_4)
		/sizeof(asn_DEF_channelBW_90mhz_tags_4[0]) - 1, /* 1 */
	asn_DEF_channelBW_90mhz_tags_4,	/* Same as above */
	sizeof(asn_DEF_channelBW_90mhz_tags_4)
		/sizeof(asn_DEF_channelBW_90mhz_tags_4[0]), /* 2 */
	{ &asn_OER_type_channelBW_90mhz_constr_4, &asn_PER_type_channelBW_90mhz_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_channelBW_90mhz_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_FeatureSetDownlinkPerCC_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FeatureSetDownlinkPerCC, supportedSubcarrierSpacingDL),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SubcarrierSpacing,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedSubcarrierSpacingDL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FeatureSetDownlinkPerCC, supportedBandwidthDL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SupportedBandwidth,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandwidthDL"
		},
	{ ATF_POINTER, 3, offsetof(struct FeatureSetDownlinkPerCC, channelBW_90mhz),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_channelBW_90mhz_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"channelBW-90mhz"
		},
	{ ATF_POINTER, 2, offsetof(struct FeatureSetDownlinkPerCC, maxNumberMIMO_LayersPDSCH),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MIMO_LayersDL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxNumberMIMO-LayersPDSCH"
		},
	{ ATF_POINTER, 1, offsetof(struct FeatureSetDownlinkPerCC, supportedModulationOrderDL),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ModulationOrder,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedModulationOrderDL"
		},
};
static const int asn_MAP_FeatureSetDownlinkPerCC_oms_1[] = { 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_FeatureSetDownlinkPerCC_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FeatureSetDownlinkPerCC_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supportedSubcarrierSpacingDL */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* supportedBandwidthDL */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* channelBW-90mhz */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* maxNumberMIMO-LayersPDSCH */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* supportedModulationOrderDL */
};
asn_SEQUENCE_specifics_t asn_SPC_FeatureSetDownlinkPerCC_specs_1 = {
	sizeof(struct FeatureSetDownlinkPerCC),
	offsetof(struct FeatureSetDownlinkPerCC, _asn_ctx),
	asn_MAP_FeatureSetDownlinkPerCC_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_FeatureSetDownlinkPerCC_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FeatureSetDownlinkPerCC = {
	"FeatureSetDownlinkPerCC",
	"FeatureSetDownlinkPerCC",
	&asn_OP_SEQUENCE,
	asn_DEF_FeatureSetDownlinkPerCC_tags_1,
	sizeof(asn_DEF_FeatureSetDownlinkPerCC_tags_1)
		/sizeof(asn_DEF_FeatureSetDownlinkPerCC_tags_1[0]), /* 1 */
	asn_DEF_FeatureSetDownlinkPerCC_tags_1,	/* Same as above */
	sizeof(asn_DEF_FeatureSetDownlinkPerCC_tags_1)
		/sizeof(asn_DEF_FeatureSetDownlinkPerCC_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_FeatureSetDownlinkPerCC_1,
	5,	/* Elements count */
	&asn_SPC_FeatureSetDownlinkPerCC_specs_1	/* Additional specs */
};

