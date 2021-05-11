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

#include "ReportInterval.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_ReportInterval_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_ReportInterval_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  13 }	/* (0..13) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ReportInterval_value2enum_1[] = {
	{ 0,	5,	"ms120" },
	{ 1,	5,	"ms240" },
	{ 2,	5,	"ms480" },
	{ 3,	5,	"ms640" },
	{ 4,	6,	"ms1024" },
	{ 5,	6,	"ms2048" },
	{ 6,	6,	"ms5120" },
	{ 7,	7,	"ms10240" },
	{ 8,	7,	"ms20480" },
	{ 9,	7,	"ms40960" },
	{ 10,	4,	"min1" },
	{ 11,	4,	"min6" },
	{ 12,	5,	"min12" },
	{ 13,	5,	"min30" }
};
static const unsigned int asn_MAP_ReportInterval_enum2value_1[] = {
	10,	/* min1(10) */
	12,	/* min12(12) */
	13,	/* min30(13) */
	11,	/* min6(11) */
	4,	/* ms1024(4) */
	7,	/* ms10240(7) */
	0,	/* ms120(0) */
	5,	/* ms2048(5) */
	8,	/* ms20480(8) */
	1,	/* ms240(1) */
	9,	/* ms40960(9) */
	2,	/* ms480(2) */
	6,	/* ms5120(6) */
	3	/* ms640(3) */
};
const asn_INTEGER_specifics_t asn_SPC_ReportInterval_specs_1 = {
	asn_MAP_ReportInterval_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_ReportInterval_enum2value_1,	/* N => "tag"; sorted by N */
	14,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ReportInterval_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ReportInterval = {
	"ReportInterval",
	"ReportInterval",
	&asn_OP_NativeEnumerated,
	asn_DEF_ReportInterval_tags_1,
	sizeof(asn_DEF_ReportInterval_tags_1)
		/sizeof(asn_DEF_ReportInterval_tags_1[0]), /* 1 */
	asn_DEF_ReportInterval_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReportInterval_tags_1)
		/sizeof(asn_DEF_ReportInterval_tags_1[0]), /* 1 */
	{ &asn_OER_type_ReportInterval_constr_1, &asn_PER_type_ReportInterval_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ReportInterval_specs_1	/* Additional specs */
};

