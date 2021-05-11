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

#ifndef	_MeasAndMobParametersFRX_Diff_H_
#define	_MeasAndMobParametersFRX_Diff_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasAndMobParametersFRX_Diff__ss_SINR_Meas {
	MeasAndMobParametersFRX_Diff__ss_SINR_Meas_supported	= 0
} e_MeasAndMobParametersFRX_Diff__ss_SINR_Meas;
typedef enum MeasAndMobParametersFRX_Diff__csi_RSRP_AndRSRQ_MeasWithSSB {
	MeasAndMobParametersFRX_Diff__csi_RSRP_AndRSRQ_MeasWithSSB_supported	= 0
} e_MeasAndMobParametersFRX_Diff__csi_RSRP_AndRSRQ_MeasWithSSB;
typedef enum MeasAndMobParametersFRX_Diff__csi_RSRP_AndRSRQ_MeasWithoutSSB {
	MeasAndMobParametersFRX_Diff__csi_RSRP_AndRSRQ_MeasWithoutSSB_supported	= 0
} e_MeasAndMobParametersFRX_Diff__csi_RSRP_AndRSRQ_MeasWithoutSSB;
typedef enum MeasAndMobParametersFRX_Diff__csi_SINR_Meas {
	MeasAndMobParametersFRX_Diff__csi_SINR_Meas_supported	= 0
} e_MeasAndMobParametersFRX_Diff__csi_SINR_Meas;
typedef enum MeasAndMobParametersFRX_Diff__csi_RS_RLM {
	MeasAndMobParametersFRX_Diff__csi_RS_RLM_supported	= 0
} e_MeasAndMobParametersFRX_Diff__csi_RS_RLM;
typedef enum MeasAndMobParametersFRX_Diff__ext1__handoverInterF {
	MeasAndMobParametersFRX_Diff__ext1__handoverInterF_supported	= 0
} e_MeasAndMobParametersFRX_Diff__ext1__handoverInterF;
typedef enum MeasAndMobParametersFRX_Diff__ext1__handoverLTE_EPC {
	MeasAndMobParametersFRX_Diff__ext1__handoverLTE_EPC_supported	= 0
} e_MeasAndMobParametersFRX_Diff__ext1__handoverLTE_EPC;
typedef enum MeasAndMobParametersFRX_Diff__ext1__handoverLTE_5GC {
	MeasAndMobParametersFRX_Diff__ext1__handoverLTE_5GC_supported	= 0
} e_MeasAndMobParametersFRX_Diff__ext1__handoverLTE_5GC;
typedef enum MeasAndMobParametersFRX_Diff__ext2__maxNumberResource_CSI_RS_RLM {
	MeasAndMobParametersFRX_Diff__ext2__maxNumberResource_CSI_RS_RLM_n2	= 0,
	MeasAndMobParametersFRX_Diff__ext2__maxNumberResource_CSI_RS_RLM_n4	= 1,
	MeasAndMobParametersFRX_Diff__ext2__maxNumberResource_CSI_RS_RLM_n6	= 2,
	MeasAndMobParametersFRX_Diff__ext2__maxNumberResource_CSI_RS_RLM_n8	= 3
} e_MeasAndMobParametersFRX_Diff__ext2__maxNumberResource_CSI_RS_RLM;
typedef enum MeasAndMobParametersFRX_Diff__ext3__simultaneousRxDataSSB_DiffNumerology {
	MeasAndMobParametersFRX_Diff__ext3__simultaneousRxDataSSB_DiffNumerology_supported	= 0
} e_MeasAndMobParametersFRX_Diff__ext3__simultaneousRxDataSSB_DiffNumerology;

/* MeasAndMobParametersFRX-Diff */
typedef struct MeasAndMobParametersFRX_Diff {
	long	*ss_SINR_Meas;	/* OPTIONAL */
	long	*csi_RSRP_AndRSRQ_MeasWithSSB;	/* OPTIONAL */
	long	*csi_RSRP_AndRSRQ_MeasWithoutSSB;	/* OPTIONAL */
	long	*csi_SINR_Meas;	/* OPTIONAL */
	long	*csi_RS_RLM;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MeasAndMobParametersFRX_Diff__ext1 {
		long	*handoverInterF;	/* OPTIONAL */
		long	*handoverLTE_EPC;	/* OPTIONAL */
		long	*handoverLTE_5GC;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct MeasAndMobParametersFRX_Diff__ext2 {
		long	*maxNumberResource_CSI_RS_RLM;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct MeasAndMobParametersFRX_Diff__ext3 {
		long	*simultaneousRxDataSSB_DiffNumerology;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasAndMobParametersFRX_Diff_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ss_SINR_Meas_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_csi_RSRP_AndRSRQ_MeasWithSSB_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_csi_RSRP_AndRSRQ_MeasWithoutSSB_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_csi_SINR_Meas_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_csi_RS_RLM_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_handoverInterF_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_handoverLTE_EPC_16;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_handoverLTE_5GC_18;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumberResource_CSI_RS_RLM_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_simultaneousRxDataSSB_DiffNumerology_27;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MeasAndMobParametersFRX_Diff;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasAndMobParametersFRX_Diff_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasAndMobParametersFRX_Diff_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasAndMobParametersFRX_Diff_H_ */
#include "asn_internal.h"
