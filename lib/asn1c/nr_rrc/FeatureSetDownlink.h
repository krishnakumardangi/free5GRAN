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

#ifndef	_FeatureSetDownlink_H_
#define	_FeatureSetDownlink_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FreqSeparationClass.h"
#include "NativeEnumerated.h"
#include "FeatureSetDownlinkPerCC-Id.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FeatureSetDownlink__scalingFactor {
	FeatureSetDownlink__scalingFactor_f0p4	= 0,
	FeatureSetDownlink__scalingFactor_f0p75	= 1,
	FeatureSetDownlink__scalingFactor_f0p8	= 2
} e_FeatureSetDownlink__scalingFactor;
typedef enum FeatureSetDownlink__crossCarrierScheduling_OtherSCS {
	FeatureSetDownlink__crossCarrierScheduling_OtherSCS_supported	= 0
} e_FeatureSetDownlink__crossCarrierScheduling_OtherSCS;
typedef enum FeatureSetDownlink__scellWithoutSSB {
	FeatureSetDownlink__scellWithoutSSB_supported	= 0
} e_FeatureSetDownlink__scellWithoutSSB;
typedef enum FeatureSetDownlink__csi_RS_MeasSCellWithoutSSB {
	FeatureSetDownlink__csi_RS_MeasSCellWithoutSSB_supported	= 0
} e_FeatureSetDownlink__csi_RS_MeasSCellWithoutSSB;
typedef enum FeatureSetDownlink__dummy1 {
	FeatureSetDownlink__dummy1_supported	= 0
} e_FeatureSetDownlink__dummy1;
typedef enum FeatureSetDownlink__type1_3_CSS {
	FeatureSetDownlink__type1_3_CSS_supported	= 0
} e_FeatureSetDownlink__type1_3_CSS;
typedef enum FeatureSetDownlink__pdcch_MonitoringAnyOccasions {
	FeatureSetDownlink__pdcch_MonitoringAnyOccasions_withoutDCI_Gap	= 0,
	FeatureSetDownlink__pdcch_MonitoringAnyOccasions_withDCI_Gap	= 1
} e_FeatureSetDownlink__pdcch_MonitoringAnyOccasions;
typedef enum FeatureSetDownlink__dummy2 {
	FeatureSetDownlink__dummy2_supported	= 0
} e_FeatureSetDownlink__dummy2;
typedef enum FeatureSetDownlink__ue_SpecificUL_DL_Assignment {
	FeatureSetDownlink__ue_SpecificUL_DL_Assignment_supported	= 0
} e_FeatureSetDownlink__ue_SpecificUL_DL_Assignment;
typedef enum FeatureSetDownlink__searchSpaceSharingCA_DL {
	FeatureSetDownlink__searchSpaceSharingCA_DL_supported	= 0
} e_FeatureSetDownlink__searchSpaceSharingCA_DL;
typedef enum FeatureSetDownlink__timeDurationForQCL__scs_60kHz {
	FeatureSetDownlink__timeDurationForQCL__scs_60kHz_s7	= 0,
	FeatureSetDownlink__timeDurationForQCL__scs_60kHz_s14	= 1,
	FeatureSetDownlink__timeDurationForQCL__scs_60kHz_s28	= 2
} e_FeatureSetDownlink__timeDurationForQCL__scs_60kHz;
typedef enum FeatureSetDownlink__timeDurationForQCL__scs_120kHz {
	FeatureSetDownlink__timeDurationForQCL__scs_120kHz_s14	= 0,
	FeatureSetDownlink__timeDurationForQCL__scs_120kHz_s28	= 1
} e_FeatureSetDownlink__timeDurationForQCL__scs_120kHz;
typedef enum FeatureSetDownlink__pdsch_ProcessingType1_DifferentTB_PerSlot__scs_15kHz {
	FeatureSetDownlink__pdsch_ProcessingType1_DifferentTB_PerSlot__scs_15kHz_upto2	= 0,
	FeatureSetDownlink__pdsch_ProcessingType1_DifferentTB_PerSlot__scs_15kHz_upto4	= 1,
	FeatureSetDownlink__pdsch_ProcessingType1_DifferentTB_PerSlot__scs_15kHz_upto7	= 2
} e_FeatureSetDownlink__pdsch_ProcessingType1_DifferentTB_PerSlot__scs_15kHz;
typedef enum FeatureSetDownlink__pdsch_ProcessingType1_DifferentTB_PerSlot__scs_30kHz {
	FeatureSetDownlink__pdsch_ProcessingType1_DifferentTB_PerSlot__scs_30kHz_upto2	= 0,
	FeatureSetDownlink__pdsch_ProcessingType1_DifferentTB_PerSlot__scs_30kHz_upto4	= 1,
	FeatureSetDownlink__pdsch_ProcessingType1_DifferentTB_PerSlot__scs_30kHz_upto7	= 2
} e_FeatureSetDownlink__pdsch_ProcessingType1_DifferentTB_PerSlot__scs_30kHz;
typedef enum FeatureSetDownlink__pdsch_ProcessingType1_DifferentTB_PerSlot__scs_60kHz {
	FeatureSetDownlink__pdsch_ProcessingType1_DifferentTB_PerSlot__scs_60kHz_upto2	= 0,
	FeatureSetDownlink__pdsch_ProcessingType1_DifferentTB_PerSlot__scs_60kHz_upto4	= 1,
	FeatureSetDownlink__pdsch_ProcessingType1_DifferentTB_PerSlot__scs_60kHz_upto7	= 2
} e_FeatureSetDownlink__pdsch_ProcessingType1_DifferentTB_PerSlot__scs_60kHz;
typedef enum FeatureSetDownlink__pdsch_ProcessingType1_DifferentTB_PerSlot__scs_120kHz {
	FeatureSetDownlink__pdsch_ProcessingType1_DifferentTB_PerSlot__scs_120kHz_upto2	= 0,
	FeatureSetDownlink__pdsch_ProcessingType1_DifferentTB_PerSlot__scs_120kHz_upto4	= 1,
	FeatureSetDownlink__pdsch_ProcessingType1_DifferentTB_PerSlot__scs_120kHz_upto7	= 2
} e_FeatureSetDownlink__pdsch_ProcessingType1_DifferentTB_PerSlot__scs_120kHz;

