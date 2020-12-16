/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#include "SlotFormatIndicator.h"

static int
memb_dci_PayloadSize_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 128)) {
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
memb_slotFormatCombToAddModList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_slotFormatCombToReleaseList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_availableRB_SetsToAddModList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_availableRB_SetsToRelease_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_switchTriggerToAddModList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_switchTriggerToReleaseList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_co_DurationsPerCellToAddModList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_co_DurationsPerCellToReleaseList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_slotFormatCombToAddModList_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_type_slotFormatCombToAddModList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_slotFormatCombToReleaseList_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_type_slotFormatCombToReleaseList_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_availableRB_SetsToAddModList_r16_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_type_availableRB_SetsToAddModList_r16_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_availableRB_SetsToRelease_r16_constr_11 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_type_availableRB_SetsToRelease_r16_constr_11 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_switchTriggerToAddModList_r16_constr_13 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_type_switchTriggerToAddModList_r16_constr_13 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_switchTriggerToReleaseList_r16_constr_15 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_type_switchTriggerToReleaseList_r16_constr_15 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_co_DurationsPerCellToAddModList_r16_constr_17 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_type_co_DurationsPerCellToAddModList_r16_constr_17 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_co_DurationsPerCellToReleaseList_r16_constr_19 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_type_co_DurationsPerCellToReleaseList_r16_constr_19 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_dci_PayloadSize_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (1..128) */,
	-1};
