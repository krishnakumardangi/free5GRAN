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

#include "UAC-BarringPerPLMN-List.h"

static asn_oer_constraints_t asn_OER_type_UAC_BarringPerPLMN_List_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..12)) */};
asn_per_constraints_t asn_PER_type_UAC_BarringPerPLMN_List_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (SIZE(1..12)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_UAC_BarringPerPLMN_List_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_UAC_BarringPerPLMN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_UAC_BarringPerPLMN_List_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_UAC_BarringPerPLMN_List_specs_1 = {
	sizeof(struct UAC_BarringPerPLMN_List),
	offsetof(struct UAC_BarringPerPLMN_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_UAC_BarringPerPLMN_List = {
	"UAC-BarringPerPLMN-List",
	"UAC-BarringPerPLMN-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_UAC_BarringPerPLMN_List_tags_1,
	sizeof(asn_DEF_UAC_BarringPerPLMN_List_tags_1)
		/sizeof(asn_DEF_UAC_BarringPerPLMN_List_tags_1[0]), /* 1 */
	asn_DEF_UAC_BarringPerPLMN_List_tags_1,	/* Same as above */
	sizeof(asn_DEF_UAC_BarringPerPLMN_List_tags_1)
		/sizeof(asn_DEF_UAC_BarringPerPLMN_List_tags_1[0]), /* 1 */
	{ &asn_OER_type_UAC_BarringPerPLMN_List_constr_1, &asn_PER_type_UAC_BarringPerPLMN_List_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_UAC_BarringPerPLMN_List_1,
	1,	/* Single element */
	&asn_SPC_UAC_BarringPerPLMN_List_specs_1	/* Additional specs */
};

