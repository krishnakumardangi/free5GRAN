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

#include "CSI-ReportFramework.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_maxNumberPeriodicCSI_PerBWP_ForCSI_Report_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 4)) {
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
memb_maxNumberAperiodicCSI_PerBWP_ForCSI_Report_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 4)) {
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
memb_maxNumberSemiPersistentCSI_PerBWP_ForCSI_Report_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 4)) {
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
memb_maxNumberPeriodicCSI_PerBWP_ForBeamReport_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 4)) {
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
memb_maxNumberAperiodicCSI_PerBWP_ForBeamReport_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 4)) {
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
memb_maxNumberSemiPersistentCSI_PerBWP_ForBeamReport_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 4)) {
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
memb_simultaneousCSI_ReportsPerCC_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_maxNumberAperiodicCSI_triggeringStatePerCC_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_maxNumberAperiodicCSI_triggeringStatePerCC_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_maxNumberPeriodicCSI_PerBWP_ForCSI_Report_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (1..4) */,
	-1};
static asn_per_constraints_t asn_PER_memb_maxNumberPeriodicCSI_PerBWP_ForCSI_Report_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_maxNumberAperiodicCSI_PerBWP_ForCSI_Report_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (1..4) */,
	-1};
static asn_per_constraints_t asn_PER_memb_maxNumberAperiodicCSI_PerBWP_ForCSI_Report_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_maxNumberSemiPersistentCSI_PerBWP_ForCSI_Report_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (0..4) */,
	-1};
static asn_per_constraints_t asn_PER_memb_maxNumberSemiPersistentCSI_PerBWP_ForCSI_Report_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_maxNumberPeriodicCSI_PerBWP_ForBeamReport_constr_5 CC_NOTUSED = {
	{ 1, 1 }	/* (1..4) */,
	-1};
static asn_per_constraints_t asn_PER_memb_maxNumberPeriodicCSI_PerBWP_ForBeamReport_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_maxNumberAperiodicCSI_PerBWP_ForBeamReport_constr_6 CC_NOTUSED = {
	{ 1, 1 }	/* (1..4) */,
	-1};
static asn_per_constraints_t asn_PER_memb_maxNumberAperiodicCSI_PerBWP_ForBeamReport_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_maxNumberSemiPersistentCSI_PerBWP_ForBeamReport_constr_14 CC_NOTUSED = {
	{ 1, 1 }	/* (0..4) */,
	-1};
static asn_per_constraints_t asn_PER_memb_maxNumberSemiPersistentCSI_PerBWP_ForBeamReport_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_simultaneousCSI_ReportsPerCC_constr_15 CC_NOTUSED = {
	{ 1, 1 }	/* (1..8) */,
	-1};