static asn_per_constraints_t asn_PER_memb_dci_PayloadSize_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  1,  128 }	/* (1..128) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_slotFormatCombToAddModList_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_memb_slotFormatCombToAddModList_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_slotFormatCombToReleaseList_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_memb_slotFormatCombToReleaseList_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_availableRB_SetsToAddModList_r16_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_memb_availableRB_SetsToAddModList_r16_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_availableRB_SetsToRelease_r16_constr_11 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_memb_availableRB_SetsToRelease_r16_constr_11 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_switchTriggerToAddModList_r16_constr_13 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_memb_switchTriggerToAddModList_r16_constr_13 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_switchTriggerToReleaseList_r16_constr_15 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_memb_switchTriggerToReleaseList_r16_constr_15 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_co_DurationsPerCellToAddModList_r16_constr_17 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_memb_co_DurationsPerCellToAddModList_r16_constr_17 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_co_DurationsPerCellToReleaseList_r16_constr_19 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_memb_co_DurationsPerCellToReleaseList_r16_constr_19 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_slotFormatCombToAddModList_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SlotFormatCombinationsPerCell,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_slotFormatCombToAddModList_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_slotFormatCombToAddModList_specs_4 = {
	sizeof(struct SlotFormatIndicator__slotFormatCombToAddModList),
	offsetof(struct SlotFormatIndicator__slotFormatCombToAddModList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_slotFormatCombToAddModList_4 = {
	"slotFormatCombToAddModList",
	"slotFormatCombToAddModList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_slotFormatCombToAddModList_tags_4,
	sizeof(asn_DEF_slotFormatCombToAddModList_tags_4)
		/sizeof(asn_DEF_slotFormatCombToAddModList_tags_4[0]) - 1, /* 1 */
	asn_DEF_slotFormatCombToAddModList_tags_4,	/* Same as above */
	sizeof(asn_DEF_slotFormatCombToAddModList_tags_4)
		/sizeof(asn_DEF_slotFormatCombToAddModList_tags_4[0]), /* 2 */
	{ &asn_OER_type_slotFormatCombToAddModList_constr_4, &asn_PER_type_slotFormatCombToAddModList_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_slotFormatCombToAddModList_4,
	1,	/* Single element */
	&asn_SPC_slotFormatCombToAddModList_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_slotFormatCombToReleaseList_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_ServCellIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_slotFormatCombToReleaseList_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_slotFormatCombToReleaseList_specs_6 = {
	sizeof(struct SlotFormatIndicator__slotFormatCombToReleaseList),
	offsetof(struct SlotFormatIndicator__slotFormatCombToReleaseList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_slotFormatCombToReleaseList_6 = {
	"slotFormatCombToReleaseList",
	"slotFormatCombToReleaseList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_slotFormatCombToReleaseList_tags_6,
	sizeof(asn_DEF_slotFormatCombToReleaseList_tags_6)
		/sizeof(asn_DEF_slotFormatCombToReleaseList_tags_6[0]) - 1, /* 1 */
	asn_DEF_slotFormatCombToReleaseList_tags_6,	/* Same as above */
	sizeof(asn_DEF_slotFormatCombToReleaseList_tags_6)
		/sizeof(asn_DEF_slotFormatCombToReleaseList_tags_6[0]), /* 2 */
	{ &asn_OER_type_slotFormatCombToReleaseList_constr_6, &asn_PER_type_slotFormatCombToReleaseList_constr_6, SEQUENCE_OF_constraint },
	asn_MBR_slotFormatCombToReleaseList_6,
	1,	/* Single element */
	&asn_SPC_slotFormatCombToReleaseList_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_availableRB_SetsToAddModList_r16_9[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_AvailableRB_SetsPerCell_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_availableRB_SetsToAddModList_r16_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_availableRB_SetsToAddModList_r16_specs_9 = {
	sizeof(struct SlotFormatIndicator__availableRB_SetsToAddModList_r16),
	offsetof(struct SlotFormatIndicator__availableRB_SetsToAddModList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_availableRB_SetsToAddModList_r16_9 = {
	"availableRB-SetsToAddModList-r16",
	"availableRB-SetsToAddModList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_availableRB_SetsToAddModList_r16_tags_9,
	sizeof(asn_DEF_availableRB_SetsToAddModList_r16_tags_9)
		/sizeof(asn_DEF_availableRB_SetsToAddModList_r16_tags_9[0]) - 1, /* 1 */
	asn_DEF_availableRB_SetsToAddModList_r16_tags_9,	/* Same as above */
	sizeof(asn_DEF_availableRB_SetsToAddModList_r16_tags_9)
		/sizeof(asn_DEF_availableRB_SetsToAddModList_r16_tags_9[0]), /* 2 */
	{ &asn_OER_type_availableRB_SetsToAddModList_r16_constr_9, &asn_PER_type_availableRB_SetsToAddModList_r16_constr_9, SEQUENCE_OF_constraint },
	asn_MBR_availableRB_SetsToAddModList_r16_9,
	1,	/* Single element */
	&asn_SPC_availableRB_SetsToAddModList_r16_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_availableRB_SetsToRelease_r16_11[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_ServCellIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_availableRB_SetsToRelease_r16_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_availableRB_SetsToRelease_r16_specs_11 = {
	sizeof(struct SlotFormatIndicator__availableRB_SetsToRelease_r16),
	offsetof(struct SlotFormatIndicator__availableRB_SetsToRelease_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_availableRB_SetsToRelease_r16_11 = {
	"availableRB-SetsToRelease-r16",
	"availableRB-SetsToRelease-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_availableRB_SetsToRelease_r16_tags_11,
	sizeof(asn_DEF_availableRB_SetsToRelease_r16_tags_11)
		/sizeof(asn_DEF_availableRB_SetsToRelease_r16_tags_11[0]) - 1, /* 1 */
	asn_DEF_availableRB_SetsToRelease_r16_tags_11,	/* Same as above */
	sizeof(asn_DEF_availableRB_SetsToRelease_r16_tags_11)
		/sizeof(asn_DEF_availableRB_SetsToRelease_r16_tags_11[0]), /* 2 */
	{ &asn_OER_type_availableRB_SetsToRelease_r16_constr_11, &asn_PER_type_availableRB_SetsToRelease_r16_constr_11, SEQUENCE_OF_constraint },
	asn_MBR_availableRB_SetsToRelease_r16_11,
	1,	/* Single element */
	&asn_SPC_availableRB_SetsToRelease_r16_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_switchTriggerToAddModList_r16_13[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SearchSpaceSwitchTrigger_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_switchTriggerToAddModList_r16_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_switchTriggerToAddModList_r16_specs_13 = {
	sizeof(struct SlotFormatIndicator__switchTriggerToAddModList_r16),
	offsetof(struct SlotFormatIndicator__switchTriggerToAddModList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_switchTriggerToAddModList_r16_13 = {
	"switchTriggerToAddModList-r16",
	"switchTriggerToAddModList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_switchTriggerToAddModList_r16_tags_13,
	sizeof(asn_DEF_switchTriggerToAddModList_r16_tags_13)
		/sizeof(asn_DEF_switchTriggerToAddModList_r16_tags_13[0]) - 1, /* 1 */
	asn_DEF_switchTriggerToAddModList_r16_tags_13,	/* Same as above */
	sizeof(asn_DEF_switchTriggerToAddModList_r16_tags_13)
		/sizeof(asn_DEF_switchTriggerToAddModList_r16_tags_13[0]), /* 2 */
	{ &asn_OER_type_switchTriggerToAddModList_r16_constr_13, &asn_PER_type_switchTriggerToAddModList_r16_constr_13, SEQUENCE_OF_constraint },
	asn_MBR_switchTriggerToAddModList_r16_13,
	1,	/* Single element */
	&asn_SPC_switchTriggerToAddModList_r16_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_switchTriggerToReleaseList_r16_15[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_ServCellIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_switchTriggerToReleaseList_r16_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_switchTriggerToReleaseList_r16_specs_15 = {
	sizeof(struct SlotFormatIndicator__switchTriggerToReleaseList_r16),
	offsetof(struct SlotFormatIndicator__switchTriggerToReleaseList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_switchTriggerToReleaseList_r16_15 = {
	"switchTriggerToReleaseList-r16",
	"switchTriggerToReleaseList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_switchTriggerToReleaseList_r16_tags_15,
	sizeof(asn_DEF_switchTriggerToReleaseList_r16_tags_15)
		/sizeof(asn_DEF_switchTriggerToReleaseList_r16_tags_15[0]) - 1, /* 1 */
	asn_DEF_switchTriggerToReleaseList_r16_tags_15,	/* Same as above */
	sizeof(asn_DEF_switchTriggerToReleaseList_r16_tags_15)
		/sizeof(asn_DEF_switchTriggerToReleaseList_r16_tags_15[0]), /* 2 */
	{ &asn_OER_type_switchTriggerToReleaseList_r16_constr_15, &asn_PER_type_switchTriggerToReleaseList_r16_constr_15, SEQUENCE_OF_constraint },
	asn_MBR_switchTriggerToReleaseList_r16_15,
	1,	/* Single element */
	&asn_SPC_switchTriggerToReleaseList_r16_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_co_DurationsPerCellToAddModList_r16_17[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_CO_DurationsPerCell_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_co_DurationsPerCellToAddModList_r16_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_co_DurationsPerCellToAddModList_r16_specs_17 = {
	sizeof(struct SlotFormatIndicator__co_DurationsPerCellToAddModList_r16),
	offsetof(struct SlotFormatIndicator__co_DurationsPerCellToAddModList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_co_DurationsPerCellToAddModList_r16_17 = {
	"co-DurationsPerCellToAddModList-r16",
	"co-DurationsPerCellToAddModList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_co_DurationsPerCellToAddModList_r16_tags_17,
	sizeof(asn_DEF_co_DurationsPerCellToAddModList_r16_tags_17)
		/sizeof(asn_DEF_co_DurationsPerCellToAddModList_r16_tags_17[0]) - 1, /* 1 */
	asn_DEF_co_DurationsPerCellToAddModList_r16_tags_17,	/* Same as above */
	sizeof(asn_DEF_co_DurationsPerCellToAddModList_r16_tags_17)
		/sizeof(asn_DEF_co_DurationsPerCellToAddModList_r16_tags_17[0]), /* 2 */
	{ &asn_OER_type_co_DurationsPerCellToAddModList_r16_constr_17, &asn_PER_type_co_DurationsPerCellToAddModList_r16_constr_17, SEQUENCE_OF_constraint },
	asn_MBR_co_DurationsPerCellToAddModList_r16_17,
	1,	/* Single element */
	&asn_SPC_co_DurationsPerCellToAddModList_r16_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_co_DurationsPerCellToReleaseList_r16_19[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_ServCellIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_co_DurationsPerCellToReleaseList_r16_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_co_DurationsPerCellToReleaseList_r16_specs_19 = {
	sizeof(struct SlotFormatIndicator__co_DurationsPerCellToReleaseList_r16),
	offsetof(struct SlotFormatIndicator__co_DurationsPerCellToReleaseList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_co_DurationsPerCellToReleaseList_r16_19 = {
	"co-DurationsPerCellToReleaseList-r16",
	"co-DurationsPerCellToReleaseList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_co_DurationsPerCellToReleaseList_r16_tags_19,
	sizeof(asn_DEF_co_DurationsPerCellToReleaseList_r16_tags_19)
		/sizeof(asn_DEF_co_DurationsPerCellToReleaseList_r16_tags_19[0]) - 1, /* 1 */
	asn_DEF_co_DurationsPerCellToReleaseList_r16_tags_19,	/* Same as above */
	sizeof(asn_DEF_co_DurationsPerCellToReleaseList_r16_tags_19)
		/sizeof(asn_DEF_co_DurationsPerCellToReleaseList_r16_tags_19[0]), /* 2 */
	{ &asn_OER_type_co_DurationsPerCellToReleaseList_r16_constr_19, &asn_PER_type_co_DurationsPerCellToReleaseList_r16_constr_19, SEQUENCE_OF_constraint },
	asn_MBR_co_DurationsPerCellToReleaseList_r16_19,
	1,	/* Single element */
	&asn_SPC_co_DurationsPerCellToReleaseList_r16_specs_19	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SlotFormatIndicator_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SlotFormatIndicator, sfi_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RNTI_Value,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sfi-RNTI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SlotFormatIndicator, dci_PayloadSize),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_dci_PayloadSize_constr_3, &asn_PER_memb_dci_PayloadSize_constr_3,  memb_dci_PayloadSize_constraint_1 },
		0, 0, /* No default value */
		"dci-PayloadSize"
		},
	{ ATF_POINTER, 8, offsetof(struct SlotFormatIndicator, slotFormatCombToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_slotFormatCombToAddModList_4,
		0,
		{ &asn_OER_memb_slotFormatCombToAddModList_constr_4, &asn_PER_memb_slotFormatCombToAddModList_constr_4,  memb_slotFormatCombToAddModList_constraint_1 },
		0, 0, /* No default value */
		"slotFormatCombToAddModList"
		},
	{ ATF_POINTER, 7, offsetof(struct SlotFormatIndicator, slotFormatCombToReleaseList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_slotFormatCombToReleaseList_6,
		0,
		{ &asn_OER_memb_slotFormatCombToReleaseList_constr_6, &asn_PER_memb_slotFormatCombToReleaseList_constr_6,  memb_slotFormatCombToReleaseList_constraint_1 },
		0, 0, /* No default value */
		"slotFormatCombToReleaseList"
		},
	{ ATF_POINTER, 6, offsetof(struct SlotFormatIndicator, availableRB_SetsToAddModList_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_availableRB_SetsToAddModList_r16_9,
		0,
		{ &asn_OER_memb_availableRB_SetsToAddModList_r16_constr_9, &asn_PER_memb_availableRB_SetsToAddModList_r16_constr_9,  memb_availableRB_SetsToAddModList_r16_constraint_1 },
		0, 0, /* No default value */
		"availableRB-SetsToAddModList-r16"
		},
	{ ATF_POINTER, 5, offsetof(struct SlotFormatIndicator, availableRB_SetsToRelease_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_availableRB_SetsToRelease_r16_11,
		0,
		{ &asn_OER_memb_availableRB_SetsToRelease_r16_constr_11, &asn_PER_memb_availableRB_SetsToRelease_r16_constr_11,  memb_availableRB_SetsToRelease_r16_constraint_1 },
		0, 0, /* No default value */
		"availableRB-SetsToRelease-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct SlotFormatIndicator, switchTriggerToAddModList_r16),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_switchTriggerToAddModList_r16_13,
		0,
		{ &asn_OER_memb_switchTriggerToAddModList_r16_constr_13, &asn_PER_memb_switchTriggerToAddModList_r16_constr_13,  memb_switchTriggerToAddModList_r16_constraint_1 },
		0, 0, /* No default value */
		"switchTriggerToAddModList-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct SlotFormatIndicator, switchTriggerToReleaseList_r16),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_switchTriggerToReleaseList_r16_15,
		0,
		{ &asn_OER_memb_switchTriggerToReleaseList_r16_constr_15, &asn_PER_memb_switchTriggerToReleaseList_r16_constr_15,  memb_switchTriggerToReleaseList_r16_constraint_1 },
		0, 0, /* No default value */
		"switchTriggerToReleaseList-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct SlotFormatIndicator, co_DurationsPerCellToAddModList_r16),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_co_DurationsPerCellToAddModList_r16_17,
		0,
		{ &asn_OER_memb_co_DurationsPerCellToAddModList_r16_constr_17, &asn_PER_memb_co_DurationsPerCellToAddModList_r16_constr_17,  memb_co_DurationsPerCellToAddModList_r16_constraint_1 },
		0, 0, /* No default value */
		"co-DurationsPerCellToAddModList-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct SlotFormatIndicator, co_DurationsPerCellToReleaseList_r16),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_co_DurationsPerCellToReleaseList_r16_19,
		0,
		{ &asn_OER_memb_co_DurationsPerCellToReleaseList_r16_constr_19, &asn_PER_memb_co_DurationsPerCellToReleaseList_r16_constr_19,  memb_co_DurationsPerCellToReleaseList_r16_constraint_1 },
		0, 0, /* No default value */
		"co-DurationsPerCellToReleaseList-r16"
		},
};
static const int asn_MAP_SlotFormatIndicator_oms_1[] = { 2, 3, 4, 5, 6, 7, 8, 9 };
static const ber_tlv_tag_t asn_DEF_SlotFormatIndicator_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SlotFormatIndicator_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sfi-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dci-PayloadSize */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* slotFormatCombToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* slotFormatCombToReleaseList */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* availableRB-SetsToAddModList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* availableRB-SetsToRelease-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* switchTriggerToAddModList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* switchTriggerToReleaseList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* co-DurationsPerCellToAddModList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* co-DurationsPerCellToReleaseList-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_SlotFormatIndicator_specs_1 = {
	sizeof(struct SlotFormatIndicator),
	offsetof(struct SlotFormatIndicator, _asn_ctx),
	asn_MAP_SlotFormatIndicator_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_SlotFormatIndicator_oms_1,	/* Optional members */
	2, 6,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SlotFormatIndicator = {
	"SlotFormatIndicator",
	"SlotFormatIndicator",
	&asn_OP_SEQUENCE,
	asn_DEF_SlotFormatIndicator_tags_1,
	sizeof(asn_DEF_SlotFormatIndicator_tags_1)
		/sizeof(asn_DEF_SlotFormatIndicator_tags_1[0]), /* 1 */
	asn_DEF_SlotFormatIndicator_tags_1,	/* Same as above */
	sizeof(asn_DEF_SlotFormatIndicator_tags_1)
		/sizeof(asn_DEF_SlotFormatIndicator_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SlotFormatIndicator_1,
	10,	/* Elements count */
	&asn_SPC_SlotFormatIndicator_specs_1	/* Additional specs */
};