/* Forward declarations */
struct DummyA;
struct DummyB;
struct DummyC;
struct DummyD;
struct DummyE;

/* FeatureSetDownlink */
typedef struct FeatureSetDownlink {
	struct FeatureSetDownlink__featureSetListPerDownlinkCC {
		A_SEQUENCE_OF(FeatureSetDownlinkPerCC_Id_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} featureSetListPerDownlinkCC;
	FreqSeparationClass_t	*intraBandFreqSeparationDL;	/* OPTIONAL */
	long	*scalingFactor;	/* OPTIONAL */
	long	*crossCarrierScheduling_OtherSCS;	/* OPTIONAL */
	long	*scellWithoutSSB;	/* OPTIONAL */
	long	*csi_RS_MeasSCellWithoutSSB;	/* OPTIONAL */
	long	*dummy1;	/* OPTIONAL */
	long	*type1_3_CSS;	/* OPTIONAL */
	long	*pdcch_MonitoringAnyOccasions;	/* OPTIONAL */
	long	*dummy2;	/* OPTIONAL */
	long	*ue_SpecificUL_DL_Assignment;	/* OPTIONAL */
	long	*searchSpaceSharingCA_DL;	/* OPTIONAL */
	struct FeatureSetDownlink__timeDurationForQCL {
		long	*scs_60kHz;	/* OPTIONAL */
		long	*scs_120kHz;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *timeDurationForQCL;
	struct FeatureSetDownlink__pdsch_ProcessingType1_DifferentTB_PerSlot {
		long	*scs_15kHz;	/* OPTIONAL */
		long	*scs_30kHz;	/* OPTIONAL */
		long	*scs_60kHz;	/* OPTIONAL */
		long	*scs_120kHz;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pdsch_ProcessingType1_DifferentTB_PerSlot;
	struct DummyA	*dummy3;	/* OPTIONAL */
	struct FeatureSetDownlink__dummy4 {
		A_SEQUENCE_OF(struct DummyB) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dummy4;
	struct FeatureSetDownlink__dummy5 {
		A_SEQUENCE_OF(struct DummyC) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dummy5;
	struct FeatureSetDownlink__dummy6 {
		A_SEQUENCE_OF(struct DummyD) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dummy6;
	struct FeatureSetDownlink__dummy7 {
		A_SEQUENCE_OF(struct DummyE) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dummy7;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FeatureSetDownlink_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_scalingFactor_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_crossCarrierScheduling_OtherSCS_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_scellWithoutSSB_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_csi_RS_MeasSCellWithoutSSB_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dummy1_15;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_type1_3_CSS_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pdcch_MonitoringAnyOccasions_19;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dummy2_22;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ue_SpecificUL_DL_Assignment_24;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_searchSpaceSharingCA_DL_26;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_scs_60kHz_29;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_scs_120kHz_33;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_scs_15kHz_37;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_scs_30kHz_41;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_scs_60kHz_45;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_scs_120kHz_49;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_FeatureSetDownlink;
extern asn_SEQUENCE_specifics_t asn_SPC_FeatureSetDownlink_specs_1;
extern asn_TYPE_member_t asn_MBR_FeatureSetDownlink_1[19];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DummyA.h"
#include "DummyB.h"
#include "DummyC.h"
#include "DummyD.h"
#include "DummyE.h"

#endif	/* _FeatureSetDownlink_H_ */
#include "asn_internal.h"