static asn_per_constraints_t asn_PER_memb_simultaneousCSI_ReportsPerCC_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_maxNumberAperiodicCSI_triggeringStatePerCC_value2enum_7[] = {
	{ 0,	2,	"n3" },
	{ 1,	2,	"n7" },
	{ 2,	3,	"n15" },
	{ 3,	3,	"n31" },
	{ 4,	3,	"n63" },
	{ 5,	4,	"n128" }
};
static const unsigned int asn_MAP_maxNumberAperiodicCSI_triggeringStatePerCC_enum2value_7[] = {
	5,	/* n128(5) */
	2,	/* n15(2) */
	0,	/* n3(0) */
	3,	/* n31(3) */
	4,	/* n63(4) */
	1	/* n7(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_maxNumberAperiodicCSI_triggeringStatePerCC_specs_7 = {
	asn_MAP_maxNumberAperiodicCSI_triggeringStatePerCC_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_maxNumberAperiodicCSI_triggeringStatePerCC_enum2value_7,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_maxNumberAperiodicCSI_triggeringStatePerCC_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_maxNumberAperiodicCSI_triggeringStatePerCC_7 = {
	"maxNumberAperiodicCSI-triggeringStatePerCC",
	"maxNumberAperiodicCSI-triggeringStatePerCC",
	&asn_OP_NativeEnumerated,
	asn_DEF_maxNumberAperiodicCSI_triggeringStatePerCC_tags_7,
	sizeof(asn_DEF_maxNumberAperiodicCSI_triggeringStatePerCC_tags_7)
		/sizeof(asn_DEF_maxNumberAperiodicCSI_triggeringStatePerCC_tags_7[0]) - 1, /* 1 */
	asn_DEF_maxNumberAperiodicCSI_triggeringStatePerCC_tags_7,	/* Same as above */
	sizeof(asn_DEF_maxNumberAperiodicCSI_triggeringStatePerCC_tags_7)
		/sizeof(asn_DEF_maxNumberAperiodicCSI_triggeringStatePerCC_tags_7[0]), /* 2 */
	{ &asn_OER_type_maxNumberAperiodicCSI_triggeringStatePerCC_constr_7, &asn_PER_type_maxNumberAperiodicCSI_triggeringStatePerCC_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_maxNumberAperiodicCSI_triggeringStatePerCC_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CSI_ReportFramework_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_ReportFramework, maxNumberPeriodicCSI_PerBWP_ForCSI_Report),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_maxNumberPeriodicCSI_PerBWP_ForCSI_Report_constr_2, &asn_PER_memb_maxNumberPeriodicCSI_PerBWP_ForCSI_Report_constr_2,  memb_maxNumberPeriodicCSI_PerBWP_ForCSI_Report_constraint_1 },
		0, 0, /* No default value */
		"maxNumberPeriodicCSI-PerBWP-ForCSI-Report"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_ReportFramework, maxNumberAperiodicCSI_PerBWP_ForCSI_Report),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_maxNumberAperiodicCSI_PerBWP_ForCSI_Report_constr_3, &asn_PER_memb_maxNumberAperiodicCSI_PerBWP_ForCSI_Report_constr_3,  memb_maxNumberAperiodicCSI_PerBWP_ForCSI_Report_constraint_1 },
		0, 0, /* No default value */
		"maxNumberAperiodicCSI-PerBWP-ForCSI-Report"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_ReportFramework, maxNumberSemiPersistentCSI_PerBWP_ForCSI_Report),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_maxNumberSemiPersistentCSI_PerBWP_ForCSI_Report_constr_4, &asn_PER_memb_maxNumberSemiPersistentCSI_PerBWP_ForCSI_Report_constr_4,  memb_maxNumberSemiPersistentCSI_PerBWP_ForCSI_Report_constraint_1 },
		0, 0, /* No default value */
		"maxNumberSemiPersistentCSI-PerBWP-ForCSI-Report"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_ReportFramework, maxNumberPeriodicCSI_PerBWP_ForBeamReport),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_maxNumberPeriodicCSI_PerBWP_ForBeamReport_constr_5, &asn_PER_memb_maxNumberPeriodicCSI_PerBWP_ForBeamReport_constr_5,  memb_maxNumberPeriodicCSI_PerBWP_ForBeamReport_constraint_1 },
		0, 0, /* No default value */
		"maxNumberPeriodicCSI-PerBWP-ForBeamReport"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_ReportFramework, maxNumberAperiodicCSI_PerBWP_ForBeamReport),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_maxNumberAperiodicCSI_PerBWP_ForBeamReport_constr_6, &asn_PER_memb_maxNumberAperiodicCSI_PerBWP_ForBeamReport_constr_6,  memb_maxNumberAperiodicCSI_PerBWP_ForBeamReport_constraint_1 },
		0, 0, /* No default value */
		"maxNumberAperiodicCSI-PerBWP-ForBeamReport"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_ReportFramework, maxNumberAperiodicCSI_triggeringStatePerCC),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_maxNumberAperiodicCSI_triggeringStatePerCC_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxNumberAperiodicCSI-triggeringStatePerCC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_ReportFramework, maxNumberSemiPersistentCSI_PerBWP_ForBeamReport),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_maxNumberSemiPersistentCSI_PerBWP_ForBeamReport_constr_14, &asn_PER_memb_maxNumberSemiPersistentCSI_PerBWP_ForBeamReport_constr_14,  memb_maxNumberSemiPersistentCSI_PerBWP_ForBeamReport_constraint_1 },
		0, 0, /* No default value */
		"maxNumberSemiPersistentCSI-PerBWP-ForBeamReport"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CSI_ReportFramework, simultaneousCSI_ReportsPerCC),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_simultaneousCSI_ReportsPerCC_constr_15, &asn_PER_memb_simultaneousCSI_ReportsPerCC_constr_15,  memb_simultaneousCSI_ReportsPerCC_constraint_1 },
		0, 0, /* No default value */
		"simultaneousCSI-ReportsPerCC"
		},
};
static const ber_tlv_tag_t asn_DEF_CSI_ReportFramework_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CSI_ReportFramework_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxNumberPeriodicCSI-PerBWP-ForCSI-Report */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maxNumberAperiodicCSI-PerBWP-ForCSI-Report */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* maxNumberSemiPersistentCSI-PerBWP-ForCSI-Report */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* maxNumberPeriodicCSI-PerBWP-ForBeamReport */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* maxNumberAperiodicCSI-PerBWP-ForBeamReport */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* maxNumberAperiodicCSI-triggeringStatePerCC */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* maxNumberSemiPersistentCSI-PerBWP-ForBeamReport */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* simultaneousCSI-ReportsPerCC */
};
asn_SEQUENCE_specifics_t asn_SPC_CSI_ReportFramework_specs_1 = {
	sizeof(struct CSI_ReportFramework),
	offsetof(struct CSI_ReportFramework, _asn_ctx),
	asn_MAP_CSI_ReportFramework_tag2el_1,
	8,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CSI_ReportFramework = {
	"CSI-ReportFramework",
	"CSI-ReportFramework",
	&asn_OP_SEQUENCE,
	asn_DEF_CSI_ReportFramework_tags_1,
	sizeof(asn_DEF_CSI_ReportFramework_tags_1)
		/sizeof(asn_DEF_CSI_ReportFramework_tags_1[0]), /* 1 */
	asn_DEF_CSI_ReportFramework_tags_1,	/* Same as above */
	sizeof(asn_DEF_CSI_ReportFramework_tags_1)
		/sizeof(asn_DEF_CSI_ReportFramework_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CSI_ReportFramework_1,
	8,	/* Elements count */
	&asn_SPC_CSI_ReportFramework_specs_1	/* Additional specs */
};

